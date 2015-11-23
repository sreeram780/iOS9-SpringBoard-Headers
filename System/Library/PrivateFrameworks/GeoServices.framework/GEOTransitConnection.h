/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitConnection : PBCodable <NSCopying> {

	SCD_Struct_GE52* _fromRideIndexs;
	SCD_Struct_GE52* _toRideIndexs;
	NSMutableArray* _steps;

}

@property (nonatomic,readonly) unsigned long long fromRideIndexsCount; 
@property (nonatomic,readonly) unsigned* fromRideIndexs; 
@property (nonatomic,readonly) unsigned long long toRideIndexsCount; 
@property (nonatomic,readonly) unsigned* toRideIndexs; 
@property (nonatomic,retain) NSMutableArray * steps;                                //@synthesize steps=_steps - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)stepsCount;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)steps;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)addStep:(id)arg1 ;
-(unsigned)fromRideIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)fromRideIndexs;
-(unsigned long long)toRideIndexsCount;
-(unsigned)toRideIndexAtIndex:(unsigned long long)arg1 ;
-(void)setToRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)clearFromRideIndexs;
-(void)clearToRideIndexs;
-(unsigned long long)fromRideIndexsCount;
-(void)setFromRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addFromRideIndex:(unsigned)arg1 ;
-(unsigned*)toRideIndexs;
-(void)addToRideIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

