/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADImageFillTechnique.h>

@interface OADTileTechnique : OADImageFillTechnique {

	float mOffsetX;
	BOOL mIsOffsetXOverridden;
	float mOffsetY;
	BOOL mIsOffsetYOverridden;
	float mScaleX;
	BOOL mIsScaleXOverridden;
	float mScaleY;
	BOOL mIsScaleYOverridden;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	int mAlignment;
	BOOL mIsAlignmentOverridden;

}
+(id)defaultProperties;
-(void)setAlignment:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setFlipMode:(int)arg1 ;
-(void)setOffsetX:(float)arg1 ;
-(void)setOffsetY:(float)arg1 ;
-(void)setScaleX:(float)arg1 ;
-(void)setScaleY:(float)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFlipModeOverridden;
-(int)flipMode;
-(BOOL)isOffsetXOverridden;
-(BOOL)isOffsetYOverridden;
-(BOOL)isScaleXOverridden;
-(BOOL)isScaleYOverridden;
-(BOOL)isAlignmentOverridden;
-(float)offsetX;
-(float)offsetY;
-(float)scaleX;
-(float)scaleY;
@end

