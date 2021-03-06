/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_SeNBDelete_H_
#define	_SeNBDelete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CRNTI.h"
#include "ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SeNBDelete */
typedef struct SeNBDelete {
	CRNTI_t	 crnti;
	ECGI_t	 m_ecgi;
	ECGI_t	 s_ecgi;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeNBDelete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeNBDelete;
extern asn_SEQUENCE_specifics_t asn_SPC_SeNBDelete_specs_1;
extern asn_TYPE_member_t asn_MBR_SeNBDelete_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SeNBDelete_H_ */
#include <asn_internal.h>
