/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FIUIPropertyAnimation : NSObject {

	/*^block*/id _animationTimingFunction;
	double _currentAnimationTime;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(/*^block*/id)timingFunctionForMediaTimingFunction:(id)arg1 ;
+(/*^block*/id)linearTimingFunction;
+(id)animationWithDuration:(double)arg1 timingFunction:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)duration;
-(id)completionHandler;
-(void)update:(double)arg1 ;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(BOOL)isFinishedAnimating;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_endValue;
-(id)_startValue;
-(void)_setEndValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)callAndReleaseCompletionHandler;
-(id)_currentValue;
@end

