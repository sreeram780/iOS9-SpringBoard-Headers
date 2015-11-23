/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSDate, NSDictionary;

@interface HDIDSIncomingResponse : NSObject {

	unsigned short _messageID;
	NSData* _data;
	NSString* _idsIdentifier;
	NSString* _requestIDSIdentifier;
	NSDate* _requestSent;
	NSDictionary* _requestPersistentUserInfo;
	id _pbResponse;

}

@property (assign,nonatomic) unsigned short messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIDSIdentifier;                         //@synthesize requestIDSIdentifier=_requestIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * requestSent;                                  //@synthesize requestSent=_requestSent - In the implementation block
@property (nonatomic,retain) NSDictionary * requestPersistentUserInfo;              //@synthesize requestPersistentUserInfo=_requestPersistentUserInfo - In the implementation block
@property (nonatomic,retain) id pbResponse;                                         //@synthesize pbResponse=_pbResponse - In the implementation block
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned short)messageID;
-(NSString *)idsIdentifier;
-(id)pbResponse;
-(void)setPbResponse:(id)arg1 ;
-(NSDictionary *)requestPersistentUserInfo;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setRequestIDSIdentifier:(NSString *)arg1 ;
-(void)setRequestSent:(NSDate *)arg1 ;
-(void)setRequestPersistentUserInfo:(NSDictionary *)arg1 ;
-(NSString *)requestIDSIdentifier;
-(NSDate *)requestSent;
@end

