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

#ifndef _CELIX_GWCORE_COMPONENT_H_
#define _CELIX_GWCORE_COMPONENT_H_

#include <iostream>
#include <map>
#include <string>
#include <sstream>

#include <log_service.h>
#include <log_helper.h>

#include "../../APIs/GWCore/AbstractGWCoreComponent.h"
#include "../../APIs/Bundles/AbstractBundleComponent.h"

#define GWCORE_CMD_INFO_NAME "gwcore_info"

#define REDIS_DB_IP "172.17.0.2"
#define REDIS_DB_PORT 6379
#define REDIS_TIMEOUT_SEC 1
#define REDIS_TIMOUET_USEC 500000

#define GRPC_SB_IP "127.0.0.1"
#define GRPC_SB_PORT "50002"

class GWCoreComponent : public AbstractGWCoreComponent {
    public:
        GWCoreComponent() = default;
        ~GWCoreComponent() = default;

        void init();
        void start();
        void stop();
        void deinit();

        void setLogService(const log_service_t* logSrv);

        int infoCmd(char* line, FILE* out, FILE* err);  //implements cmd service

        void notifyEvent() override;
        void registerBundle(std::string key, AbstractBundleComponent* bundleComponent) override;
        void unregisterBundle(std::string key) override;

    protected:

    private:
        const log_service_t* logSrv {nullptr};
};

#endif /* _CELIX_GWCORE_COMPONENT_H_ */