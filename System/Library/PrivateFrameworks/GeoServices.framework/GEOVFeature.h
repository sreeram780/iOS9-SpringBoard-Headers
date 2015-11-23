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

@class GEOVCharacteristics, NSData, NSMutableArray;

@interface GEOVFeature : PBCodable <NSCopying> {

	SCD_Struct_GE1* _extrusionHeights;
	SCD_Struct_GE1* _labelOffsets;
	SCD_Struct_GE1* _shieldLabelOffsets;
	SCD_Struct_GE1* _shieldLabelTypes;
	unsigned long long _businessID;
	long long _uID;
	unsigned _centerlineCount;
	unsigned _centerlineStart;
	GEOVCharacteristics* _characteristics;
	float _endLaneWidth;
	float _endOffset;
	float _endRoadOffset;
	unsigned _entryPointMask;
	int _formOfWay;
	float _minzoomRank;
	NSData* _oBSOLETECenterlines;
	NSData* _oBSOLETEShieldLabelPositions;
	NSData* _oBSOLETEVertexLabelPositions;
	int _placeType;
	NSData* _pointLabelPosition;
	int _roadClass;
	int _sectionCount;
	int _sectionStart;
	int _speedLimit;
	float _startLaneWidth;
	float _startOffset;
	float _startRoadOffset;
	NSMutableArray* _styleAttributes;
	unsigned _styleGroup;
	int _travelDirection;
	int _type;
	BOOL _polyIsConvex;
	SCD_Struct_GE176 _has;

}

