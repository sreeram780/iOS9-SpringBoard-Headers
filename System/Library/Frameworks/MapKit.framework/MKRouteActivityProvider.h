/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;
	unsigned long long _transportType;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                     //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
-(id)activitySourceTitle;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)sourceMapItem;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
-(id)activityURL;
-(MKMapItem *)destinationMapItem;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)transportType;
@end

