/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D e2sm`
 */

#include "GNB-ID.h"

static int
memb_gNB_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 22 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_gNB_ID_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  22,  32 }	/* (SIZE(22..32)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_GNB_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GNB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNB_ID, choice.gNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_gNB_ID_constr_2,  memb_gNB_ID_constraint_1 },
		0, 0, /* No default value */
		"gNB-ID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GNB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gNB-ID */
};
asn_CHOICE_specifics_t asn_SPC_GNB_ID_specs_1 = {
	sizeof(struct GNB_ID),
	offsetof(struct GNB_ID, _asn_ctx),
	offsetof(struct GNB_ID, present),
	sizeof(((struct GNB_ID *)0)->present),
	asn_MAP_GNB_ID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GNB_ID = {
	"GNB-ID",
	"GNB-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_GNB_ID_constr_1, CHOICE_constraint },
	asn_MBR_GNB_ID_1,
	1,	/* Elements count */
	&asn_SPC_GNB_ID_specs_1	/* Additional specs */
};

