/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_MatchingUEidItem_H_
#define	_MatchingUEidItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UEID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MatchingUEidItem */
typedef struct MatchingUEidItem {
	UEID_t	 ueID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingUEidItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingUEidItem;
extern asn_SEQUENCE_specifics_t asn_SPC_MatchingUEidItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingUEidItem_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingUEidItem_H_ */
#include "asn_internal.h"
