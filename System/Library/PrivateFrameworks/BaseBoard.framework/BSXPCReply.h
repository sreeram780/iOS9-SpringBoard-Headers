/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)messageWithReply:(id)arg1 ;
+(id)replyForMessage:(id)arg1 ;
-(void)dealloc;
-(id)message;
-(id)_initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(long long)messageKind;
-(void)sendReply:(/*^block*/id)arg1 ;
-(id)initWithReply:(id)arg1 ;
@end

