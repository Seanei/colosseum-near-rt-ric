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
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_LAC_H_
#define	_LAC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LAC */
typedef OCTET_STRING_t	 LAC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LAC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LAC;
asn_struct_free_f LAC_free;
asn_struct_print_f LAC_print;
asn_constr_check_f LAC_constraint;
ber_type_decoder_f LAC_decode_ber;
der_type_encoder_f LAC_encode_der;
xer_type_decoder_f LAC_decode_xer;
xer_type_encoder_f LAC_encode_xer;
per_type_decoder_f LAC_decode_uper;
per_type_encoder_f LAC_encode_uper;
per_type_decoder_f LAC_decode_aper;
per_type_encoder_f LAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LAC_H_ */
#include "asn_internal.h"
