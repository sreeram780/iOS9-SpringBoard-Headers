/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SALocalSearchAceNavigationEta, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,copy) NSString * trafficIncidentAlertType; 
@property (nonatomic,copy) NSString * volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setVolume:(NSString *)arg1 ;
-(SALocalSearchRoute *)route;
-(void)setRoute:(SALocalSearchRoute *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)volume;
-(SALocalSearchAceNavigationEta *)nextManeuverEta;
-(void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(SALocalSearchAceNavigationEta *)overallEta;
-(void)setOverallEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(NSString *)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(NSString *)arg1 ;
@end

