/*
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
 */



/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asnFiles/X2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-ContextReferenceAtWT.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_UE_ContextReferenceAtWT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_ContextReferenceAtWT, wTID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_WTID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wTID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_ContextReferenceAtWT, wT_UE_XwAP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WT_UE_XwAP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wT-UE-XwAP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_ContextReferenceAtWT, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_170P3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UE_ContextReferenceAtWT_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_UE_ContextReferenceAtWT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_ContextReferenceAtWT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wTID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* wT-UE-XwAP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_ContextReferenceAtWT_specs_1 = {
	sizeof(struct UE_ContextReferenceAtWT),
	offsetof(struct UE_ContextReferenceAtWT, _asn_ctx),
	asn_MAP_UE_ContextReferenceAtWT_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_ContextReferenceAtWT_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_ContextReferenceAtWT = {
	"UE-ContextReferenceAtWT",
	"UE-ContextReferenceAtWT",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_ContextReferenceAtWT_tags_1,
	sizeof(asn_DEF_UE_ContextReferenceAtWT_tags_1)
		/sizeof(asn_DEF_UE_ContextReferenceAtWT_tags_1[0]), /* 1 */
	asn_DEF_UE_ContextReferenceAtWT_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_ContextReferenceAtWT_tags_1)
		/sizeof(asn_DEF_UE_ContextReferenceAtWT_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_ContextReferenceAtWT_1,
	3,	/* Elements count */
	&asn_SPC_UE_ContextReferenceAtWT_specs_1	/* Additional specs */
};

