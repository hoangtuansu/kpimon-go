/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_v3.asn"
 * 	`asn1c -pdu=auto -D ./e2sm`
 */

#include "GlobalenGNB-ID.h"

asn_TYPE_member_t asn_MBR_GlobalenGNB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalenGNB_ID, pLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentity,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pLMN-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalenGNB_ID, en_gNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EN_GNB_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"en-gNB-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_GlobalenGNB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalenGNB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* en-gNB-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_GlobalenGNB_ID_specs_1 = {
	sizeof(struct GlobalenGNB_ID),
	offsetof(struct GlobalenGNB_ID, _asn_ctx),
	asn_MAP_GlobalenGNB_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GlobalenGNB_ID = {
	"GlobalenGNB-ID",
	"GlobalenGNB-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_GlobalenGNB_ID_tags_1,
	sizeof(asn_DEF_GlobalenGNB_ID_tags_1)
		/sizeof(asn_DEF_GlobalenGNB_ID_tags_1[0]), /* 1 */
	asn_DEF_GlobalenGNB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_GlobalenGNB_ID_tags_1)
		/sizeof(asn_DEF_GlobalenGNB_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GlobalenGNB_ID_1,
	2,	/* Elements count */
	&asn_SPC_GlobalenGNB_ID_specs_1	/* Additional specs */
};

