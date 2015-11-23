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

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {

	int _actionType;
	int _alertType;
	unsigned _oldRouteHistoricTravelTime;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	NSData* _reroutedRouteID;
	unsigned _reroutedRouteTravelTime;
	BOOL _backgrounded;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime;                           //@synthesize oldRouteTravelTime=_oldRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime;                      //@synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime;                   //@synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime;              //@synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents;                    //@synthesize oldRouteIncidents=_oldRouteIncidents - In the implementation block
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID;                                   //@synthesize oldRouteID=_oldRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID;                              //@synthesize reroutedRouteID=_reroutedRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                        //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType;                                         //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL hasBackgrounded; 
@property (assign,nonatomic) BOOL backgrounded;                                     //@synthesize backgrounded=_backgrounded - In the implementation block
-(int)actionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBackgrounded:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(void)setActionType:(int)arg1 ;
-(BOOL)hasActionType;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(unsigned)oldRouteTravelTime;
-(void)clearOldRouteIncidents;
-(NSData *)reroutedRouteID;
-(NSData *)oldRouteID;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(BOOL)hasAlertType;
-(BOOL)backgrounded;
-(BOOL)hasReroutedRouteID;
-(BOOL)hasReroutedRouteTravelTime;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(unsigned long long)oldRouteIncidentsCount;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(BOOL)hasOldRouteID;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasBackgrounded:(BOOL)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(unsigned)oldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(BOOL)hasOldRouteHistoricTravelTime;
-(BOOL)hasBackgrounded;
-(void)addOldRouteIncidents:(id)arg1 ;
-(int)alertType;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteID:(NSData *)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(BOOL)readFrom:(id)arg1 ;
@end

