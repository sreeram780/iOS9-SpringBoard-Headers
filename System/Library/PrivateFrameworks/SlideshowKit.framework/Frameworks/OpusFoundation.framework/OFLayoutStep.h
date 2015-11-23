/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFViewProxy;

@interface OFLayoutStep : NSObject {

	OFViewProxy* _targetView;
	unsigned long long _targetAttribute;
	double _targetSizeMultiplier;
	long long _relation;
	OFViewProxy* _anchorView;
	unsigned long long _anchorAttribute;
	double _anchorSizeMultiplier;
	double _multiplier;
	double _constant;

}

@property (readonly) OFViewProxy * targetView;                        //@synthesize targetView=_targetView - In the implementation block
@property (readonly) unsigned long long targetAttribute;              //@synthesize targetAttribute=_targetAttribute - In the implementation block
@property (readonly) double targetSizeMultiplier;                     //@synthesize targetSizeMultiplier=_targetSizeMultiplier - In the implementation block
@property (readonly) long long relation;                              //@synthesize relation=_relation - In the implementation block
@property (readonly) OFViewProxy * anchorView;                        //@synthesize anchorView=_anchorView - In the implementation block
@property (readonly) unsigned long long anchorAttribute;              //@synthesize anchorAttribute=_anchorAttribute - In the implementation block
@property (readonly) double anchorSizeMultiplier;                     //@synthesize anchorSizeMultiplier=_anchorSizeMultiplier - In the implementation block
@property (readonly) double multiplier;                               //@synthesize multiplier=_multiplier - In the implementation block
@property (readonly) double constant;                                 //@synthesize constant=_constant - In the implementation block
+(id)_stepsFrom2DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3 ;
+(id)_stepFrom1DString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3 ;
+(unsigned long long)layoutAttributeFromScanner:(id)arg1 ;
+(BOOL)_parseCGPoint:(CGPoint*)arg1 withScanner:(id)arg2 ;
+(id)stepForTarget:(id)arg1 attribute:(unsigned long long)arg2 sizeMultiplier:(double)arg3 relatedBy:(long long)arg4 toAnchorView:(id)arg5 attribute:(unsigned long long)arg6 sizeMultiplier:(double)arg7 multiplier:(double)arg8 constant:(double)arg9 ;
+(id)stepsFromString:(id)arg1 targetView:(id)arg2 anchorView:(id)arg3 ;
-(id)init;
-(double)constant;
-(void)run;
-(OFViewProxy *)targetView;
-(OFViewProxy *)anchorView;
-(double)multiplier;
-(long long)relation;
-(unsigned long long)targetAttribute;
-(double)targetSizeMultiplier;
-(unsigned long long)anchorAttribute;
-(double)anchorSizeMultiplier;
@end

