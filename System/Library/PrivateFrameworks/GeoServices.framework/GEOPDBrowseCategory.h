/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStyleAttributes, NSMutableArray, NSData;

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {

	NSString* _displayString;
	NSString* _popularDisplayToken;
	NSString* _shortDisplayString;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _subCategorys;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                  //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * subCategorys;                     //@synthesize subCategorys=_subCategorys - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDisplayString; 
@property (nonatomic,retain) NSString * shortDisplayString;                     //@synthesize shortDisplayString=_shortDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularDisplayToken; 
@property (nonatomic,retain) NSString * popularDisplayToken;                    //@synthesize popularDisplayToken=_popularDisplayToken - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(BOOL)hasStyleAttributes;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(NSString *)shortDisplayString;
-(void)clearSubCategorys;
-(NSMutableArray *)subCategorys;
-(void)addSubCategory:(id)arg1 ;
-(void)setShortDisplayString:(NSString *)arg1 ;
-(id)subCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subCategorysCount;
-(NSString *)popularDisplayToken;
-(BOOL)hasPopularDisplayToken;
-(BOOL)hasDisplayString;
-(void)setSubCategorys:(NSMutableArray *)arg1 ;
-(BOOL)hasShortDisplayString;
-(void)setPopularDisplayToken:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

