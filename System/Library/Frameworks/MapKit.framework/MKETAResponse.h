/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapItem, NSArray, NSDate;

@interface MKETAResponse : NSObject {

	MKMapItem* _source;
	MKMapItem* _destination;
	double _expectedTravelTime;
	double _distance;
	NSArray* _sortedETAs;
	unsigned long long _transportType;
	NSDate* _expectedArrivalDate;
	NSDate* _expectedDepartureDate;

}

@property (nonatomic,readonly) MKMapItem * source;                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) double expectedTravelTime;                            //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (nonatomic,readonly) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSDate * expectedArrivalDate;                           //@synthesize expectedArrivalDate=_expectedArrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expectedDepartureDate;                         //@synthesize expectedDepartureDate=_expectedDepartureDate - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (getter=_sortedETAs,nonatomic,readonly) NSArray * sortedETAs;              //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(double)expectedTravelTime;
-(NSDate *)expectedArrivalDate;
-(void)setExpectedArrivalDate:(NSDate *)arg1 ;
-(NSDate *)expectedDepartureDate;
-(void)setExpectedDepartureDate:(NSDate *)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 sortedETAs:(id)arg5 ;
-(unsigned long long)_transportType:(int)arg1 ;
-(id)_sortedETAs;
-(MKMapItem *)source;
-(MKMapItem *)destination;
-(unsigned long long)transportType;
-(double)distance;
@end

