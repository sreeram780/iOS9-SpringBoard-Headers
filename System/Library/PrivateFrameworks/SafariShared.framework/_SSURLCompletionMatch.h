/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, NSDate;


@protocol _SSURLCompletionMatch <NSObject>
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) long long matchLocation; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit; 
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch; 
@property (nonatomic,readonly) long long visitCount; 
@property (nonatomic,readonly) NSDate * lastVisitTime; 
@required
-(NSURL *)url;
-(NSString *)title;
-(NSString *)userVisibleURLString;
-(long long)visitCount;
-(NSDate *)lastVisitTime;
-(BOOL)isTopHit;
-(long long)matchLocation;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;

@end

