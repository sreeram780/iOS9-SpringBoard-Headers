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

@interface AWDCSDRelayMessageReceived : PBCodable <NSCopying> {

	unsigned long long _latencyMs;
	unsigned long long _protocolVersion;
	unsigned long long _timestamp;
	unsigned _callService;
	int _messageType;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                                 //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasCallService; 
@property (assign,nonatomic) unsigned callService;                            //@synthesize callService=_callService - In the implementation block
@property (assign,nonatomic) BOOL hasLatencyMs; 
@property (assign,nonatomic) unsigned long long latencyMs;                    //@synthesize latencyMs=_latencyMs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)hasProtocolVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLatencyMs:(unsigned long long)arg1 ;
-(void)setHasLatencyMs:(BOOL)arg1 ;
-(BOOL)hasLatencyMs;
-(unsigned long long)latencyMs;
-(void)setMessageType:(int)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(void)setCallService:(unsigned)arg1 ;
-(void)setHasCallService:(BOOL)arg1 ;
-(BOOL)hasCallService;
-(int)messageType;
-(unsigned)callService;
@end

