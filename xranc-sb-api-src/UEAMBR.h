/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-API"
 * 	found in "../xranc-sb-api/xRAN-API-IEs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_UEAMBR_H_
#define	_UEAMBR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEAMBR */
typedef struct UEAMBR {
	BitRate_t	 ambr_dl;
	BitRate_t	 ambr_ul;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAMBR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAMBR;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAMBR_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAMBR_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAMBR_H_ */
#include <asn_internal.h>
