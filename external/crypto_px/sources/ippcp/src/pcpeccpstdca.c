/*
* Copyright (C) 2016 Intel Corporation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the
*     distribution.
*   * Neither the name of Intel Corporation nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

#include "owndefs.h"
#include "owncp.h"
#include "pcpeccp.h"


/* Recommended Parameters secp112r1 */
const Ipp32u secp112r1_p[] = { /* (2^128 -3)/76439 */
   0xBEAD208B, 0x5E668076, 0x2ABF62E3, 0xDB7C};
const Ipp32u secp112r1_a[] = {
   0xBEAD2088, 0x5E668076, 0x2ABF62E3, 0xDB7C};
const Ipp32u secp112r1_b[] = {
   0x11702B22, 0x16EEDE89, 0xF8BA0439, 0x659E};
const Ipp32u secp112r1_gx[] = {
   0xF9C2F098, 0x5EE76B55, 0x7239995A, 0x0948};
const Ipp32u secp112r1_gy[] = {
   0x0FF77500, 0xC0A23E0E, 0xE5AF8724, 0xA89C};
const Ipp32u secp112r1_r[] = {
   0xAC6561C5, 0x5E7628DF, 0x2ABF62E3, 0xDB7C};
Ipp32u secp112r1_h = 1;

/* Recommended Parameters secp112r2 */
const Ipp32u secp112r2_p[] = { /* (2^128 -3)/76439 */
   0xBEAD208B, 0x5E668076, 0x2ABF62E3, 0xDB7C};
const Ipp32u secp112r2_a[] = {
   0x5C0EF02C, 0x8A0AAAF6, 0xC24C05F3, 0x6127};
const Ipp32u secp112r2_b[] = {
   0x4C85D709, 0xED74FCC3, 0xF1815DB5, 0x51DE};
const Ipp32u secp112r2_gx[] = {
   0xD0928643, 0xB4E1649D, 0x0AB5E892, 0x4BA3};
const Ipp32u secp112r2_gy[] = {
   0x6E956E97, 0x3747DEF3, 0x46F5882E, 0xADCD};
const Ipp32u secp112r2_r[] = {
   0x0520D04B, 0xD7597CA1, 0x0AAFD8B8, 0x36DF};
Ipp32u secp112r2_h = 4;

/* Recommended Parameters secp128r1 */
const Ipp32u h_secp128r1_p[] = { /* halpf of secp128r1_p */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFE};

const Ipp32u secp128r1_p[] = { // 2^128 -2^97 -1
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFD, 0x0, 0x0};
const Ipp32u secp128r1_a[] = {
   0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFD};
const Ipp32u secp128r1_b[] = {
   0x2CEE5ED3, 0xD824993C, 0x1079F43D, 0xE87579C1};
const Ipp32u secp128r1_gx[] = {
   0xA52C5B86, 0x0C28607C, 0x8B899B2D, 0x161FF752};
const Ipp32u secp128r1_gy[] = {
   0xDDED7A83, 0xC02DA292, 0x5BAFEB13, 0xCF5AC839};
const Ipp32u secp128r1_r[] = {
   0x9038A115, 0x75A30D1B, 0x00000000, 0xFFFFFFFE};
Ipp32u secp128r1_h = 1;

/* Recommended Parameters secp128r2 */
const Ipp32u secp128r2_p[] = { /* 2^128 -2^97 -1 */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFD, 0x0, 0x0};
const Ipp32u secp128r2_a[] = {
   0xBFF9AEE1, 0xBF59CC9B, 0xD1B3BBFE, 0xD6031998};
const Ipp32u secp128r2_b[] = {
   0xBB6D8A5D, 0xDC2C6558, 0x80D02919, 0x5EEEFCA3};
const Ipp32u secp128r2_gx[] = {
   0xCDEBC140, 0xE6FB32A7, 0x5E572983, 0x7B6AA5D8};
const Ipp32u secp128r2_gy[] = {
   0x5FC34B44, 0x7106FE80, 0x894D3AEE, 0x27B6916A};
const Ipp32u secp128r2_r[] = {
   0x0613B5A3, 0xBE002472, 0x7FFFFFFF, 0x3FFFFFFF};
Ipp32u secp128r2_h = 4;

