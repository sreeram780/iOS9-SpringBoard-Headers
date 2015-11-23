/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class HKDateCache, CALayer, UIColor, UIFont, NSDate;

@interface HKCalendarDayCell : CALayer {

	long long _dayOfMonth;
	HKDateCache* _dateCache;
	BOOL _selected;
	BOOL _representsToday;
	CALayer* _circle;
	CALayer* _dayLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _boldFont;
	double _dayDiameter;
	NSDate* _date;

}

@property (nonatomic,readonly) CALayer * circle;                           //@synthesize circle=_circle - In the implementation block
@property (nonatomic,readonly) CALayer * dayLabel;                         //@synthesize dayLabel=_dayLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                            //@synthesize boldFont=_boldFont - In the implementation block
@property (assign,nonatomic) double dayDiameter;                           //@synthesize dayDiameter=_dayDiameter - In the implementation block
@property (nonatomic,retain) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long dayOfMonth;                       //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,readonly) BOOL representsToday;                       //@synthesize representsToday=_representsToday - In the implementation block
-(long long)dayOfMonth;
-(CALayer *)circle;
-(id)init;
-(id)debugDescription;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)textColor;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSublayers;
-(id)_integerNumberFormatter;
-(UIFont *)boldFont;
-(double)dayDiameter;
-(id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2 ;
-(void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2 ;
-(id)initWithDateCache:(id)arg1 ;
-(CALayer *)dayLabel;
-(void)setBoldFont:(UIFont *)arg1 ;
-(void)setDayDiameter:(double)arg1 ;
-(BOOL)representsToday;
@end

