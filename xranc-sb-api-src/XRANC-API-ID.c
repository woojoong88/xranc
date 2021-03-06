/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "XRANC-API-ID.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_XRANC_API_ID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_XRANC_API_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  34 }	/* (0..34,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_XRANC_API_ID_value2enum_1[] = {
	{ 0,	17,	"cellConfigRequest" },
	{ 1,	16,	"cellConfigReport" },
	{ 2,	18,	"uEAdmissionRequest" },
	{ 3,	19,	"uEAdmissionResponse" },
	{ 4,	17,	"uEAdmissionStatus" },
	{ 5,	15,	"uEContextUpdate" },
	{ 6,	13,	"uEReconfigInd" },
	{ 7,	12,	"uEReleaseInd" },
	{ 8,	22,	"bearerAdmissionRequest" },
	{ 9,	23,	"bearerAdmissionResponse" },
	{ 10,	21,	"bearerAdmissionStatus" },
	{ 11,	16,	"bearerReleaseInd" },
	{ 12,	9,	"hORequest" },
	{ 13,	9,	"hOFailure" },
	{ 14,	10,	"hOComplete" },
	{ 15,	15,	"rXSigMeasReport" },
	{ 16,	12,	"l2MeasConfig" },
	{ 17,	20,	"radioMeasReportPerUE" },
	{ 18,	22,	"radioMeasReportPerCell" },
	{ 19,	20,	"schedMeasReportPerUE" },
	{ 20,	22,	"schedMeasReportPerCell" },
	{ 21,	19,	"pDCPMeasReportPerUe" },
	{ 22,	16,	"uECapabilityInfo" },
	{ 23,	19,	"uECapabilityEnquiry" },
	{ 24,	8,	"scellAdd" },
	{ 25,	14,	"scellAddStatus" },
	{ 26,	11,	"scellDelete" },
	{ 27,	9,	"rRMConfig" },
	{ 28,	15,	"rRMConfigStatus" },
	{ 29,	7,	"seNBAdd" },
	{ 30,	13,	"seNBAddStatus" },
	{ 31,	10,	"seNBDelete" },
	{ 32,	18,	"trafficSplitConfig" },
	{ 33,	7,	"hoCause" },
	{ 34,	13,	"rRCMeasConfig" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_XRANC_API_ID_enum2value_1[] = {
	8,	/* bearerAdmissionRequest(8) */
	9,	/* bearerAdmissionResponse(9) */
	10,	/* bearerAdmissionStatus(10) */
	11,	/* bearerReleaseInd(11) */
	1,	/* cellConfigReport(1) */
	0,	/* cellConfigRequest(0) */
	14,	/* hOComplete(14) */
	13,	/* hOFailure(13) */
	12,	/* hORequest(12) */
	33,	/* hoCause(33) */
	16,	/* l2MeasConfig(16) */
	21,	/* pDCPMeasReportPerUe(21) */
	34,	/* rRCMeasConfig(34) */
	27,	/* rRMConfig(27) */
	28,	/* rRMConfigStatus(28) */
	15,	/* rXSigMeasReport(15) */
	18,	/* radioMeasReportPerCell(18) */
	17,	/* radioMeasReportPerUE(17) */
	24,	/* scellAdd(24) */
	25,	/* scellAddStatus(25) */
	26,	/* scellDelete(26) */
	20,	/* schedMeasReportPerCell(20) */
	19,	/* schedMeasReportPerUE(19) */
	29,	/* seNBAdd(29) */
	30,	/* seNBAddStatus(30) */
	31,	/* seNBDelete(31) */
	32,	/* trafficSplitConfig(32) */
	2,	/* uEAdmissionRequest(2) */
	3,	/* uEAdmissionResponse(3) */
	4,	/* uEAdmissionStatus(4) */
	23,	/* uECapabilityEnquiry(23) */
	22,	/* uECapabilityInfo(22) */
	5,	/* uEContextUpdate(5) */
	6,	/* uEReconfigInd(6) */
	7	/* uEReleaseInd(7) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_XRANC_API_ID_specs_1 = {
	asn_MAP_XRANC_API_ID_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_XRANC_API_ID_enum2value_1,	/* N => "tag"; sorted by N */
	35,	/* Number of elements in the maps */
	36,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_XRANC_API_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_XRANC_API_ID = {
	"XRANC-API-ID",
	"XRANC-API-ID",
	&asn_OP_NativeEnumerated,
	asn_DEF_XRANC_API_ID_tags_1,
	sizeof(asn_DEF_XRANC_API_ID_tags_1)
		/sizeof(asn_DEF_XRANC_API_ID_tags_1[0]), /* 1 */
	asn_DEF_XRANC_API_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_XRANC_API_ID_tags_1)
		/sizeof(asn_DEF_XRANC_API_ID_tags_1[0]), /* 1 */
	{ &asn_OER_type_XRANC_API_ID_constr_1, &asn_PER_type_XRANC_API_ID_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_XRANC_API_ID_specs_1	/* Additional specs */
};

