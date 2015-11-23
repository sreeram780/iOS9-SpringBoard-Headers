/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber;

@interface HMMsgHandler : NSObject {

	NSObject*<OS_dispatch_queue> _receiverQueue;
	/*^block*/id _messageHandler;
	NSNumber* _token;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> receiverQueue;              //@synthesize receiverQueue=_receiverQueue - In the implementation block
@property (nonatomic,copy) id messageHandler;                                         //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,retain) NSNumber * token;                                        //@synthesize token=_token - In the implementation block
+(id)msgHandler:(/*^block*/id)arg1 token:(id)arg2 receiverQueue:(id)arg3 ;
-(NSNumber *)token;
-(void)setToken:(NSNumber *)arg1 ;
-(id)initWithMessageHandler:(/*^block*/id)arg1 token:(id)arg2 receiverQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)receiverQueue;
-(void)setReceiverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)messageHandler;
-(void)setMessageHandler:(id)arg1 ;
@end

