/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;
@class NSMutableArray, HKDateCache, UIView, CALayer, NSDate, HKCalendarDayCell, NSArray;

@interface HKCalendarWeekView : UIView {

	NSMutableArray* _dayCells;
	HKDateCache* _dateCache;
	UIView*<HKCalendarMonthTitleFormatting> _monthTitleView;
	CALayer* _topBorderLine;
	double _dateTopMargin;
	double _dateBottomMargin;
	double _leftMargin;
	double _monthTitleTopMargin;
	double _dateDiameter;
	NSDate* _monthWeekStart;
	id<HKCalendarWeekViewDelegate> _delegate;
	long long _firstDayOfMonthCellIndex;
	long long _pressedDayOfWeek;
	HKCalendarDayCell* _pressedDayCell;

}

@property (nonatomic,retain) UIView*<HKCalendarMonthTitleFormatting> monthTitleView;              //@synthesize monthTitleView=_monthTitleView - In the implementation block
@property (nonatomic,retain) CALayer * topBorderLine;                                             //@synthesize topBorderLine=_topBorderLine - In the implementation block
@property (assign,nonatomic) double dateTopMargin;                                                //@synthesize dateTopMargin=_dateTopMargin - In the implementation block
@property (assign,nonatomic) double dateBottomMargin;                                             //@synthesize dateBottomMargin=_dateBottomMargin - In the implementation block
@property (assign,nonatomic) double leftMargin;                                                   //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double monthTitleTopMargin;                                          //@synthesize monthTitleTopMargin=_monthTitleTopMargin - In the implementation block
@property (assign,nonatomic) double dateDiameter;                                                 //@synthesize dateDiameter=_dateDiameter - In the implementation block
@property (nonatomic,retain) NSDate * monthWeekStart;                                             //@synthesize monthWeekStart=_monthWeekStart - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarWeekViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * dayCells;                                                //@synthesize dayCells=_dayCells - In the implementation block
@property (assign,nonatomic) long long firstDayOfMonthCellIndex;                                  //@synthesize firstDayOfMonthCellIndex=_firstDayOfMonthCellIndex - In the implementation block
@property (assign,nonatomic) long long pressedDayOfWeek;                                          //@synthesize pressedDayOfWeek=_pressedDayOfWeek - In the implementation block
@property (nonatomic,retain) HKCalendarDayCell * pressedDayCell;                                  //@synthesize pressedDayCell=_pressedDayCell - In the implementation block
-(BOOL)containsDate:(id)arg1 ;
-(void)setDelegate:(id<HKCalendarWeekViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)description;
-(id<HKCalendarWeekViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(Class)cellClass;
-(double)preferredHeight;
-(id)initWithDateCache:(id)arg1 ;
-(Class)monthTitleClass;
-(void)setMonthTitleView:(UIView*<HKCalendarMonthTitleFormatting>)arg1 ;
-(UIView*<HKCalendarMonthTitleFormatting>)monthTitleView;
-(void)didUpdateCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)containsMonthTitle;
-(void)setMonthWeekStart:(NSDate *)arg1 ;
-(double)dateTopMargin;
-(double)dateDiameter;
-(double)dateBottomMargin;
-(double)monthTitleTopMargin;
-(double)_widthForTopBorderLine;
-(id)currentWeekStartDate;
-(id)_getDayCellWithTouches:(id)arg1 ;
-(void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(BOOL)arg3 ;
-(void)selectedCalendarDay:(id)arg1 ;
-(void)reloadCells;
-(CGRect)frameForDayCell:(id)arg1 ;
-(id)previousWeekStartDate;
-(id)nextWeekStartDate;
-(CALayer *)topBorderLine;
-(void)setTopBorderLine:(CALayer *)arg1 ;
-(void)setDateTopMargin:(double)arg1 ;
-(void)setDateBottomMargin:(double)arg1 ;
-(void)setMonthTitleTopMargin:(double)arg1 ;
-(void)setDateDiameter:(double)arg1 ;
-(NSDate *)monthWeekStart;
-(NSArray *)dayCells;
-(long long)firstDayOfMonthCellIndex;
-(void)setFirstDayOfMonthCellIndex:(long long)arg1 ;
-(long long)pressedDayOfWeek;
-(void)setPressedDayOfWeek:(long long)arg1 ;
-(HKCalendarDayCell *)pressedDayCell;
-(void)setPressedDayCell:(HKCalendarDayCell *)arg1 ;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
@end

