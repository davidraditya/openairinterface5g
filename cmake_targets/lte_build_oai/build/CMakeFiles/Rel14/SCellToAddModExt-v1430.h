/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SCellToAddModExt_v1430_H_
#define	_SCellToAddModExt_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SCellToAddModExt-v1430 */
typedef struct SCellToAddModExt_v1430 {
	long	*srs_SwitchFromServCellIndex_r14	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModExt_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModExt_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _SCellToAddModExt_v1430_H_ */
#include <asn_internal.h>