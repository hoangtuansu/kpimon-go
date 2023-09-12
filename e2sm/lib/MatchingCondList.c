/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D e2sm`
 */

#include "MatchingCondList.h"

#include "MatchingCondItem.h"
asn_per_constraints_t asn_PER_type_MatchingCondList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 15,  15,  1,  32768 }	/* (SIZE(1..32768)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MatchingCondList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_MatchingCondItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MatchingCondList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MatchingCondList_specs_1 = {
	sizeof(struct MatchingCondList),
	offsetof(struct MatchingCondList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_MatchingCondList = {
	"MatchingCondList",
	"MatchingCondList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MatchingCondList_tags_1,
	sizeof(asn_DEF_MatchingCondList_tags_1)
		/sizeof(asn_DEF_MatchingCondList_tags_1[0]), /* 1 */
	asn_DEF_MatchingCondList_tags_1,	/* Same as above */
	sizeof(asn_DEF_MatchingCondList_tags_1)
		/sizeof(asn_DEF_MatchingCondList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_MatchingCondList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MatchingCondList_1,
	1,	/* Single element */
	&asn_SPC_MatchingCondList_specs_1	/* Additional specs */
};

