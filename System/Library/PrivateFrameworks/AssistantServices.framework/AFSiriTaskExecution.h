/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriResponseHandling.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, AFSiriTaskDelivering;
@class NSObject, AFSiriRequest, NSXPCListener, AFWatchdogTimer, NSString;

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	AFSiriRequest* _request;
	id<AFSiriTaskDelivering> _taskDeliverer;
	NSXPCListener* _usageResultListener;
	/*^block*/id _deliveryHandler;
	/*^block*/id _completionHandler;
	long long _state;
	AFWatchdogTimer* _taskResponseWatchdogTimer;
	NSXPCListener* _taskResponseListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_completeWithResponse:(id)arg1 ;
-(void)_completeWithError:(id)arg1 ;
-(void)_completeWithResponse:(id)arg1 error:(id)arg2 ;
-(void)handleSiriResponse:(id)arg1 ;
-(void)handleFailureOfRequest:(id)arg1 error:(id)arg2 ;
-(id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3 ;
-(void)setDeliveryHandler:(/*^block*/id)arg1 ;
@end

