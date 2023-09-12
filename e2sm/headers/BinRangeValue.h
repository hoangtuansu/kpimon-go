/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "v3.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_BinRangeValue_H_
#define	_BinRangeValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeReal.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BinRangeValue_PR {
	BinRangeValue_PR_NOTHING,	/* No components present */
	BinRangeValue_PR_valueInt,
	BinRangeValue_PR_valueReal
	/* Extensions may appear below */
	
} BinRangeValue_PR;

/* BinRangeValue */
typedef struct BinRangeValue {
	BinRangeValue_PR present;
	union BinRangeValue_u {
		long	 valueInt;
		double	 valueReal;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BinRangeValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BinRangeValue;
extern asn_CHOICE_specifics_t asn_SPC_BinRangeValue_specs_1;
extern asn_TYPE_member_t asn_MBR_BinRangeValue_1[2];
extern asn_per_constraints_t asn_PER_type_BinRangeValue_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BinRangeValue_H_ */
#include "asn_internal.h"
