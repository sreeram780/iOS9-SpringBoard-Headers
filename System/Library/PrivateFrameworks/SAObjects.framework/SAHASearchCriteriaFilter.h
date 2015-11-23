/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSString;

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * homeName; 
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,copy) NSString * sceneName; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * zoneName; 
+(id)searchCriteriaFilter;
+(id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(NSString *)attribute;
-(void)setAttribute:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)zoneName;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)groupIdentifier;
-(NSString *)homeName;
-(NSString *)roomName;
-(NSString *)sceneName;
-(id)encodedClassName;
-(void)setHomeName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setSceneName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
@end

