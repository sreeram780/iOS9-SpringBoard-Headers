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

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable <NSCopying> {

	NSMutableArray* _attributeKeys;
	int _maxBusinessResults;
	NSMutableArray* _photoOptions;
	BOOL _includeBusinessHours;
	BOOL _includeCenter;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,retain) NSMutableArray * photoOptions;               //@synthesize photoOptions=_photoOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeys;              //@synthesize attributeKeys=_attributeKeys - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBusinessHours; 
@property (assign,nonatomic) BOOL includeBusinessHours;                   //@synthesize includeBusinessHours=_includeBusinessHours - In the implementation block
@property (assign,nonatomic) BOOL hasMaxBusinessResults; 
@property (assign,nonatomic) int maxBusinessResults;                      //@synthesize maxBusinessResults=_maxBusinessResults - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeCenter; 
@property (assign,nonatomic) BOOL includeCenter;                          //@synthesize includeCenter=_includeCenter - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAttributeKey:(id)arg1 ;
-(BOOL)hasIncludeCenter;
-(void)addPhotoOptions:(id)arg1 ;
-(void)setMaxBusinessResults:(int)arg1 ;
-(void)setHasIncludeCenter:(BOOL)arg1 ;
-(void)setPhotoOptions:(NSMutableArray *)arg1 ;
-(BOOL)includeBusinessHours;
-(BOOL)includeCenter;
-(unsigned long long)photoOptionsCount;
-(int)maxBusinessResults;
-(void)setIncludeCenter:(BOOL)arg1 ;
-(unsigned long long)attributeKeysCount;
-(id)photoOptionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributeKeys;
-(void)setHasMaxBusinessResults:(BOOL)arg1 ;
-(void)setAttributeKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)photoOptions;
-(BOOL)hasMaxBusinessResults;
-(id)attributeKeyAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIncludeBusinessHours;
-(void)clearPhotoOptions;
-(void)setHasIncludeBusinessHours:(BOOL)arg1 ;
-(void)setIncludeBusinessHours:(BOOL)arg1 ;
-(void)clearAttributeKeys;
-(BOOL)readFrom:(id)arg1 ;
@end

