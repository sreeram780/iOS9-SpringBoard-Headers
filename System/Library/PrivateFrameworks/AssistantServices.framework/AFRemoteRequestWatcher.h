/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFRemoteRequestWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	/*^block*/id _handler;

}
-(void)dealloc;
-(id)init;
-(void)_setupListener;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
@end

