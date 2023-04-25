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

#include "UE-ContextInformation-SgNBModReq.h"

#include "NRUESecurityCapabilities.h"
#include "UEAggregateMaximumBitRate.h"
#include "E-RABs-ToBeAdded-SgNBModReq-List.h"
#include "E-RABs-ToBeModified-SgNBModReq-List.h"
#include "E-RABs-ToBeReleased-SgNBModReq-List.h"
#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_UE_ContextInformation_SgNBModReq_1[] = {
	{ ATF_POINTER, 7, offsetof(struct UE_ContextInformation_SgNBModReq, nRUE_SecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRUESecurityCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRUE-SecurityCapabilities"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_ContextInformation_SgNBModReq, sgNB_SecurityKey),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SgNBSecurityKey,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNB-SecurityKey"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_ContextInformation_SgNBModReq, sgNBUEAggregateMaximumBitRate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNBUEAggregateMaximumBitRate"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_ContextInformation_SgNBModReq, e_RABs_ToBeAdded),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABs_ToBeAdded_SgNBModReq_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABs-ToBeAdded"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_ContextInformation_SgNBModReq, e_RABs_ToBeModified),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABs_ToBeModified_SgNBModReq_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABs-ToBeModified"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_ContextInformation_SgNBModReq, e_RABs_ToBeReleased),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABs_ToBeReleased_SgNBModReq_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABs-ToBeReleased"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_ContextInformation_SgNBModReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_170P52,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UE_ContextInformation_SgNBModReq_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_UE_ContextInformation_SgNBModReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_ContextInformation_SgNBModReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRUE-SecurityCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sgNB-SecurityKey */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sgNBUEAggregateMaximumBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-RABs-ToBeAdded */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* e-RABs-ToBeModified */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-RABs-ToBeReleased */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_ContextInformation_SgNBModReq_specs_1 = {
	sizeof(struct UE_ContextInformation_SgNBModReq),
	offsetof(struct UE_ContextInformation_SgNBModReq, _asn_ctx),
	asn_MAP_UE_ContextInformation_SgNBModReq_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_ContextInformation_SgNBModReq_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_ContextInformation_SgNBModReq = {
	"UE-ContextInformation-SgNBModReq",
	"UE-ContextInformation-SgNBModReq",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_ContextInformation_SgNBModReq_tags_1,
	sizeof(asn_DEF_UE_ContextInformation_SgNBModReq_tags_1)
		/sizeof(asn_DEF_UE_ContextInformation_SgNBModReq_tags_1[0]), /* 1 */
	asn_DEF_UE_ContextInformation_SgNBModReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_ContextInformation_SgNBModReq_tags_1)
		/sizeof(asn_DEF_UE_ContextInformation_SgNBModReq_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_ContextInformation_SgNBModReq_1,
	7,	/* Elements count */
	&asn_SPC_UE_ContextInformation_SgNBModReq_specs_1	/* Additional specs */
};

