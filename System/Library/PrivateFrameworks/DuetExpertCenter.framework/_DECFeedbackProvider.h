/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _DECFeedbackProvider : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
+(void)setCategory:(unsigned long long)arg1 ;
+(void)userEngaged:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 ;
-(id)init;
@end

