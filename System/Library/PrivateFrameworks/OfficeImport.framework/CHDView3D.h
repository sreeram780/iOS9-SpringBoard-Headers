/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CHDView3D : NSObject {

	int mRotationX;
	int mRotationY;
	int mDepthPercent;
	int mGapDepthPercent;
	int mHeightPercent;
	int mPerspective;
	BOOL mRightAngleAxes;
	BOOL mCluster;
	BOOL mAutoscale;

}
-(id)init;
-(id)description;
-(void)setRotationX:(int)arg1 ;
-(void)setRotationY:(int)arg1 ;
-(void)setPerspective:(int)arg1 ;
-(void)setRightAngleAxes:(BOOL)arg1 ;
-(void)setDepthPercent:(int)arg1 ;
-(void)setGapDepthPercent:(int)arg1 ;
-(void)setHeightPercent:(int)arg1 ;
-(void)setAutoscale:(BOOL)arg1 ;
-(void)setCluster:(BOOL)arg1 ;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)perspective;
-(int)rotationX;
-(int)heightPercent;
-(BOOL)isAutoscale;
-(int)rotationY;
-(BOOL)isRightAngleAxes;
-(BOOL)isCluster;
@end

