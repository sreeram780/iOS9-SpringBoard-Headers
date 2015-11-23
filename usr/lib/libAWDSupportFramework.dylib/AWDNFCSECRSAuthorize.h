/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	NSData* _aid;
	unsigned _method;
	unsigned _status;
	NSData* _uuidReference;
	BOOL _activated;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasMethod; 
@property (assign,nonatomic) unsigned method;                                        //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) BOOL hasActivated; 
@property (assign,nonatomic) BOOL activated;                                         //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)method;
-(BOOL)activated;
-(void)setActivated:(BOOL)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setAid:(NSData *)arg1 ;
-(BOOL)hasAid;
-(NSData *)aid;
-(void)setHasMethod:(BOOL)arg1 ;
-(BOOL)hasMethod;
-(void)setHasActivated:(BOOL)arg1 ;
-(BOOL)hasActivated;
@end

