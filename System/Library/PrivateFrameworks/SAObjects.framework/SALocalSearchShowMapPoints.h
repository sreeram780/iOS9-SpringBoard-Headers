/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, SALocalSearchMapItem, NSNumber, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (nonatomic,copy) NSDate * arrivalDate; 
@property (nonatomic,copy) NSDate * departureDate; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocalSearchMapItem * itemDestination; 
@property (nonatomic,retain) SALocalSearchMapItem * itemSource; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (nonatomic,retain) SALocalSearchMapItemList * searchItems; 
@property (assign,nonatomic) BOOL showDirections; 
@property (assign,nonatomic) BOOL showTraffic; 
+(id)showMapPoints;
+(id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocalSearchMapItemList *)searchItems;
-(void)setSearchItems:(SALocalSearchMapItemList *)arg1 ;
-(void)setDepartureDate:(NSDate *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDate *)arrivalDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(NSDate *)departureDate;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(SALocalSearchMapItem *)itemDestination;
-(void)setItemDestination:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)itemSource;
-(void)setItemSource:(SALocalSearchMapItem *)arg1 ;
-(BOOL)showDirections;
-(void)setShowDirections:(BOOL)arg1 ;
-(BOOL)showTraffic;
-(void)setShowTraffic:(BOOL)arg1 ;
@end

