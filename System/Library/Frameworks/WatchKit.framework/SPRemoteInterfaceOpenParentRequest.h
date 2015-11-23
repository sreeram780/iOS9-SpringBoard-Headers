/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject {

	BOOL _waitingForReply;
	NSData* _userInfoData;
	/*^block*/id _reply;

}

@property (assign,nonatomic) BOOL waitingForReply;              //@synthesize waitingForReply=_waitingForReply - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;               //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) id reply;                            //@synthesize reply=_reply - In the implementation block
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(BOOL)waitingForReply;
-(void)setWaitingForReply:(BOOL)arg1 ;
-(void)setReply:(id)arg1 ;
-(id)reply;
@end

