/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	CLSilo* _silo;
	id<CLTimerScheduler> _scheduler;
	/*^block*/id _handler;
	double _nextFireTime;
	double _fireInterval;

}

@property (nonatomic,copy) id handler;                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireTime;              //@synthesize nextFireTime=_nextFireTime - In the implementation block
@property (assign,nonatomic) double fireInterval;              //@synthesize fireInterval=_fireInterval - In the implementation block
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)updateScheduler;
-(void)setNextFireAfterDelay:(double)arg1 ;
-(void)setNextFireTime:(double)arg1 ;
-(void)setFireInterval:(double)arg1 ;
-(void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
-(double)fireInterval;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

