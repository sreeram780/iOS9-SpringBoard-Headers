/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsCustomEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * topic; 
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(BOOL)isFieldBlacklistEnabled;
-(id)decorateReportingURL:(id)arg1 ;
@end

