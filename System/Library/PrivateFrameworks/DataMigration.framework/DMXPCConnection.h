/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface DMXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) id interruptionHandler;                                         //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)handleMessage:(id)arg1 ;
-(void)invalidate;
-(void)resume;
-(NSObject*<OS_xpc_object>)connection;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
@end

