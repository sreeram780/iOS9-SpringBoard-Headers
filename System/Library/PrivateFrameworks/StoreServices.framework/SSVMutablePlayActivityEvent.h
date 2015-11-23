/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEvent.h>

@class NSString, NSDate, NSTimeZone, NSData;

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (nonatomic,copy) NSString * containerID; 
@property (assign,nonatomic) unsigned long long containerType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) unsigned long long endReasonType; 
@property (nonatomic,copy) NSDate * eventDate; 
@property (nonatomic,copy) NSTimeZone * eventTimeZone; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * featureName; 
@property (assign,nonatomic) double itemDuration; 
@property (assign,nonatomic) double itemEndTime; 
@property (assign,nonatomic) double itemStartTime; 
@property (assign,nonatomic) unsigned long long itemType; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (assign,getter=isOffline,nonatomic) BOOL offline; 
@property (nonatomic,copy) NSString * personalizedContainerID; 
@property (nonatomic,copy) NSData * recommendationData; 
@property (assign,getter=isSBEnabled,nonatomic) BOOL SBEnabled; 
@property (assign,nonatomic) unsigned long long sourceType; 
@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * storeID; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSData * trackInfo; 
@property (assign,nonatomic) long long persistentID; 
-(void)setMediaType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerType:(unsigned long long)arg1 ;
-(void)setEventDate:(NSDate *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(Class)_mutableCopyClass;
-(void)setEndReasonType:(unsigned long long)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
@end