@property (nonatomic,readonly) unsigned long long labelOffsetsCount; 
@property (nonatomic,readonly) int* labelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelOffsetsCount; 
@property (nonatomic,readonly) int* shieldLabelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelTypesCount; 
@property (nonatomic,readonly) int* shieldLabelTypes; 
@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID;                                             //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                             //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType;                                             //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) BOOL hasPolyIsConvex; 
@property (assign,nonatomic) BOOL polyIsConvex;                                         //@synthesize polyIsConvex=_polyIsConvex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass;                                             //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) BOOL hasFormOfWay; 
@property (assign,nonatomic) int formOfWay;                                             //@synthesize formOfWay=_formOfWay - In the implementation block
@property (assign,nonatomic) BOOL hasTravelDirection; 
@property (assign,nonatomic) int travelDirection;                                       //@synthesize travelDirection=_travelDirection - In the implementation block
@property (assign,nonatomic) BOOL hasSectionStart; 
@property (assign,nonatomic) int sectionStart;                                          //@synthesize sectionStart=_sectionStart - In the implementation block
@property (assign,nonatomic) BOOL hasSectionCount; 
@property (assign,nonatomic) int sectionCount;                                          //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPointLabelPosition; 
@property (nonatomic,retain) NSData * pointLabelPosition;                               //@synthesize pointLabelPosition=_pointLabelPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEVertexLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEVertexLabelPositions;                     //@synthesize oBSOLETEVertexLabelPositions=_oBSOLETEVertexLabelPositions - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEShieldLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEShieldLabelPositions;                     //@synthesize oBSOLETEShieldLabelPositions=_oBSOLETEShieldLabelPositions - In the implementation block
@property (assign,nonatomic) BOOL hasStyleGroup; 
@property (assign,nonatomic) unsigned styleGroup;                                       //@synthesize styleGroup=_styleGroup - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimit; 
@property (assign,nonatomic) int speedLimit;                                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long extrusionHeightsCount; 
@property (nonatomic,readonly) int* extrusionHeights; 
@property (nonatomic,readonly) BOOL hasCharacteristics; 
@property (nonatomic,retain) GEOVCharacteristics * characteristics;                     //@synthesize characteristics=_characteristics - In the implementation block
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset;                                         //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset;                                           //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) BOOL hasMinzoomRank; 
@property (assign,nonatomic) float minzoomRank;                                         //@synthesize minzoomRank=_minzoomRank - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETECenterlines; 
@property (nonatomic,retain) NSData * oBSOLETECenterlines;                              //@synthesize oBSOLETECenterlines=_oBSOLETECenterlines - In the implementation block
@property (assign,nonatomic) BOOL hasCenterlineCount; 
@property (assign,nonatomic) unsigned centerlineCount;                                  //@synthesize centerlineCount=_centerlineCount - In the implementation block
@property (assign,nonatomic) BOOL hasCenterlineStart; 
@property (assign,nonatomic) unsigned centerlineStart;                                  //@synthesize centerlineStart=_centerlineStart - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleAttributes;                          //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartLaneWidth; 
@property (assign,nonatomic) float startLaneWidth;                                      //@synthesize startLaneWidth=_startLaneWidth - In the implementation block
@property (assign,nonatomic) BOOL hasEndLaneWidth; 
@property (assign,nonatomic) float endLaneWidth;                                        //@synthesize endLaneWidth=_endLaneWidth - In the implementation block
@property (assign,nonatomic) BOOL hasStartRoadOffset; 
@property (assign,nonatomic) float startRoadOffset;                                     //@synthesize startRoadOffset=_startRoadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndRoadOffset; 
@property (assign,nonatomic) float endRoadOffset;                                       //@synthesize endRoadOffset=_endRoadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEntryPointMask; 
@property (assign,nonatomic) unsigned entryPointMask;                                   //@synthesize entryPointMask=_entryPointMask - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)endOffset;
-(float)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(float)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasUID;
-(void)setHasUID:(BOOL)arg1 ;
-(void)setUID:(long long)arg1 ;
-(long long)uID;
-(void)setStyleAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)styleAttributes;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(void)setEndOffset:(float)arg1 ;
-(BOOL)hasStartOffset;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)businessID;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(float)endLaneWidth;
-(BOOL)hasSpeedLimit;
-(void)clearShieldLabelTypes;
-(void)setHasPolyIsConvex:(BOOL)arg1 ;
-(void)setSpeedLimit:(int)arg1 ;
-(void)clearStyleAttributes;
-(float)endRoadOffset;
-(int)placeType;
-(void)setLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setRoadClass:(int)arg1 ;
-(void)setHasSpeedLimit:(BOOL)arg1 ;
-(int)shieldLabelOffsetAtIndex:(unsigned long long)arg1 ;
-(float)startRoadOffset;
-(void)setStartLaneWidth:(float)arg1 ;
-(void)clearLabelOffsets;
-(void)setExtrusionHeights:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)centerlineStart;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(unsigned long long)styleAttributesCount;
-(float)startLaneWidth;
-(int*)extrusionHeights;
-(int*)shieldLabelOffsets;
-(void)setFormOfWay:(int)arg1 ;
-(void)setPointLabelPosition:(NSData *)arg1 ;
-(void)setEndLaneWidth:(float)arg1 ;
-(int)sectionStart;
-(void)setHasFormOfWay:(BOOL)arg1 ;
-(unsigned long long)labelOffsetsCount;
-(BOOL)hasStartLaneWidth;
-(void)addExtrusionHeight:(int)arg1 ;
-(void)setShieldLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasCharacteristics;
-(void)setTravelDirection:(int)arg1 ;
-(void)setHasStartLaneWidth:(BOOL)arg1 ;
-(void)setOBSOLETEVertexLabelPositions:(NSData *)arg1 ;
-(int)extrusionHeightAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFormOfWay;
-(NSData *)pointLabelPosition;
-(int*)shieldLabelTypes;
-(void)setStartRoadOffset:(float)arg1 ;
-(BOOL)polyIsConvex;
-(void)setShieldLabelTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasTravelDirection:(BOOL)arg1 ;
-(BOOL)hasEndLaneWidth;
-(int)shieldLabelTypeAtIndex:(unsigned long long)arg1 ;
-(int)roadClass;
-(unsigned)entryPointMask;
-(BOOL)hasRoadClass;
-(int)formOfWay;
-(void)setSectionStart:(int)arg1 ;
-(void)setHasEndLaneWidth:(BOOL)arg1 ;
-(void)setOBSOLETEShieldLabelPositions:(NSData *)arg1 ;
-(int)travelDirection;
-(BOOL)hasTravelDirection;
-(void)clearShieldLabelOffsets;
-(BOOL)hasSectionStart;
-(unsigned)styleGroup;
-(void)setHasEndRoadOffset:(BOOL)arg1 ;
-(void)setSectionCount:(int)arg1 ;
-(void)setMinzoomRank:(float)arg1 ;
-(unsigned long long)shieldLabelOffsetsCount;
-(GEOVCharacteristics *)characteristics;
-(BOOL)hasEndRoadOffset;
-(void)addShieldLabelType:(int)arg1 ;
-(void)setHasSectionStart:(BOOL)arg1 ;
-(int)speedLimit;
-(BOOL)hasSectionCount;
-(void)setHasStartRoadOffset:(BOOL)arg1 ;
-(BOOL)hasPointLabelPosition;
-(BOOL)hasOBSOLETECenterlines;
-(NSData *)oBSOLETEVertexLabelPositions;
-(id)styleAttributesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartRoadOffset;
-(BOOL)hasMinzoomRank;
-(void)setHasSectionCount:(BOOL)arg1 ;
-(void)setHasMinzoomRank:(BOOL)arg1 ;
-(NSData *)oBSOLETEShieldLabelPositions;
-(void)setCharacteristics:(GEOVCharacteristics *)arg1 ;
-(void)setEndRoadOffset:(float)arg1 ;
-(NSData *)oBSOLETECenterlines;
-(BOOL)hasOBSOLETEShieldLabelPositions;
-(void)addStyleAttributes:(id)arg1 ;
-(int)labelOffsetAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCenterlineCount;
-(float)minzoomRank;
-(void)setStyleGroup:(unsigned)arg1 ;
-(BOOL)hasOBSOLETEVertexLabelPositions;
-(void)setHasCenterlineCount:(BOOL)arg1 ;
-(unsigned long long)extrusionHeightsCount;
-(void)setCenterlineCount:(unsigned)arg1 ;
-(void)addLabelOffset:(int)arg1 ;
-(unsigned)centerlineCount;
-(void)setOBSOLETECenterlines:(NSData *)arg1 ;
-(void)setPlaceType:(int)arg1 ;
-(void)setEntryPointMask:(unsigned)arg1 ;
-(BOOL)hasCenterlineStart;
-(void)addShieldLabelOffset:(int)arg1 ;
-(BOOL)hasPlaceType;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(unsigned long long)shieldLabelTypesCount;
-(BOOL)hasStyleGroup;
-(void)setHasEntryPointMask:(BOOL)arg1 ;
-(int*)labelOffsets;
-(void)setPolyIsConvex:(BOOL)arg1 ;
-(void)setHasCenterlineStart:(BOOL)arg1 ;
-(BOOL)hasEntryPointMask;
-(void)setCenterlineStart:(unsigned)arg1 ;
-(void)clearExtrusionHeights;
-(void)setHasStyleGroup:(BOOL)arg1 ;
-(BOOL)hasPolyIsConvex;
-(int)sectionCount;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
@end

