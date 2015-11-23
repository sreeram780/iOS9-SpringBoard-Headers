/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface PBBridgeReportCodeView : UIView {

	NSMutableArray* _frames;
	NSTimer* _animationTimer;
	long long _frameIndex;

}

@property (nonatomic,retain) NSMutableArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;              //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) long long frameIndex;                  //@synthesize frameIndex=_frameIndex - In the implementation block
-(void)_tick:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)frames;
-(void)addFrame:(id)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(long long)frameIndex;
-(void)setFrameIndex:(long long)arg1 ;
-(void)playAnimation;
@end

