/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NMSMessageCenter, NSString, NSData, NMSOutgoingResponse;

@interface NMSIncomingRequest : NSObject <NMSObfuscatableDescriptionProviding> {

	BOOL _expectsResponse;
	unsigned short _messageID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	NMSOutgoingResponse* _response;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                 //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) NMSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowsUnrepliedRequestsForUnitTesting;
+(void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NMSOutgoingResponse *)response;
-(unsigned short)messageID;
-(id)CPObfuscatedDescriptionObject;
-(void)setResponse:(NMSOutgoingResponse *)arg1 ;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)configureResponse;
-(BOOL)expectsResponse;
@end

