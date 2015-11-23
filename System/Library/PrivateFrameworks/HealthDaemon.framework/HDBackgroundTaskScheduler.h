/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HDBackgroundTaskScheduler : NSObject {

	NSMutableDictionary* _clients;
	NSMutableDictionary* _tasksQueuedForDelivery;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;

}
-(id)init;
-(void)_queue_deliverJob:(id)arg1 withName:(const char*)arg2 ;
-(void)_queue_registerClientWithName:(id)arg1 taskHandler:(/*^block*/id)arg2 ;
-(void)_queue_addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3 ;
-(void)_queue_removeTaskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(id)_queue_taskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(void)registerClientWithName:(id)arg1 taskHandler:(/*^block*/id)arg2 ;
-(void)unregisterClientWithName:(id)arg1 ;
-(void)addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3 ;
-(void)removeTaskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(id)taskWithName:(id)arg1 forClientNamed:(id)arg2 ;
@end

