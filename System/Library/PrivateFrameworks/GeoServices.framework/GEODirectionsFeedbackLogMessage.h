/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {

	SCD_Struct_GE137 _navigationAudioFeedback;
	double _durationOfTrip;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	BOOL _arrivedAtDestination;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                  //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                           //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination;                             //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) SCD_Struct_GE135 navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip;                                 //@synthesize durationOfTrip=_durationOfTrip - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(SCD_Struct_GE135)navigationAudioFeedback;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(BOOL)arrivedAtDestination;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(BOOL)hasFinalLocation;
-(BOOL)hasDurationOfTrip;
-(double)durationOfTrip;
-(void)setNavigationAudioFeedback:(SCD_Struct_GE135)arg1 ;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(void)clearDirectionsFeedbacks;
-(NSMutableArray *)directionsFeedbacks;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(void)setDurationOfTrip:(double)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(GEOLocation *)finalLocation;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

