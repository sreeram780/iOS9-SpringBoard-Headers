/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class MKMapItem, NSString;

@interface _MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {

	MKMapItem* _mapItem;
	NSString* _distanceToPlace;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	/*^block*/id _updateHandler;

}

@property (retain) MKMapItem * mapItem;                             //@synthesize mapItem=_mapItem - In the implementation block
@property (copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)infoAvailable;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)beginUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(void)_updateDistanceToPlace;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)dealloc;
-(void)endUpdates;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

