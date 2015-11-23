/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSTimer, NSObject;

@interface DADMain : DADisableableObject {

	NSTimer* _delayedShutdownTimer;
	BOOL* _runLoopStoppedRef;
	NSObject*<OS_dispatch_queue> _aggdStatsQueue;
	NSObject*<OS_dispatch_source> _aggdStatsSource;

}
+(id)sharedMain;
-(void)dealloc;
-(id)init;
-(void)addToOperationsQueueDisabledCheckAndGoBlock:(/*^block*/id)arg1 wrappedBlock:(/*^block*/id)arg2 ;
-(void)shutdownDAD;
-(void)_shutdownDaemonIfNoAccountsExistInTimeInterval:(int)arg1 ;
-(void)_setRunLoopStopped:(BOOL)arg1 ;
-(void)_shutdownDaemonCheckingForAccounts:(BOOL)arg1 ;
-(void)delayedShutdownTimerFired:(id)arg1 ;
-(void)addSignalHandler;
-(void)addLanguageChangeHandler;
-(void)_shutdownNotification:(id)arg1 ;
-(void)shutdownDaemonIfNoAccountsExist;
-(void)waitForSystemAvailability;
-(void)setRunLoopStoppedRef:(BOOL*)arg1 ;
-(void)_configureAggdLogging;
-(void)disable;
@end

