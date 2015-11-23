/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol XPCServiceConnectionDelegate, OS_xpc_object, NSObject, OS_dispatch_queue;
@class NSString, NSObject, XPCServiceListener;

@interface XPCServiceConnection : NSObject {

	NSString* _serviceName;
	id<XPCServiceConnectionDelegate> _delegate;
	NSObject*<OS_xpc_object> _client;
	id<NSObject> _context;
	XPCServiceListener* _serviceListener;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) id<XPCServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSObject> context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> client;                             //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) XPCServiceListener * serviceListener;                   //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
-(NSString *)serviceName;
-(XPCServiceListener *)serviceListener;
-(void)setDelegate:(id<XPCServiceConnectionDelegate>)arg1 ;
-(id)debugDescription;
-(id<XPCServiceConnectionDelegate>)delegate;
-(id<NSObject>)context;
-(void)resume;
-(void)setContext:(id<NSObject>)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_xpc_object>)client;
-(void)setServiceListener:(XPCServiceListener *)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)workQueueHandleIncomingMessage:(id)arg1 ;
-(void)workQueueShutDown;
-(id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3 ;
@end

