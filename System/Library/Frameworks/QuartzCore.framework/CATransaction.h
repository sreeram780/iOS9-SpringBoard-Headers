/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)activateBackground:(BOOL)arg1 ;
+(double)inputTime;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)lowLatency;
+(void)assertInactive;
+(void)synchronize;
+(void)setInputTime:(double)arg1 ;
+(unsigned)currentState;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(void)activate;
+(/*^block*/id)animator;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)setAnimationDuration:(double)arg1 ;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)lock;
+(void)unlock;
+(void)commit;
+(void)begin;
+(double)animationDuration;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
@end

