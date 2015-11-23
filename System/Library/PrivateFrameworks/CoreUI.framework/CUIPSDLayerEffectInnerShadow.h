/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;
	short _angle;
	unsigned long long _distance;
	unsigned long long _blurSize;

}

@property (assign) int blendMode;                            //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign) short angle;                              //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned long long distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned long long blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(void)setBlurSize:(unsigned long long)arg1 ;
-(unsigned long long)blurSize;
-(unsigned)effectType;
-(void)setDistance:(unsigned long long)arg1 ;
-(unsigned long long)distance;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end

