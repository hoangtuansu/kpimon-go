/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D e2sm`
 */

#include "S-NSSAI.h"

asn_TYPE_member_t asn_MBR_S_NSSAI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S_NSSAI, sST),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SST,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sST"
		},
	{ ATF_POINTER, 1, offsetof(struct S_NSSAI, sD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sD"
		},
};
static const int asn_MAP_S_NSSAI_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S_NSSAI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S_NSSAI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sST */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sD */
};
asn_SEQUENCE_specifics_t asn_SPC_S_NSSAI_specs_1 = {
	sizeof(struct S_NSSAI),
	offsetof(struct S_NSSAI, _asn_ctx),
	asn_MAP_S_NSSAI_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S_NSSAI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S_NSSAI = {
	"S-NSSAI",
	"S-NSSAI",
	&asn_OP_SEQUENCE,
	asn_DEF_S_NSSAI_tags_1,
	sizeof(asn_DEF_S_NSSAI_tags_1)
		/sizeof(asn_DEF_S_NSSAI_tags_1[0]), /* 1 */
	asn_DEF_S_NSSAI_tags_1,	/* Same as above */
	sizeof(asn_DEF_S_NSSAI_tags_1)
		/sizeof(asn_DEF_S_NSSAI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S_NSSAI_1,
	2,	/* Elements count */
	&asn_SPC_S_NSSAI_specs_1	/* Additional specs */
};

