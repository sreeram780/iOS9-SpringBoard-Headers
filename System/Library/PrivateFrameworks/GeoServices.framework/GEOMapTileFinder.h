/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

@interface GEOMapTileFinder : GEOMapRequest {

	unsigned long long _zoomLevel;
	int _tileSize;
	int _tileScale;
	int _tileStyle;
	SCD_Struct_GE16 _center;
	double _radius;
	/*^block*/id _tileHandler;
	BOOL _isCanceling;

}

@property (nonatomic,readonly) unsigned long long zoomLevel;              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) int tileSize;                              //@synthesize tileSize=_tileSize - In the implementation block
@property (nonatomic,readonly) int tileScale;                             //@synthesize tileScale=_tileScale - In the implementation block
@property (nonatomic,readonly) int tileStyle;                             //@synthesize tileStyle=_tileStyle - In the implementation block
@property (nonatomic,copy) id tileHandler;                                //@synthesize tileHandler=_tileHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
+(unsigned)maxZoomLevel;
+(BOOL)supportsRealisticMap;
+(BOOL)supportsTransitMap;
+(unsigned)maxTransitZoomLevel;
+(id)realisticTileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
+(id)detailedTransitTileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
+(id)transitGeometryTileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(unsigned long long)zoomLevel;
-(void)cancel;
-(void)dealloc;
-(int)tileSize;
-(void)findTiles:(/*^block*/id)arg1 excludingKey:(const GEOTileKey*)arg2 ;
-(id)tileHandler;
-(int)tileStyle;
-(void)findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 tileHandler:(/*^block*/id)arg3 ;
-(void)_fetchDataForKeys:(const unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >*)arg1 ;
-(id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(SCD_Struct_GE16)arg6 radius:(double)arg7 ;
-(void)findTiles:(/*^block*/id)arg1 ;
-(void)setTileHandler:(id)arg1 ;
-(GEOTileKey)_adjacentTileKey:(const GEOTileKey*)arg1 dirX:(int)arg2 dirY:(int)arg3 ;
-(int)tileScale;
-(GEOMapAccess *)map;
@end

