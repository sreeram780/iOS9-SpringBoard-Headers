/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDate, NSObject;

@interface AppLaunchStatsRetryTracker : NSObject {

	unsigned long long _maxRetry;
	unsigned long long _resetTime;
	NSMutableDictionary* _tracker;
	NSDate* _resetTrackerDate;
	NSObject*<OS_dispatch_queue> _rTrackerQueue;

}
-(id)init;
-(void)resetTime;
-(BOOL)hasTooManyRetries:(id)arg1 ;
-(void)updateRetryCountFor:(id)arg1 withCount:(long long)arg2 ;
@end

