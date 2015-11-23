/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PCLoggingDelegate.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, PCDispatchTimer, NSRunLoop, NSObject;

@interface PCSimpleTimer : NSObject <PCLoggingDelegate> {

	double _fireTime;
	double _startTime;
	double _lastUpdateTime;
	double _earlyFireDelta;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	NSDate* _scheduledWakeDate;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	BOOL _userVisible;
	PCDispatchTimer* _preventSleepTimer;
	PCDispatchTimer* _fireTimer;
	BOOL _sleepIsImminent;
	unsigned _powerAssertionID;
	id _timeChangeSource;
	NSRunLoop* _timerRunLoop;
	NSString* _timerMode;
	int _significantTimeChangeToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL disableSystemWaking;                           //@synthesize disableSystemWaking=_disableSystemWaking - In the implementation block
@property (assign,getter=isUserVisible,nonatomic) BOOL userVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggingIdentifier;                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(id)lastSystemWakeDate;
+(double)currentMachTimeInterval;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(id)userInfo;
-(void)setDisableSystemWaking:(BOOL)arg1 ;
-(void)setUserVisible:(BOOL)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(NSString *)loggingIdentifier;
-(void)_updateTimers;
-(void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2 ;
-(void)_fireTimerFired;
-(id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6 ;
-(BOOL)firingIsImminent;
-(void)updateFireTime:(double)arg1 triggerOnGMTChange:(BOOL)arg2 ;
-(BOOL)isUserVisible;
-(BOOL)disableSystemWaking;
-(void)_scheduleTimer;
-(void)_preventSleepFired;
-(void)_setPowerMonitoringEnabled:(BOOL)arg1 ;
-(void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg1 ;
-(void)_significantTimeChange;
-(id)_getTimerRunLoop;
-(id)_getTimerMode;
-(void)_performBlockOnQueue:(/*^block*/id)arg1 ;
-(void)_powerNotificationSleepIsNotImminent;
-(void)_powerNotificationSleepIsImminent;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)scheduleInQueue:(id)arg1 ;
@end

