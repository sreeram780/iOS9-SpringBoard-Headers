/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAUserActivityClientResponseProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMapTable, NSUUID, NSString;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serverQ;
	BOOL _connectionInitializationSucceeded;
	NSMapTable* _userActivitiesByUUID;
	BOOL _supportsActivityContinuation;
	BOOL _activityContinuationIsEnabled;
	BOOL _needToSendInitialMessage;
	NSUUID* _activeUserActivityUUID;
	NSMapTable* _activeUserActivitiesByUUID;

}

@property (retain,readonly) NSXPCConnection * connection; 
@property (copy) NSUUID * activeUserActivityUUID;                        //@synthesize activeUserActivityUUID=_activeUserActivityUUID - In the implementation block
@property (readonly) BOOL supportsActivityContinuation;                  //@synthesize supportsActivityContinuation=_supportsActivityContinuation - In the implementation block
@property (readonly) BOOL activityContinuationIsEnabled; 
@property (readonly) NSObject*<OS_dispatch_queue> serverQ;               //@synthesize serverQ=_serverQ - In the implementation block
@property (retain) NSMapTable * userActivitiesByUUID;                    //@synthesize userActivitiesByUUID=_userActivitiesByUUID - In the implementation block
@property (retain) NSMapTable * activeUserActivitiesByUUID;              //@synthesize activeUserActivitiesByUUID=_activeUserActivitiesByUUID - In the implementation block
@property (assign) BOOL needToSendInitialMessage;                        //@synthesize needToSendInitialMessage=_needToSendInitialMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSupportActivityContinuation;
+(BOOL)userActivityContinuationSupported;
+(id)defaultManager;
+(id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4 ;
-(void)sendInitialMessage:(BOOL)arg1 ;
-(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(NSUUID *)activeUserActivityUUID;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(BOOL)userActivityIsActive:(id)arg1 ;
-(void)makeInactive:(id)arg1 ;
-(NSMapTable *)userActivitiesByUUID;
-(void)setActiveUserActivityUUID:(NSUUID *)arg1 ;
-(void)makeActive:(id)arg1 ;
-(id)_findUserActivityForUUID:(id)arg1 ;
-(void)addUserActivity:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tellClientUserActivityItWasResumed:(id)arg1 ;
-(BOOL)activityContinuationIsEnabled;
-(void)removeUserActivity:(id)arg1 ;
-(void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)encodeUserActivity:(id)arg1 ;
-(id)createByDecodingUserActivity:(id)arg1 ;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg1 ;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2 ;
-(void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 ;
-(void)pinUserActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsActivityContinuation;
-(void)setUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)activities;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2 ;
-(void)setNeedToSendInitialMessage:(BOOL)arg1 ;
-(NSMapTable *)activeUserActivitiesByUUID;
-(id)activeActivitiesByPriority;
-(BOOL)hasUserActivityWithUUID:(id)arg1 ;
-(void)setActiveUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(BOOL)needToSendInitialMessage;
@end

