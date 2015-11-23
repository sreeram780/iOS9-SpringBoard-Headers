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

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	unsigned long long _businessID;
	long long _placeID;
	NSMutableArray* _actionCaptures;
	int _localSearchProviderID;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID;                            //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionCaptures;              //@synthesize actionCaptures=_actionCaptures - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                    //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)businessID;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(long long)placeID;
-(unsigned long long)actionCapturesCount;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlaceID;
-(void)addActionCapture:(id)arg1 ;
-(void)clearActionCaptures;
-(NSMutableArray *)actionCaptures;
-(void)setPlaceID:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

