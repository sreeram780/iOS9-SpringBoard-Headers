/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <libobjc.A.dylib/NCNotificationDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSDate, NSTimer, NSString;

@interface NCDefaultDateLabel : UILabel <NCNotificationDateLabel> {

	NSDate* _timeZoneRelativeStartDate;
	NSDate* _timeZoneRelativeEndDate;
	BOOL _allDay;
	BOOL _isTimestamp;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	int _labelType;
	id<SBDateLabelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp;                              //@synthesize isTimestamp=_isTimestamp - In the implementation block
+(id)_currentCalendar;
-(void)_invalidateTimer;
-(BOOL)isAllDay;
-(void)setDelegate:(id<SBDateLabelDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)update;
-(void)_updateTimerFired:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(void)_configureTimer;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)stopCoalescingUpdates;
-(void)_forceUpdate;
-(void)_resetEffectiveAllDayState:(BOOL)arg1 ;
-(id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(void)setTimeZoneRelativeEndDate:(id)arg1 ;
-(BOOL)isDateWithinEffectiveAllDayRange:(id)arg1 ;
-(id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(BOOL)arg3 sameDayDates:(BOOL)arg4 eventOngoing:(BOOL)arg5 withCurrentDate:(id)arg6 forStartLabel:(BOOL)arg7 ;
-(id)constructLabelString;
-(void)updateTextIfNecessary:(BOOL)arg1 ;
-(void)_updateEffectiveAllDayTimes;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(BOOL)isEffectiveAllDay;
-(void)updateTextIfNecessary;
@end

