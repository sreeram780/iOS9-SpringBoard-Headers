/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@interface CMKExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) double maxRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)maxRadius;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(double)_sunRadius;
-(double)_sunRaySpacing;
-(double)_sunRayLength;
-(double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3 ;
-(float)normalizedExposureValue;
@end

