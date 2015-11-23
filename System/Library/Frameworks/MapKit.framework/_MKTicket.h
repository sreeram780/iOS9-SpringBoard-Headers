/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKMapServiceTicketForFreshness.h>
#import <libobjc.A.dylib/MKMapServiceTicket.h>

@protocol GEOMapServiceTicket;
@class GEOMapServiceTraits, NSArray, GEOMapRegion, NSError, NSString;

@interface _MKTicket : NSObject <_MKMapServiceTicketForFreshness, MKMapServiceTicket> {

	id<GEOMapServiceTicket> _ticket;
	NSArray* _exactMapItems;
	NSArray* _refinedMapItems;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL allAreFreshFromNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
-(BOOL)allAreFreshFromNetwork;
-(GEOMapRegion *)boundingRegion;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(NSArray *)refinedMapItems;
-(NSArray *)exactMapItems;
-(id)initWithTicket:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(NSError *)error;
-(void)cancel;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(NSString *)sectionHeader;
-(BOOL)isChainResultSet;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(double)requestResponseTime;
@end

