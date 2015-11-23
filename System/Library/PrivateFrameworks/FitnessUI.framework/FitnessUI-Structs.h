/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGGradient* CGGradientRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGContext* CGContextRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGColor* CGColorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_FI8;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_FI9;

typedef struct {
	_ field1;
	G field2;
	unsigned long field3;
	K field4;
	V field5;
	e field6;
	char field7;
	t field8;
	o field9;
	const  field10;
	4 field11;
	= field12;
	SCD_Struct_FI8 field13;
	SCD_Struct_FI8 field14;
	SCD_Struct_FI8 field15;
	float field16[4];
	_ field17;
	G field18;
	unsigned long field19;
	K field20;
	V field21;
	e field22;
	char field23;
	t field24;
	o field25;
	const  field26;
	4 field27;
	= field28;
	SCD_Struct_FI8 field29;
	SCD_Struct_FI8 field30;
	SCD_Struct_FI8 field31;
	float field32[4];
	_ field33;
	G field34;
	unsigned long field35;
	K field36;
	V field37;
	e field38;
	char field39;
	t field40;
	o field41;
	const  field42;
	4 field43;
	= field44;
	SCD_Struct_FI8 field45;
	SCD_Struct_FI8 field46;
	SCD_Struct_FI8 field47;
	float field48[4];
	_ field49;
	G field50;
	unsigned long field51;
	K field52;
	V field53;
	e field54;
	char field55;
	t field56;
	o field57;
	const  field58;
	2 field59;
	= field60;
	SCD_Struct_FI9 field61;
	SCD_Struct_FI9 field62;
	float field63[2];
	_ field64;
	G field65;
	unsigned long field66;
	K field67;
	V field68;
	e field69;
	char field70;
	t field71;
	o field72;
	const  field73;
	2 field74;
	= field75;
	SCD_Struct_FI9 field76;
	SCD_Struct_FI9 field77;
	float field78[2];
} SCD_Struct_FI10;

typedef struct {
	_ field1;
	G field2;
	unsigned long field3;
	K field4;
	V field5;
	e field6;
	char field7;
	t field8;
	o field9;
	const  field10;
	2 field11;
	= field12;
	SCD_Struct_FI8 field13;
	SCD_Struct_FI8 field14;
	float field15[2];
	float field16;
	float( field17;
	_ field18;
	G field19;
	unsigned long field20;
	K field21;
	V field22;
	e field23;
	char field24;
	t field25;
	o field26;
	const  field27;
	4 field28;
	= field29;
	SCD_Struct_FI8 field30;
	SCD_Struct_FI9 field31;
	SCD_Struct_FI9 field32;
	float field33[4];
	_ field34;
	G field35;
	unsigned long field36;
	K field37;
	V field38;
	e field39;
	char field40;
	t field41;
	o field42;
	const  field43;
	2 field44;
	= field45;
	SCD_Struct_FI9 field46;
	SCD_Struct_FI9 field47;
	float field48[2];
} SCD_Struct_FI11;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_FI12;

typedef union GLKMatrix4 {
	SCD_Struct_FI12 field1;
	float m[16];
} GLKMatrix4;

typedef struct _NSZone* NSZoneRef;

typedef struct _UniformBinding {
	int location;
	char* name;
} UniformBinding;

typedef struct _UniformBindings {
	UniformBinding viewProjectionMatrix;
	UniformBinding modelMatrix;
	UniformBinding environmentMatrix;
	UniformBinding cameraPosition;
	UniformBinding useTexture;
	UniformBinding useTextureShine;
	UniformBinding useFullColorEnamel;
	UniformBinding color;
	UniformBinding enamelColor;
	UniformBinding colorSampler;
	UniformBinding environmentSampler;
} UniformBindings;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_FI17;

typedef union GLKVector3 {
	SCD_Struct_FI17 field1;
	SCD_Struct_FI17 field2;
	SCD_Struct_FI17 field3;
	float v[3];
} GLKVector3;

