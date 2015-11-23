/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapRoad.h>

@class GEOMapAccess, NSString;

@interface GEOMapRoadImpl : NSObject <GEOMapRoad> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdgeRoad>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coords;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE16* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
-(void)dealloc;
-(NSString *)description;
-(double)length;
-(SCD_Struct_GE16*)coordinates;
-(int)roadClass;
-(int)formOfWay;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)coordinateCount;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
-(SCD_Struct_GE97*)feature;
@end

