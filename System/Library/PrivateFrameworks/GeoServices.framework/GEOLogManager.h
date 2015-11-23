/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSLock;

@interface GEOLogManager : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSMutableArray* _logAdaptors;
	NSMutableArray* _remoteAdaptorOptions;
	NSLock* _remoteAdaptorOptionsLock;
	void* _loggingQueueIdentityKey;
	void* _loggingQueueIdentityValue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_logMessageUsageURL;
-(void)flushLogs;
-(void)queueLogMessage:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_setupXPCRemoteAdators;
-(void)_flushLogs;
-(void)_setupLogAdaptorsBackgroundTaskStartBlock:(/*^block*/id)arg1 endBlock:(/*^block*/id)arg2 ;
-(void)_applicationDeactivating:(id)arg1 ;
-(void)addLogAdaptor:(id)arg1 ;
-(BOOL)_updateRemoteAdaptorOptions;
-(void)_setupDefaultAdaptors;
-(BOOL)shouldSendUsageUsingOldUsageManager;
-(void)_removeAllLogAdaptors;
-(void)setupLogAdaptorsBackgroundTaskStartBlock:(/*^block*/id)arg1 endBlock:(/*^block*/id)arg2 ;
-(BOOL)_disableUsageLoggingForCountry;
-(void)_addLogAdaptor:(id)arg1 ;
-(BOOL)_shouldSendLogMessageUsageWithPersistence;
-(void)_updateAndSetupRemoteAdaptors;
-(void)removeLogAdaptor:(id)arg1 ;
-(void)removeAllLogAdators;
-(void)_removeLogAdaptor:(id)arg1 ;
-(void)_queueLogMessage:(id)arg1 ;
-(BOOL)shouldSendUsageUsingNewLogManager;
-(BOOL)_shouldSendLogMessageUsageUsingGeoServices;
@end

