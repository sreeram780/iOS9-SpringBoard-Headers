/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitLink.h>

@protocol GEOMapTransitStop;
@class NSString, GEOMapAccess;

@interface GEOMapTransitLinkImpl : NSObject <GEOMapTransitLink> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdgeTransit>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coords;
	id<GEOMapTransitStop> _stopFrom;
	id<GEOMapTransitStop> _stopTo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE16* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom;                  //@synthesize stopFrom=_stopFrom - In the implementation block
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo;                    //@synthesize stopTo=_stopTo - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(double)length;
-(SCD_Struct_GE16*)coordinates;
-(id<GEOMapTransitStop>)stopTo;
-(id<GEOMapTransitStop>)stopFrom;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(unsigned long long)coordinateCount;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE16*)arg2 ;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdgeTransit>*)arg2 ;
@end

