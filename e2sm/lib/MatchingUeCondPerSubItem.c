/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#include "MatchingUeCondPerSubItem.h"

asn_TYPE_member_t asn_MBR_MatchingUeCondPerSubItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MatchingUeCondPerSubItem, testCondInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TestCondInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"testCondInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct MatchingUeCondPerSubItem, logicalOR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalOR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalOR"
		},
};
static const int asn_MAP_MatchingUeCondPerSubItem_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MatchingUeCondPerSubItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MatchingUeCondPerSubItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* testCondInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* logicalOR */
};
asn_SEQUENCE_specifics_t asn_SPC_MatchingUeCondPerSubItem_specs_1 = {
	sizeof(struct MatchingUeCondPerSubItem),
	offsetof(struct MatchingUeCondPerSubItem, _asn_ctx),
	asn_MAP_MatchingUeCondPerSubItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MatchingUeCondPerSubItem_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MatchingUeCondPerSubItem = {
	"MatchingUeCondPerSubItem",
	"MatchingUeCondPerSubItem",
	&asn_OP_SEQUENCE,
	asn_DEF_MatchingUeCondPerSubItem_tags_1,
	sizeof(asn_DEF_MatchingUeCondPerSubItem_tags_1)
		/sizeof(asn_DEF_MatchingUeCondPerSubItem_tags_1[0]), /* 1 */
	asn_DEF_MatchingUeCondPerSubItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_MatchingUeCondPerSubItem_tags_1)
		/sizeof(asn_DEF_MatchingUeCondPerSubItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MatchingUeCondPerSubItem_1,
	2,	/* Elements count */
	&asn_SPC_MatchingUeCondPerSubItem_specs_1	/* Additional specs */
};

