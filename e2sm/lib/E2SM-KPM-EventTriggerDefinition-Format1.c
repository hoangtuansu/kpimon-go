/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm_v3.asn"
 * 	`asn1c -pdu=auto -D ./e2sm`
 */

#include "E2SM-KPM-EventTriggerDefinition-Format1.h"

static int
reportingPeriod_2_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value >= 1UL && value <= 4294967295UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_reportingPeriod_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value >= 1UL && value <= 4294967295UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_reportingPeriod_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (1..4294967295) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_reportingPeriod_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  1,  4294967295 }	/* (1..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_reportingPeriod_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (1..4294967295) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_reportingPeriod_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  1,  4294967295 }	/* (1..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_specifics_t asn_SPC_reportingPeriod_specs_2 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_reportingPeriod_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportingPeriod_2 = {
	"reportingPeriod",
	"reportingPeriod",
	&asn_OP_NativeInteger,
	asn_DEF_reportingPeriod_tags_2,
	sizeof(asn_DEF_reportingPeriod_tags_2)
		/sizeof(asn_DEF_reportingPeriod_tags_2[0]) - 1, /* 1 */
	asn_DEF_reportingPeriod_tags_2,	/* Same as above */
	sizeof(asn_DEF_reportingPeriod_tags_2)
		/sizeof(asn_DEF_reportingPeriod_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_reportingPeriod_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_reportingPeriod_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		reportingPeriod_2_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_reportingPeriod_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2SM_KPM_EventTriggerDefinition_Format1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_EventTriggerDefinition_Format1, reportingPeriod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportingPeriod_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_reportingPeriod_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_reportingPeriod_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_reportingPeriod_constraint_1
		},
		0, 0, /* No default value */
		"reportingPeriod"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_EventTriggerDefinition_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportingPeriod */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_EventTriggerDefinition_Format1_specs_1 = {
	sizeof(struct E2SM_KPM_EventTriggerDefinition_Format1),
	offsetof(struct E2SM_KPM_EventTriggerDefinition_Format1, _asn_ctx),
	asn_MAP_E2SM_KPM_EventTriggerDefinition_Format1_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1 = {
	"E2SM-KPM-EventTriggerDefinition-Format1",
	"E2SM-KPM-EventTriggerDefinition-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1,
	sizeof(asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_EventTriggerDefinition_Format1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_KPM_EventTriggerDefinition_Format1_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_KPM_EventTriggerDefinition_Format1_specs_1	/* Additional specs */
};

