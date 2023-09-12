/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm_v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ./e2sm`
 */

#ifndef	_GranularityPeriod_H_
#define	_GranularityPeriod_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GranularityPeriod */
typedef unsigned long	 GranularityPeriod_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GranularityPeriod_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GranularityPeriod;
extern const asn_INTEGER_specifics_t asn_SPC_GranularityPeriod_specs_1;
asn_struct_free_f GranularityPeriod_free;
asn_struct_print_f GranularityPeriod_print;
asn_constr_check_f GranularityPeriod_constraint;
ber_type_decoder_f GranularityPeriod_decode_ber;
der_type_encoder_f GranularityPeriod_encode_der;
xer_type_decoder_f GranularityPeriod_decode_xer;
xer_type_encoder_f GranularityPeriod_encode_xer;
per_type_decoder_f GranularityPeriod_decode_uper;
per_type_encoder_f GranularityPeriod_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GranularityPeriod_H_ */
#include "asn_internal.h"
