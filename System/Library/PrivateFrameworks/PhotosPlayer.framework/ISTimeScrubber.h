/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISTimeScrubberDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISDisplayLink;

@interface ISTimeScrubber : NSObject {

	ISDisplayLink* _timer;
	double _lastTimerFireTime;
	struct {
		BOOL respondsToCurrentTimeDidChange;
	}  _delegateFlags;
	double _maximumChangeRate;
	id<ISTimeScrubberDelegate> _delegate;
	SCD_Struct_IS1 _currentTime;
	SCD_Struct_IS1 _targetTime;

}

@property (assign,nonatomic) SCD_Struct_IS1 currentTime;                              //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS1 targetTime;                               //@synthesize targetTime=_targetTime - In the implementation block
@property (assign,nonatomic) double maximumChangeRate;                                //@synthesize maximumChangeRate=_maximumChangeRate - In the implementation block
@property (assign,nonatomic,__weak) id<ISTimeScrubberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCurrentTime:(SCD_Struct_IS1)arg1 ;
-(SCD_Struct_IS1)currentTime;
-(double)maximumChangeRate;
-(void)setMaximumChangeRate:(double)arg1 ;
-(void)setDelegate:(id<ISTimeScrubberDelegate>)arg1 ;
-(id)init;
-(id<ISTimeScrubberDelegate>)delegate;
-(void)setTargetTime:(SCD_Struct_IS1)arg1 ;
-(void)_startTimerIfNeeded;
-(void)_timerDidFire;
-(void)_timerDidFinish;
-(SCD_Struct_IS1)targetTime;
-(void)resetToCurrentTime:(SCD_Struct_IS1)arg1 targetTime:(SCD_Struct_IS1)arg2 ;
@end

