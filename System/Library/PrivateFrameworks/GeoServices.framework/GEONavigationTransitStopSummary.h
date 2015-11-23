/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	unsigned long long _stopID;
	GEOLatLng* _coordinate;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasStopID; 
@property (assign,nonatomic) unsigned long long stopID;              //@synthesize stopID=_stopID - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
-(id)initWithTransitStop:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCoordinate;
-(void)setStopID:(unsigned long long)arg1 ;
-(unsigned long long)stopID;
-(BOOL)hasStopID;
-(void)setHasStopID:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

