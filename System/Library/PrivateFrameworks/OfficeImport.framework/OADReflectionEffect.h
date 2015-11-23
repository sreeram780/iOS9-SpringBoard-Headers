/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect {

	float mBlurRadius;
	float mStartOpacity;
	float mStartPosition;
	float mEndOpacity;
	float mEndPosition;
	float mDistance;
	float mDirection;
	float mFadeDirection;
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(void)setAlignment:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBlurRadius:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)blurRadius;
-(void)setDirection:(float)arg1 ;
-(float)direction;
-(int)alignment;
-(float)startPosition;
-(float)endPosition;
-(void)setStartPosition:(float)arg1 ;
-(void)setDistance:(float)arg1 ;
-(void)setXScale:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setXSkew:(float)arg1 ;
-(void)setYSkew:(float)arg1 ;
-(float)xScale;
-(float)yScale;
-(float)xSkew;
-(float)ySkew;
-(void)setStartOpacity:(float)arg1 ;
-(void)setEndOpacity:(float)arg1 ;
-(void)setEndPosition:(float)arg1 ;
-(void)setFadeDirection:(float)arg1 ;
-(float)startOpacity;
-(float)endOpacity;
-(float)distance;
-(float)fadeDirection;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)rotateWithShape;
@end

