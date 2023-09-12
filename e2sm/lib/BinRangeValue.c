/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm_v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ./e2sm`
 */

#include "BinRangeValue.h"

asn_per_constraints_t asn_PER_type_BinRangeValue_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_BinRangeValue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BinRangeValue, choice.valueInt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"valueInt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BinRangeValue, choice.valueReal),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"valueReal"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_BinRangeValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* valueInt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* valueReal */
};
asn_CHOICE_specifics_t asn_SPC_BinRangeValue_specs_1 = {
	sizeof(struct BinRangeValue),
	offsetof(struct BinRangeValue, _asn_ctx),
	offsetof(struct BinRangeValue, present),
	sizeof(((struct BinRangeValue *)0)->present),
	asn_MAP_BinRangeValue_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_BinRangeValue = {
	"BinRangeValue",
	"BinRangeValue",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_BinRangeValue_constr_1, CHOICE_constraint },
	asn_MBR_BinRangeValue_1,
	2,	/* Elements count */
	&asn_SPC_BinRangeValue_specs_1	/* Additional specs */
};

