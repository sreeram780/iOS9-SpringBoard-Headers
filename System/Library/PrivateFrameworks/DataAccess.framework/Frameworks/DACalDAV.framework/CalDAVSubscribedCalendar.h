/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) BOOL hasAlarmFilter; 
@property (assign,nonatomic) BOOL hasAttachmentFilter; 
@property (assign,nonatomic) BOOL hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
@optional
-(NSString *)languageCode;
-(NSString *)locationCode;
-(BOOL)autoprovisioned;
-(void)setLocationCode:(id)arg1;
-(void)setAutoprovisioned:(BOOL)arg1;
-(void)setLanguageCode:(id)arg1;

@required
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(id)arg1;
-(BOOL)hasAlarmFilter;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(BOOL)hasAttachmentFilter;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(BOOL)hasTaskFilter;
-(void)setHasTaskFilter:(BOOL)arg1;
-(void)setRefreshInterval:(double)arg1;
-(double)refreshInterval;

@end

