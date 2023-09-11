/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_v3.asn"
 * 	`asn1c -D ./e2sm`
 */

#include "EUTRA-CGI.h"

asn_TYPE_member_t asn_MBR_EUTRA_CGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_CGI, pLMNIdentity),
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
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_CGI, eUTRACellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRACellIdentity,
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
		"eUTRACellIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_EUTRA_CGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_CGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eUTRACellIdentity */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_CGI_specs_1 = {
	sizeof(struct EUTRA_CGI),
	offsetof(struct EUTRA_CGI, _asn_ctx),
	asn_MAP_EUTRA_CGI_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_CGI = {
	"EUTRA-CGI",
	"EUTRA-CGI",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_CGI_tags_1,
	sizeof(asn_DEF_EUTRA_CGI_tags_1)
		/sizeof(asn_DEF_EUTRA_CGI_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_CGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_CGI_tags_1)
		/sizeof(asn_DEF_EUTRA_CGI_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EUTRA_CGI_1,
	2,	/* Elements count */
	&asn_SPC_EUTRA_CGI_specs_1	/* Additional specs */
};

