/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSCalendar;

@interface HKDateCache : NSObject {

	NSDate* _startOfDayMidnight;
	NSDate* _endOfDayMidnight;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSDate * startOfDayMidnight; 
@property (nonatomic,readonly) NSDate * endOfDayMidnight; 
-(BOOL)isDateInToday:(id)arg1 ;
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
-(void)flushCache;
-(NSDate *)startOfDayMidnight;
-(NSDate *)endOfDayMidnight;
-(void)_significantTimeChangeOccurred:(id)arg1 ;
@end

