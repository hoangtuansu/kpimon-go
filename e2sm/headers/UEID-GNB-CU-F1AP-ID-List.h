/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_UEID_GNB_CU_F1AP_ID_List_H_
#define	_UEID_GNB_CU_F1AP_ID_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEID_GNB_CU_CP_F1AP_ID_Item;

/* UEID-GNB-CU-F1AP-ID-List */
typedef struct UEID_GNB_CU_F1AP_ID_List {
	A_SEQUENCE_OF(struct UEID_GNB_CU_CP_F1AP_ID_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_GNB_CU_F1AP_ID_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_GNB_CU_F1AP_ID_List;
extern asn_SET_OF_specifics_t asn_SPC_UEID_GNB_CU_F1AP_ID_List_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_GNB_CU_F1AP_ID_List_1[1];
extern asn_per_constraints_t asn_PER_type_UEID_GNB_CU_F1AP_ID_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_GNB_CU_F1AP_ID_List_H_ */
#include "asn_internal.h"
