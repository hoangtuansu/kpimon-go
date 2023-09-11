/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_v3.asn"
 * 	`asn1c -D ./e2sm`
 */

#ifndef	_MME_Group_ID_H_
#define	_MME_Group_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MME-Group-ID */
typedef OCTET_STRING_t	 MME_Group_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MME_Group_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MME_Group_ID;
asn_struct_free_f MME_Group_ID_free;
asn_struct_print_f MME_Group_ID_print;
asn_constr_check_f MME_Group_ID_constraint;
ber_type_decoder_f MME_Group_ID_decode_ber;
der_type_encoder_f MME_Group_ID_encode_der;
xer_type_decoder_f MME_Group_ID_decode_xer;
xer_type_encoder_f MME_Group_ID_encode_xer;
jer_type_encoder_f MME_Group_ID_encode_jer;
oer_type_decoder_f MME_Group_ID_decode_oer;
oer_type_encoder_f MME_Group_ID_encode_oer;
per_type_decoder_f MME_Group_ID_decode_uper;
per_type_encoder_f MME_Group_ID_encode_uper;
per_type_decoder_f MME_Group_ID_decode_aper;
per_type_encoder_f MME_Group_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MME_Group_ID_H_ */
#include <asn_internal.h>
