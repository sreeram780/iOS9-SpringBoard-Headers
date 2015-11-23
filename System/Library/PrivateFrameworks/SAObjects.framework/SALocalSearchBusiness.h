/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSDictionary, NSURL, NSArray, NSString, NSDate, SALocalSearchRating;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * businessId; 
@property (nonatomic,copy) NSDictionary * businessIds; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * openingHours; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSURL * photo; 
@property (nonatomic,retain) SALocalSearchRating * rating; 
@property (nonatomic,copy) NSArray * reviews; 
@property (assign,nonatomic) long long totalNumberOfReviews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)business;
+(id)businessWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSURL *)photo;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)categories;
-(NSArray *)reviews;
-(void)setReviews:(NSArray *)arg1 ;
-(NSArray *)phoneNumbers;
-(void)setRating:(SALocalSearchRating *)arg1 ;
-(SALocalSearchRating *)rating;
-(id)groupIdentifier;
-(void)setPhoto:(NSURL *)arg1 ;
-(id)encodedClassName;
-(void)setCategories:(NSArray *)arg1 ;
-(NSNumber *)businessId;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSDictionary *)businessIds;
-(void)setBusinessIds:(NSDictionary *)arg1 ;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(NSString *)openingHours;
-(void)setOpeningHours:(NSString *)arg1 ;
-(long long)totalNumberOfReviews;
-(void)setTotalNumberOfReviews:(long long)arg1 ;
@end

