/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying> {

	double _course;
	double _courseAccuracy;
	double _heading;
	double _horizontalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _timestamp;
	unsigned long long _transitID;
	double _verticalAccuracy;
	int _altitude;
	GEOLatLng* _latLng;
	int _referenceFrame;
	int _type;
	BOOL _isMatchedLocation;
	BOOL _isShifted;
	SCD_Struct_GE58 _has;

}

@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) BOOL hasAccurateCourse; 
@property (assign,nonatomic) BOOL hasCourseAccuracy; 
@property (assign,nonatomic) double courseAccuracy; 
@property (assign,nonatomic) BOOL hasSpeedAccuracy; 
@property (assign,nonatomic) double speedAccuracy; 
@property (assign,nonatomic) BOOL hasIsMatchedLocation; 
@property (assign,nonatomic) BOOL isMatchedLocation; 
@property (assign,nonatomic) BOOL hasIsShifted; 
@property (assign,nonatomic) BOOL isShifted; 
@property (assign,nonatomic) BOOL hasTransitID; 
@property (assign,nonatomic) unsigned long long transitID; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,retain) GEOLatLng * latLng;                        //@synthesize latLng=_latLng - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude;                              //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;                 //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                   //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                              //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) double heading;                            //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                             //@synthesize course=_course - In the implementation block
+(id)locationWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)initWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)initWithCLLocation:(id)arg1 useMatchInfo:(BOOL)arg2 ;
-(id)initWithCLLocation:(id)arg1 ;
-(id)_initWithCLClientLocation:(const SCD_Struct_GE59*)arg1 ;
-(SCD_Struct_GE16)coordinate;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE16)arg1 ;
-(BOOL)hasAccurateCourse;
-(BOOL)isShifted;
-(int)referenceFrame;
-(BOOL)isMatchedLocation;
-(void)setIsMatchedLocation:(BOOL)arg1 ;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(void)setHasIsMatchedLocation:(BOOL)arg1 ;
-(void)setSpeedAccuracy:(double)arg1 ;
-(void)setTransitID:(unsigned long long)arg1 ;
-(void)setHasSpeedAccuracy:(BOOL)arg1 ;
-(void)setHasTransitID:(BOOL)arg1 ;
-(BOOL)hasSpeedAccuracy;
-(BOOL)hasTransitID;
-(void)setHasCourseAccuracy:(BOOL)arg1 ;
-(void)setHasIsShifted:(BOOL)arg1 ;
-(BOOL)hasCourseAccuracy;
-(BOOL)hasIsShifted;
-(unsigned long long)transitID;
-(double)speedAccuracy;
-(BOOL)hasIsMatchedLocation;
-(double)courseAccuracy;
-(BOOL)hasReferenceFrame;
-(void)setIsShifted:(BOOL)arg1 ;
-(void)setCourseAccuracy:(double)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHeading:(double)arg1 ;
-(void)setAltitude:(int)arg1 ;
-(void)setHasHeading:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(GEOLatLng *)latLng;
-(BOOL)hasHeading;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(BOOL)hasAltitude;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(double)heading;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(double)course;
-(void)setCourse:(double)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(int)altitude;
-(BOOL)hasCourse;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasSpeed;
@end

