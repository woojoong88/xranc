/*
 * Copyright 2019-present Open Networking Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gRPCServerImpl-UEAdmissionStatus.h"

gRPCServerImplUEAdmissionStatus::gRPCServerImplUEAdmissionStatus() {}

gRPCServerImplUEAdmissionStatus::gRPCServerImplUEAdmissionStatus(AbstractGWCoreComponent* gwCoreComponent) : gwCoreComponent(gwCoreComponent) {}

gRPCServerImplUEAdmissionStatus::gRPCServerImplUEAdmissionStatus(const log_service_t* logSrv, AbstractGWCoreComponent* gwCoreComponent) : logSrv(logSrv), gwCoreComponent(gwCoreComponent) {}

gRPCServerImplUEAdmissionStatus::~gRPCServerImplUEAdmissionStatus() {
    server->Shutdown();
    cq->Shutdown();
}

void
gRPCServerImplUEAdmissionStatus::run() {
    std::string serverInfo = getServerIP() + ":" + getServerPort();
    grpc::ServerBuilder builder;
    builder.AddListeningPort(serverInfo, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    cq = builder.AddCompletionQueue();
    server = builder.BuildAndStart();
    APIGWLogINFO(this->logSrv, "Server listening on " + serverInfo + " for UEAdmissionStatus");
    handleRPCs();
}

void
gRPCServerImplUEAdmissionStatus::handleRPCs() {
    new CallData (&service, cq.get(), gwCoreComponent, this->logSrv);
    void* tag;
    bool ok;
    while (true) {
        cq->Next(&tag, &ok);
        if (!ok) {
            APIGWLogWARN(logSrv, "gRPC server for UEAdmissionStatus is shutting down gracefully");
            break;
        }
        static_cast<CallData*>(tag)->proceed();
    }
}

void
gRPCServerImplUEAdmissionStatus::shutdownGRPCServer() {
    server->Shutdown();
    cq->Shutdown();
}

gRPCServerImplUEAdmissionStatus::CallData::CallData(gRPCUEAdmissionStatus::gRPCUEAdmissionStatusUpdater::AsyncService* service, grpc::ServerCompletionQueue* cq, AbstractGWCoreComponent* gwCoreComponent, const log_service_t* logSrv) : AbstractCallData(service, cq), status_(CREATE), gwCoreComponent_(gwCoreComponent), logSrv_(logSrv) {
    proceed();
}

gRPCServerImplUEAdmissionStatus::CallData::CallData(gRPCUEAdmissionStatus::gRPCUEAdmissionStatusUpdater::AsyncService* service, grpc::ServerCompletionQueue* cq, AbstractGWCoreComponent* gwCoreComponent, const log_service_t* logSrv) : AbstractCallData(service, cq), status_(CREATE), gwCoreComponent_(gwCoreComponent) {

}

void
gRPCServerImplUEAdmissionStatus::CallData::proceed() {
    if (status_ == CREATE) {
        status_ = PROCESS_UPDATEADMSTAT;
        service_->RequestUpdateUEAdmissionStatus(&ctx_, &request_, &responder_, cq_, cq_, this);
    } else if (status_ == PROCESS_UPDATEADMSTAT) {
        std::stringstream logMsg;
        logMsg << "RIC SB reports received UEAdmissionStatus Message (C-RNTI: " << request_.crnti()
            << ", PLMNID: " << request_.ecgi().plmnid() << ", ECID: " << request_.ecgi().ecid() << ")";
        APIGWLogINFO(logSrv_, logMsg.str().c_str());

        std::map<std::string, std::map<std::string, std::string>> message;
        std::map<std::string, std::string> tmpEcgiMap;
        std::map<std::string, std::string> tmpUEMap;

        // ECGI
        tmpEcgiMap[DB_PLMNID_KEY] = request_.ecgi().plmnid();
        tmpEcgiMap[DB_ECID_KEY] = request_.ecgi().ecid();
        message[DB_ECGI_KEY] = tmpEcgiMap;

        // UE
        tmpUEMap[DB_ECGI_KEY] = DB_ECGI_KEY;
        tmpUEMap[DB_CRNTI_KEY] = request_.crnti();
        message[DB_UE_KEY] = tmpUEMap;

        gwCoreComponent_->notifyEvent(SB_BUNDLE_KEY, REDIS_BUNDLE_KEY, message);
        gwCoreComponent_->notifyEvent(SB_BUNDLE_KEY, ONOS_BUNDLE_KEY, message);

        new CallData(service_, cq_, gwCoreComponent_, logSrv_);
        status_ = FINISH;
        responder_.Finish(reply_, grpc::Status::OK, this);
    } else {
        if (status_ != FINISH) {
            APIGWLogWARN(logSrv_, "gRPC server state machine for UEAdmissionStatus has an error - undefined status");
        }
        delete this;
    }
}

void
gRPCServerImplUEAdmissionStatus::setLogService(const log_service_t* logSrv) {
    this->logSrv = logSrv;
}

void
gRPCServerImplUEAdmissionStatus::setGWCoreComponent(AbstractGWCoreComponent* gwCoreComponent) {
    this->gwCoreComponent = gwCoreComponent;
}

AbstractGWCoreComponent*
gRPCServerImplUEAdmissionStatus::getGWCoreComponent() {
    return gwCoreComponent;
}