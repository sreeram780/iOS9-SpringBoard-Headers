/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct {
	unsigned long long numberOfGroups;
	unsigned long long separatorIndex;
	double separationPadding;
	unsigned forcePileOffscreen : 1;
	unsigned disableTableModalPresentation : 1;
	unsigned hasPaymentPasses : 1;
	unsigned hasPasses : 1;
	unsigned hasPaymentHeader : 1;
	unsigned hasPassHeader : 1;
	unsigned isDeleting : 1;
	unsigned isContinuingModalPresentation : 1;
	unsigned forceSubheaderUpdate : 1;
	unsigned forceFooterUpdate : 1;
	unsigned mutatingForcePileOffscreen : 1;
} SCD_Struct_PK5;

typedef struct {
	CGRect field1;
	CGRect field2;
	double field3;
} SCD_Struct_PK6;

typedef struct CGPath* CGPathRef;

typedef struct CGColor* CGColorRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGImage* CGImageRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFArray* CFArrayRef;

