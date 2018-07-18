/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellsToAddModUTRA-TDD.h"

static int
memb_cellIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cellIndex_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CellsToAddModUTRA_TDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellsToAddModUTRA_TDD, cellIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cellIndex_constraint_1,
		&asn_PER_memb_cellIndex_constr_2,
		0,
		"cellIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsToAddModUTRA_TDD, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
};
static ber_tlv_tag_t asn_DEF_CellsToAddModUTRA_TDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellsToAddModUTRA_TDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIndex at 7602 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellId at 7604 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellsToAddModUTRA_TDD_specs_1 = {
	sizeof(struct CellsToAddModUTRA_TDD),
	offsetof(struct CellsToAddModUTRA_TDD, _asn_ctx),
	asn_MAP_CellsToAddModUTRA_TDD_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellsToAddModUTRA_TDD = {
	"CellsToAddModUTRA-TDD",
	"CellsToAddModUTRA-TDD",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CellsToAddModUTRA_TDD_tags_1,
	sizeof(asn_DEF_CellsToAddModUTRA_TDD_tags_1)
		/sizeof(asn_DEF_CellsToAddModUTRA_TDD_tags_1[0]), /* 1 */
	asn_DEF_CellsToAddModUTRA_TDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellsToAddModUTRA_TDD_tags_1)
		/sizeof(asn_DEF_CellsToAddModUTRA_TDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellsToAddModUTRA_TDD_1,
	2,	/* Elements count */
	&asn_SPC_CellsToAddModUTRA_TDD_specs_1	/* Additional specs */
};
