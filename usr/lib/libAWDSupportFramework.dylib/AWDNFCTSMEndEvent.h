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

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	NSData* _aid;
	NSData* _discretionaryData;
	unsigned _lcState;
	unsigned _status;
	NSData* _uuidReference;
	BOOL _authEnable;
	BOOL _mfdEnable;
	BOOL _restricted;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasAuthEnable; 
@property (assign,nonatomic) BOOL authEnable;                                        //@synthesize authEnable=_authEnable - In the implementation block
@property (assign,nonatomic) BOOL hasMfdEnable; 
@property (assign,nonatomic) BOOL mfdEnable;                                         //@synthesize mfdEnable=_mfdEnable - In the implementation block
@property (assign,nonatomic) BOOL hasLcState; 
@property (assign,nonatomic) unsigned lcState;                                       //@synthesize lcState=_lcState - In the implementation block
@property (assign,nonatomic) BOOL hasRestricted; 
@property (assign,nonatomic) BOOL restricted;                                        //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscretionaryData; 
@property (nonatomic,retain) NSData * discretionaryData;                             //@synthesize discretionaryData=_discretionaryData - In the implementation block
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
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
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
-(void)setDiscretionaryData:(NSData *)arg1 ;
-(void)setAuthEnable:(BOOL)arg1 ;
-(void)setHasAuthEnable:(BOOL)arg1 ;
-(BOOL)hasAuthEnable;
-(void)setMfdEnable:(BOOL)arg1 ;
-(void)setHasMfdEnable:(BOOL)arg1 ;
-(BOOL)hasMfdEnable;
-(void)setLcState:(unsigned)arg1 ;
-(void)setHasLcState:(BOOL)arg1 ;
-(BOOL)hasLcState;
-(void)setHasRestricted:(BOOL)arg1 ;
-(BOOL)hasRestricted;
-(BOOL)hasDiscretionaryData;
-(BOOL)authEnable;
-(BOOL)mfdEnable;
-(unsigned)lcState;
-(BOOL)restricted;
-(NSData *)discretionaryData;
@end

