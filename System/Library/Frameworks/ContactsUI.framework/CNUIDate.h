/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNUIDate : NSObject
+(void)localeDidChange:(id)arg1 ;
+(id)gregorianCalendarGMT;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)currentCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)yearlessComponentsFromDate:(id)arg1 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
+(void)initialize;
@end

