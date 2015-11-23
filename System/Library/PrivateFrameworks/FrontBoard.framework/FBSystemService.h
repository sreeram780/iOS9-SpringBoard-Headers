/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSystemServiceDelegate;
@class FBSSerialQueue, FBSystemServiceServer;

@interface FBSystemService : NSObject {

	FBSSerialQueue* _queue;
	int _pendingExit;
	id<FBSystemServiceDelegate> _delegate;
	FBSystemServiceServer* _server;

}

@property (assign,nonatomic) id<FBSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                   //@synthesize queue=_queue - In the implementation block
@property (getter=isPendingExit,readonly) BOOL pendingExit; 
@property (nonatomic,retain) FBSystemServiceServer * server;                    //@synthesize server=_server - In the implementation block
+(id)sharedInstance;
-(FBSSerialQueue *)queue;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSystemServiceDelegate>)delegate;
-(FBSystemServiceServer *)server;
-(id)initWithQueue:(id)arg1 ;
-(void)isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg1 ;
-(void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 ;
-(void)setPendingExit:(BOOL)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(BOOL)_requiresOpenApplicationEntitlement:(id)arg1 options:(id)arg2 originalSource:(id)arg3 ;
-(void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(id)systemApplicationBundleIdentifier;
-(void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 sequenceNumber:(unsigned long long)arg5 cacheGUID:(id)arg6 ourSequenceNumber:(unsigned long long)arg7 ourCacheGUID:(id)arg8 withResult:(/*^block*/id)arg9 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(void)_logPendedActivationRequestForMismatchedClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(void)_activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(BOOL)isPendingExit;
-(void)setServer:(FBSystemServiceServer *)arg1 ;
@end

