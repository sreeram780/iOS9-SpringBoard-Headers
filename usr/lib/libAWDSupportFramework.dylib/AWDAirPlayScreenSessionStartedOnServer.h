/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _clientBonjourMs;
	unsigned _clientConfigMs;
	unsigned _clientConnectMs;
	NSString* _clientModel;
	unsigned _clientPrepareMs;
	NSString* _clientVersion;
	unsigned _serverAcceptTime;
	unsigned _serverConfigTime;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                     //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) BOOL hasClientPrepareMs; 
@property (assign,nonatomic) unsigned clientPrepareMs;                   //@synthesize clientPrepareMs=_clientPrepareMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                   //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                   //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConfigMs; 
@property (assign,nonatomic) unsigned clientConfigMs;                    //@synthesize clientConfigMs=_clientConfigMs - In the implementation block
@property (assign,nonatomic) BOOL hasServerAcceptTime; 
@property (assign,nonatomic) unsigned serverAcceptTime;                  //@synthesize serverAcceptTime=_serverAcceptTime - In the implementation block
@property (assign,nonatomic) BOOL hasServerConfigTime; 
@property (assign,nonatomic) unsigned serverConfigTime;                  //@synthesize serverConfigTime=_serverConfigTime - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(unsigned)transportType;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setClientModel:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(BOOL)hasClientModel;
-(BOOL)hasClientVersion;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(BOOL)arg1 ;
-(BOOL)hasAudioCompressionType;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setHasClientBonjourMs:(BOOL)arg1 ;
-(BOOL)hasClientBonjourMs;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setHasClientConnectMs:(BOOL)arg1 ;
-(BOOL)hasClientConnectMs;
-(NSString *)clientModel;
-(NSString *)clientVersion;
-(unsigned)audioCompressionType;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(void)setClientPrepareMs:(unsigned)arg1 ;
-(void)setHasClientPrepareMs:(BOOL)arg1 ;
-(BOOL)hasClientPrepareMs;
-(void)setClientConfigMs:(unsigned)arg1 ;
-(void)setHasClientConfigMs:(BOOL)arg1 ;
-(BOOL)hasClientConfigMs;
-(void)setServerAcceptTime:(unsigned)arg1 ;
-(void)setHasServerAcceptTime:(BOOL)arg1 ;
-(BOOL)hasServerAcceptTime;
-(void)setServerConfigTime:(unsigned)arg1 ;
-(void)setHasServerConfigTime:(BOOL)arg1 ;
-(BOOL)hasServerConfigTime;
-(unsigned)clientPrepareMs;
-(unsigned)clientConfigMs;
-(unsigned)serverAcceptTime;
-(unsigned)serverConfigTime;
@end

