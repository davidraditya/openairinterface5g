/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MIMO_CA_ParametersPerBoBCPerTM_v1430_H_
#define	_MIMO_CA_ParametersPerBoBCPerTM_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14 {
	MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14_different	= 0
} e_MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingNP_r14;
typedef enum MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14 {
	MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14_different	= 0
} e_MIMO_CA_ParametersPerBoBCPerTM_v1430__csi_ReportingAdvanced_r14;

/* MIMO-CA-ParametersPerBoBCPerTM-v1430 */
typedef struct MIMO_CA_ParametersPerBoBCPerTM_v1430 {
	long	*csi_ReportingNP_r14	/* OPTIONAL */;
	long	*csi_ReportingAdvanced_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_CA_ParametersPerBoBCPerTM_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingNP_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingAdvanced_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CA_ParametersPerBoBCPerTM_v1430_H_ */
#include <asn_internal.h>
