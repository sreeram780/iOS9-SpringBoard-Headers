/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, _SKUICounterTimeFieldView, NSDate, UIColor, UIFont;

@interface SKUICounterTimeView : UIView {

	SKUIClientContext* _clientContext;
	_SKUICounterTimeFieldView* _daysFieldView;
	NSDate* _endDate;
	_SKUICounterTimeFieldView* _hoursFieldView;
	long long _lastTimeValue;
	_SKUICounterTimeFieldView* _minutesFieldView;
	_SKUICounterTimeFieldView* _secondsFieldView;
	UIColor* _textColor;
	UIFont* _valueFont;
	unsigned long long _visibleFields;

}

@property (nonatomic,copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                            //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;              //@synthesize visibleFields=_visibleFields - In the implementation block
-(NSDate *)endDate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(id)initWithClientContext:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(void)reloadTimeValue;
-(void)_setValuesUsingTimestamp:(long long)arg1 ;
-(id)_allFieldViews;
-(id)_visibleFieldViews;
-(double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3 ;
-(UIFont *)valueFont;
@end

