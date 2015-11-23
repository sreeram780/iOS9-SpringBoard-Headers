/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface HMDLaunchHandler : NSObject {

	int _beingConfigured;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableSet* _relaunchTriggeringClients;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * relaunchTriggeringClients;               //@synthesize relaunchTriggeringClients=_relaunchTriggeringClients - In the implementation block
@property (assign,nonatomic) int beingConfigured;                                    //@synthesize beingConfigured=_beingConfigured - In the implementation block
+(id)sharedHandler;
-(id)init;
-(void)registerForRelaunch:(id)arg1 ;
-(void)deregisterForRelaunch:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)beingConfigured:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_saveAssertionPlist;
-(int)beingConfigured;
-(void)setBeingConfigured:(int)arg1 ;
-(void)_reevaluate;
-(NSMutableSet *)relaunchTriggeringClients;
-(void)_removeAssertionPlist;
-(void)setRelaunchTriggeringClients:(NSMutableSet *)arg1 ;
@end

