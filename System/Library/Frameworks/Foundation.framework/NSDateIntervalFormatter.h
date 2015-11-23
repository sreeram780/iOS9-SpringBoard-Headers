/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@protocol OS_dispatch_semaphore;
@class NSLocale, NSCalendar, NSTimeZone, NSString, NSObject;

@interface NSDateIntervalFormatter : NSFormatter {

	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSString* _dateTemplate;
	NSString* _dateTemplateFromStyles;
	void* _formatter;
	unsigned long long _dateStyle;
	unsigned long long _timeStyle;
	BOOL _modified;
	BOOL _useTemplate;
	NSObject*<OS_dispatch_semaphore> _lock;
	void** _reserved[4];

}

@property (copy) NSLocale * locale; 
@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSString * dateTemplate; 
@property (assign) unsigned long long dateStyle; 
@property (assign) unsigned long long timeStyle; 
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(NSString *)dateTemplate;
-(void)setDateTemplate:(NSString *)arg1 ;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)finalize;
@end

