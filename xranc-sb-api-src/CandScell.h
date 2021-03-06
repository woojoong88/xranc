/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-API"
 * 	found in "../xranc-sb-api/xRAN-API-IEs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#ifndef	_CandScell_H_
#define	_CandScell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "ARFCN-Value.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CandScell */
typedef struct CandScell {
	PhysCellId_t	 pci;
	ARFCN_Value_t	 earfcn_dl;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CandScell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CandScell;
extern asn_SEQUENCE_specifics_t asn_SPC_CandScell_specs_1;
extern asn_TYPE_member_t asn_MBR_CandScell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CandScell_H_ */
#include <asn_internal.h>
