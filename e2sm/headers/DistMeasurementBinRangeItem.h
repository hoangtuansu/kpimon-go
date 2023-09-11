/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm_v3.asn"
 * 	`asn1c -pdu=auto -D ./e2sm`
 */

#ifndef	_DistMeasurementBinRangeItem_H_
#define	_DistMeasurementBinRangeItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementType.h"
#include "BinRangeDefinition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DistMeasurementBinRangeItem */
typedef struct DistMeasurementBinRangeItem {
	MeasurementType_t	 measType;
	BinRangeDefinition_t	 binRangeDef;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DistMeasurementBinRangeItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DistMeasurementBinRangeItem;
extern asn_SEQUENCE_specifics_t asn_SPC_DistMeasurementBinRangeItem_specs_1;
extern asn_TYPE_member_t asn_MBR_DistMeasurementBinRangeItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DistMeasurementBinRangeItem_H_ */
#include <asn_internal.h>
