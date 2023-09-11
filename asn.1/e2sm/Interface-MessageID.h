/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_v3.asn"
 * 	`asn1c -pdu=auto -D ./e2sm`
 */

#ifndef	_Interface_MessageID_H_
#define	_Interface_MessageID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum messageType {
	messageType_initiatingMessage	= 0,
	messageType_successfulOutcome	= 1,
	messageType_unsuccessfulOutcome	= 2
	/*
	 * Enumeration is extensible
	 */
} e_messageType;

/* Interface-MessageID */
typedef struct Interface_MessageID {
	long	 interfaceProcedureID;
	long	 messageType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Interface_MessageID_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_messageType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Interface_MessageID;

#ifdef __cplusplus
}
#endif

#endif	/* _Interface_MessageID_H_ */
#include <asn_internal.h>
