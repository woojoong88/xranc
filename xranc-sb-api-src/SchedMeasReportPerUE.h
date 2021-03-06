/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_SchedMeasReportPerUE_H_
#define	_SchedMeasReportPerUE_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include "CRNTI.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedMeasRepPerServCell;

/* SchedMeasReportPerUE */
typedef struct SchedMeasReportPerUE {
	ECGI_t	 ecgi;
	CRNTI_t	 crnti;
	struct SchedMeasReportPerUE__sched_report_serv_cells {
		A_SEQUENCE_OF(struct SchedMeasRepPerServCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sched_report_serv_cells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedMeasReportPerUE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedMeasReportPerUE;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedMeasReportPerUE_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedMeasReportPerUE_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SchedMeasRepPerServCell.h"

#endif	/* _SchedMeasReportPerUE_H_ */
#include <asn_internal.h>
