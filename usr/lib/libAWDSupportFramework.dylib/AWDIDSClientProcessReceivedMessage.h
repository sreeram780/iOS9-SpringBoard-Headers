/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _deltaTime;
	unsigned long long _payloadSize;
	unsigned long long _priority;
	unsigned long long _qos;
	unsigned long long _threadPriority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                             //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                 //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasQos; 
@property (assign,nonatomic) unsigned long long qos;                         //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) BOOL hasThreadPriority; 
@property (assign,nonatomic) unsigned long long threadPriority;              //@synthesize threadPriority=_threadPriority - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTime; 
@property (assign,nonatomic) unsigned long long deltaTime;                   //@synthesize deltaTime=_deltaTime - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
-(void)setThreadPriority:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)service;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasService;
-(void)setHasPriority:(BOOL)arg1 ;
-(BOOL)hasPriority;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setQos:(unsigned long long)arg1 ;
-(void)setHasQos:(BOOL)arg1 ;
-(BOOL)hasQos;
-(void)setHasThreadPriority:(BOOL)arg1 ;
-(BOOL)hasThreadPriority;
-(void)setDeltaTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTime;
-(unsigned long long)payloadSize;
-(unsigned long long)qos;
-(unsigned long long)threadPriority;
-(unsigned long long)deltaTime;
@end

