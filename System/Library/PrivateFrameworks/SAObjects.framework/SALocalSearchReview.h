/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACalendar, SAUIAppPunchOut, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SACalendar * lastUpdated; 
@property (nonatomic,copy) NSString * publication; 
@property (nonatomic,retain) SAUIAppPunchOut * reviewPunchOut; 
@property (nonatomic,retain) SALocalSearchRating * reviewRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)review;
+(id)reviewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(SACalendar *)lastUpdated;
-(void)setLastUpdated:(SACalendar *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)comment;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(NSString *)publication;
-(void)setPublication:(NSString *)arg1 ;
-(SAUIAppPunchOut *)reviewPunchOut;
-(void)setReviewPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SALocalSearchRating *)reviewRating;
-(void)setReviewRating:(SALocalSearchRating *)arg1 ;
@end

