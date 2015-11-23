/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDETA : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _time;
	int _transportType;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time;                      //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                  //@synthesize transportType=_transportType - In the implementation block
+(id)etaForPlaceData:(id)arg1 transportType:(int)arg2 ;
+(int)recommendedTransportTypeForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(unsigned)time;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(BOOL)readFrom:(id)arg1 ;
@end