/* Recommended Parameters secp160r1 */
const Ipp32u secp160r1_p[] = { /* 2^160 -2^31 -1 */
   0x7FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp160r1_a[] = {
   0x7FFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp160r1_b[] = {
   0xC565FA45, 0x81D4D4AD, 0x65ACF89F, 0x54BD7A8B, 0x1C97BEFC};
const Ipp32u secp160r1_gx[] = {
   0x13CBFC82, 0x68C38BB9, 0x46646989, 0x8EF57328, 0x4A96B568};
const Ipp32u secp160r1_gy[] = {
   0x7AC5FB32, 0x04235137, 0x59DCC912, 0x3168947D, 0x23A62855};
const Ipp32u secp160r1_r[] = {
   0xCA752257, 0xF927AED3, 0x0001F4C8, 0x00000000, 0x00000000, 0x1};
Ipp32u secp160r1_h = 1;

/* Recommended Parameters secp160r2 */
const Ipp32u secp160r2_p[] = { /* 2^160 -2^32 -2^14 -2^12 -2^9 -2^8 -2^7 -2^2 -1 */
   0xFFFFAC73, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp160r2_a[] = {
   0xFFFFAC70, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp160r2_b[] = {
   0xF50388BA, 0x04664D5A, 0xAB572749, 0xFB59EB8B, 0xB4E134D3};
const Ipp32u secp160r2_gx[] = {
   0x3144CE6D, 0x30F7199D, 0x1F4FF11B, 0x293A117E, 0x52DCB034};
const Ipp32u secp160r2_gy[] = {
   0xA7D43F2E, 0xF9982CFE, 0xE071FA0D, 0xE331F296, 0xFEAFFEF2};
const Ipp32u secp160r2_r[] = {
   0xF3A1A16B, 0xE786A818, 0x0000351E, 0x00000000, 0x00000000, 0x1};
Ipp32u secp160r2_h = 1;

/* Recommended Parameters secp192r1 */
const Ipp32u h_secp192r1_p[] = { /* half of secp192r1_p */
   0xFFFFFFFF, 0x7FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF};

const Ipp32u secp192r1_p[] = { /* 2^192 -2^64 -1 */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x0};
const Ipp32u secp192r1_a[] = {
   0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp192r1_b[] = {
   0xC146B9B1, 0xFEB8DEEC, 0x72243049, 0x0FA7E9AB, 0xE59C80E7, 0x64210519};
const Ipp32u secp192r1_gx[] = {
   0x82FF1012, 0xF4FF0AFD, 0x43A18800, 0x7CBF20EB, 0xB03090F6, 0x188DA80E};
const Ipp32u secp192r1_gy[] = {
   0x1E794811, 0x73F977A1, 0x6B24CDD5, 0x631011ED, 0xFFC8DA78, 0x07192B95};
const Ipp32u secp192r1_r[] = {
   0xB4D22831, 0x146BC9B1, 0x99DEF836, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
Ipp32u secp192r1_h = 1;

/* Recommended Parameters secp224r1 */
const Ipp32u h_secp224r1_p[] = { /* half of secp224r1_p */
   0x00000000, 0x00000000, 0x80000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0x7FFFFFFF, 0x0};

const Ipp32u secp224r1_p[] = { /* 2^224 -2^96 +1 */
   0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0x0};
const Ipp32u secp224r1_a[] = {
   0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF};
const Ipp32u secp224r1_b[] = {
   0x2355FFB4, 0x270B3943, 0xD7BFD8BA, 0x5044B0B7, 0xF5413256, 0x0C04B3AB,
   0xB4050A85};
const Ipp32u secp224r1_gx[] = {
   0x115C1D21, 0x343280D6, 0x56C21122, 0x4A03C1D3, 0x321390B9, 0x6BB4BF7F,
   0xB70E0CBD};
const Ipp32u secp224r1_gy[] = {
   0x85007E34, 0x44D58199, 0x5A074764, 0xCD4375A0, 0x4C22DFE6, 0xB5F723FB,
   0xBD376388};
const Ipp32u secp224r1_r[] = {
   0x5C5C2A3D, 0x13DD2945, 0xE0B8F03E, 0xFFFF16A2, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF};
Ipp32u secp224r1_h = 1;

/* Recommended Parameters secp256r1 */
const Ipp32u h_secp256r1_p[] = { /* half of secp256r1_p */
   0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x00000000, 0x00000000, 0x80000000,
   0x80000000, 0x7FFFFFFF};

const Ipp32u secp256r1_p[] = { /* 2^256 -2^224 +2^192 +2^96 -1 */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
   0x00000001, 0xFFFFFFFF, 0x0, 0x0};
const Ipp32u secp256r1_a[] = {
   0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
   0x00000001, 0xFFFFFFFF};
const Ipp32u secp256r1_b[] = {
   0x27D2604B, 0x3BCE3C3E, 0xCC53B0F6, 0x651D06B0, 0x769886BC, 0xB3EBBD55,
   0xAA3A93E7, 0x5AC635D8};
const Ipp32u secp256r1_gx[] = {
   0xD898C296, 0xF4A13945, 0x2DEB33A0, 0x77037D81, 0x63A440F2, 0xF8BCE6E5,
   0xE12C4247, 0x6B17D1F2};
const Ipp32u secp256r1_gy[] = {
   0x37BF51F5, 0xCBB64068, 0x6B315ECE, 0x2BCE3357, 0x7C0F9E16, 0x8EE7EB4A,
   0xFE1A7F9B, 0x4FE342E2};
const Ipp32u secp256r1_r[] = {
   0xFC632551, 0xF3B9CAC2, 0xA7179E84, 0xBCE6FAAD, 0xFFFFFFFF, 0xFFFFFFFF,
   0x00000000, 0xFFFFFFFF};
Ipp32u secp256r1_h = 1;

/* Recommended Parameters secp384r1 */
const Ipp32u h_secp384r1_p[] = { /* half of secp384r1_p */
   0x7FFFFFFF, 0x00000000, 0x80000000, 0x7FFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF};

const Ipp32u secp384r1_p[] = { /* 2^384 -2^128 -2^96 +2^32 -1 */
   0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0x0, 0x0};
const Ipp32u secp384r1_a[] = {
   0xFFFFFFFC, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const Ipp32u secp384r1_b[] = {
   0xD3EC2AEF, 0x2A85C8ED, 0x8A2ED19D, 0xC656398D, 0x5013875A, 0x0314088F,
   0xFE814112, 0x181D9C6E, 0xE3F82D19, 0x988E056B, 0xE23EE7E4, 0xB3312FA7};
const Ipp32u secp384r1_gx[] = {
   0x72760AB7, 0x3A545E38, 0xBF55296C, 0x5502F25D, 0x82542A38, 0x59F741E0,
   0x8BA79B98, 0x6E1D3B62, 0xF320AD74, 0x8EB1C71E, 0xBE8B0537, 0xAA87CA22};
const Ipp32u secp384r1_gy[] = {
   0x90EA0E5F, 0x7A431D7C, 0x1D7E819D, 0x0A60B1CE, 0xB5F0B8C0, 0xE9DA3113,
   0x289A147C, 0xF8F41DBD, 0x9292DC29, 0x5D9E98BF, 0x96262C6F, 0x3617DE4A};
const Ipp32u secp384r1_r[] = {
   0xCCC52973, 0xECEC196A, 0x48B0A77A, 0x581A0DB2, 0xF4372DDF, 0xC7634D81,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
Ipp32u secp384r1_h = 1;

/* Recommended Parameters secp521r1 */
const Ipp32u h_secp521r1_p[] = { /* half of secp521r1_p */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000000FF, 0x0};

const Ipp32u secp521r1_p[] = { /* 2^521 -1 */
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000001FF, 0x0};
const Ipp32u secp521r1_a[] = {
   0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000001FF};
const Ipp32u secp521r1_b[] = {
   0x6B503F00, 0xEF451FD4, 0x3D2C34F1, 0x3573DF88, 0x3BB1BF07, 0x1652C0BD,
   0xEC7E937B, 0x56193951, 0x8EF109E1, 0xB8B48991, 0x99B315F3, 0xA2DA725B,
   0xB68540EE, 0x929A21A0, 0x8E1C9A1F, 0x953EB961, 0x00000051};
const Ipp32u secp521r1_gx[] = {
   0xC2E5BD66, 0xF97E7E31, 0x856A429B, 0x3348B3C1, 0xA2FFA8DE, 0xFE1DC127,
   0xEFE75928, 0xA14B5E77, 0x6B4D3DBA, 0xF828AF60, 0x053FB521, 0x9C648139,
   0x2395B442, 0x9E3ECB66, 0x0404E9CD, 0x858E06B7, 0x000000C6};
const Ipp32u secp521r1_gy[] = {
   0x9FD16650, 0x88BE9476, 0xA272C240, 0x353C7086, 0x3FAD0761, 0xC550B901,
   0x5EF42640, 0x97EE7299, 0x273E662C, 0x17AFBD17, 0x579B4468, 0x98F54449,
   0x2C7D1BD9, 0x5C8A5FB4, 0x9A3BC004, 0x39296A78, 0x00000118};
const Ipp32u secp521r1_r[] = {
   0x91386409, 0xBB6FB71E, 0x899C47AE, 0x3BB5C9B8, 0xF709A5D0, 0x7FCC0148,
   0xBF2F966B, 0x51868783, 0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
   0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x000001FF};
Ipp32u secp521r1_h = 1;


/* premultiplied secp128r{1|2}_p (for spesial implementation) */
static const Ipp32u secp128_x2[] = {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFB, 0x01, 0x0};
static const Ipp32u secp128_x3[] = {0xFFFFFFFD, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF9, 0x02, 0x0};
static const Ipp32u secp128_x4[] = {0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF7, 0x03, 0x0};
static const Ipp32u secp128_x5[] = {0xFFFFFFFB, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF5, 0x04, 0x0};
static const Ipp32u secp128_x6[] = {0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF3, 0x05, 0x0};
static const Ipp32u secp128_x7[] = {0xFFFFFFF9, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF1, 0x06, 0x0};
static const Ipp32u secp128_x8[] = {0xFFFFFFF8, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFEF, 0x07, 0x0};
static const Ipp32u secp128_x9[] = {0xFFFFFFF7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFED, 0x08, 0x0};
static const Ipp32u secp128_xA[] = {0xFFFFFFF6, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFEB, 0x09, 0x0};
static const Ipp32u secp128_xB[] = {0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE9, 0x0A, 0x0};
static const Ipp32u secp128_xC[] = {0xFFFFFFF4, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE7, 0x0B, 0x0};
static const Ipp32u secp128_xD[] = {0xFFFFFFF3, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE5, 0x0C, 0x0};
static const Ipp32u secp128_xE[] = {0xFFFFFFF2, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE3, 0x0D, 0x0};
static const Ipp32u secp128_xF[] = {0xFFFFFFF1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE1, 0x0E, 0x0};
static const Ipp32u secp128_x10[]= {0xFFFFFFF0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFDF, 0x0F, 0x0};
static const Ipp32u secp128_x11[]= {0xFFFFFFEF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFDD, 0x10, 0x0};
static const Ipp32u secp128_x12[]= {0xFFFFFFEE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFDB, 0x11, 0x0};
static const Ipp32u secp128_x13[]= {0xFFFFFFED, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFD9, 0x12, 0x0};
static const Ipp32u secp128_x14[]= {0xFFFFFFEC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFD7, 0x13, 0x0};
static const Ipp32u secp128_x15[]= {0xFFFFFFEB, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFD5, 0x14, 0x0};
static const Ipp32u secp128_x16[]= {0xFFFFFFEA, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFD3, 0x15, 0x0};
static const Ipp32u secp128_x17[]= {0xFFFFFFE9, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFD1, 0x16, 0x0};
static const Ipp32u secp128_x18[]= {0xFFFFFFE8, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFCF, 0x17, 0x0};
static const Ipp32u secp128_x19[]= {0xFFFFFFE7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFCD, 0x18, 0x0};
static const Ipp32u secp128_x1A[]= {0xFFFFFFE6, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFCB, 0x19, 0x0};
static const Ipp32u secp128_x1B[]= {0xFFFFFFE5, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC9, 0x1A, 0x0};
static const Ipp32u secp128_x1C[]= {0xFFFFFFE4, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC7, 0x1B, 0x0};
static const Ipp32u secp128_x1D[]= {0xFFFFFFE3, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC5, 0x1C, 0x0};
static const Ipp32u secp128_x1E[]= {0xFFFFFFE2, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC3, 0x1D, 0x0};
static const Ipp32u secp128_x1F[]= {0xFFFFFFE1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC1, 0x1E, 0x0};
static const Ipp32u secp128_x20[]= {0xFFFFFFE0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFBF, 0x1F, 0x0};

#define MAX_MUL (32)
const Ipp32u* secp128_mx[MAX_MUL] = {
   secp128r1_p,   /*  1*secp128r1_p */
   secp128_x2,    /*  2*secp128r1_p */
   secp128_x3,    /*  3*secp128r1_p */
   secp128_x4,    /*  4*secp128r1_p */
   secp128_x5,    /*  5*secp128r1_p */
   secp128_x6,    /*  6*secp128r1_p */
   secp128_x7,    /*  7*secp128r1_p */
   secp128_x8,    /*  8*secp128r1_p */
   secp128_x9,    /*  9*secp128r1_p */
   secp128_xA,    /* 10*secp128r1_p */
   secp128_xB,    /* 11*secp128r1_p */
   secp128_xC,    /* 12*secp128r1_p */
   secp128_xD,    /* 13*secp128r1_p */
   secp128_xE,    /* 14*secp128r1_p */
   secp128_xF,    /* 15*secp128r1_p */
   secp128_x10,   /* 16*secp128r1_p */
   secp128_x11,   /* 17*secp128r1_p */
   secp128_x12,   /* 18*secp128r1_p */
   secp128_x13,   /* 19*secp128r1_p */
   secp128_x14,   /* 20*secp128r1_p */
   secp128_x15,   /* 21*secp128r1_p */
   secp128_x16,   /* 22*secp128r1_p */
   secp128_x17,   /* 23*secp128r1_p */
   secp128_x18,   /* 24*secp128r1_p */
   secp128_x19,   /* 25*secp128r1_p */
   secp128_x1A,   /* 26*secp128r1_p */
   secp128_x1B,   /* 27*secp128r1_p */
   secp128_x1C,   /* 28*secp128r1_p */
   secp128_x1D,   /* 29*secp128r1_p */
   secp128_x1E,   /* 30*secp128r1_p */
   secp128_x1F,   /* 31*secp128r1_p */
   secp128_x20    /* 32*secp128r1_p */
};
