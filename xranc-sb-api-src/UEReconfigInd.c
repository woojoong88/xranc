/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XRAN-PDU"
 * 	found in "../xranc-sb-api/xRAN-API-PDUs.asn1"
 * 	`asn1c -fcompound-names -pdu=XRANCPDU`
 */

#include "UEReconfigInd.h"

asn_TYPE_member_t asn_MBR_UEReconfigInd_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEReconfigInd, crnti_old),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti-old"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEReconfigInd, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEReconfigInd, crnti_new),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crnti-new"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEReconfigInd, reconfig_cause),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReconfIndReason,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reconfig-cause"
		},
};
static const ber_tlv_tag_t asn_DEF_UEReconfigInd_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEReconfigInd_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crnti-old */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* crnti-new */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reconfig-cause */
};
asn_SEQUENCE_specifics_t asn_SPC_UEReconfigInd_specs_1 = {
	sizeof(struct UEReconfigInd),
	offsetof(struct UEReconfigInd, _asn_ctx),
	asn_MAP_UEReconfigInd_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEReconfigInd = {
	"UEReconfigInd",
	"UEReconfigInd",
	&asn_OP_SEQUENCE,
	asn_DEF_UEReconfigInd_tags_1,
	sizeof(asn_DEF_UEReconfigInd_tags_1)
		/sizeof(asn_DEF_UEReconfigInd_tags_1[0]), /* 1 */
	asn_DEF_UEReconfigInd_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEReconfigInd_tags_1)
		/sizeof(asn_DEF_UEReconfigInd_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEReconfigInd_1,
	4,	/* Elements count */
	&asn_SPC_UEReconfigInd_specs_1	/* Additional specs */
};

