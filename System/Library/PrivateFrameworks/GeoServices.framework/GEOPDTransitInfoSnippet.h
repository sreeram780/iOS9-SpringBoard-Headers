/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {

	NSMutableArray* _artworks;
	NSMutableArray* _labels;
	NSString* _searchDisplayName;
	NSMutableArray* _systemNames;

}

@property (nonatomic,retain) NSMutableArray * systemNames;              //@synthesize systemNames=_systemNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                 //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName;              //@synthesize searchDisplayName=_searchDisplayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;                   //@synthesize labels=_labels - In the implementation block
+(id)transitInfoSnippetForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(void)clearLabels;
-(NSString *)searchDisplayName;
-(unsigned long long)labelsCount;
-(void)addLabel:(id)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)artworks;
-(void)clearSystemNames;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(void)clearArtworks;
-(NSMutableArray *)systemNames;
-(unsigned long long)systemNamesCount;
-(id)systemNameAtIndex:(unsigned long long)arg1 ;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(void)setSystemNames:(NSMutableArray *)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(unsigned long long)artworksCount;
-(void)addSystemName:(id)arg1 ;
-(NSMutableArray *)labels;
-(BOOL)readFrom:(id)arg1 ;
@end

