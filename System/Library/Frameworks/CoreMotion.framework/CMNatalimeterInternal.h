/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMNatalimeterInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	BOOL fStartedUpdates;
	BOOL fResendActivityOverrideOnInterrupt;
	long long fActivityOverride;
	/*^block*/id fHandler;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_setSession:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_getExecutablePathFromPid:(int)arg1 ;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopAbsoluteNatalimetryDataUpdates;
-(unsigned long long)_promptsNeeded;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end

