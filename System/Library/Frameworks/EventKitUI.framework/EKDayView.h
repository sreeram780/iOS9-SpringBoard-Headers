/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EKDayAllDayViewDelegate.h>
#import <libobjc.A.dylib/EKDayViewContentDelegate.h>
#import <libobjc.A.dylib/EKDayTimeViewDelegate.h>

@protocol EKDayViewDelegate, EKDayViewDataSource;
@class UIImageView, UIView, NSArray, NSDate, EKDayAllDayView, EKDayViewContent, EKDayTimeView, EKDayViewSpringLoadedScrollAnimation, UIScrollView, NSTimer, UIPinchGestureRecognizer, UITapGestureRecognizer, NSDateComponents, NSCalendar, EKEvent, UIColor, NSString;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {

	long long _orientation;
	double _dayStart;
	double _dayEnd;
	double _nextDSTTransition;
	BOOL _scrollbarShowsInside;
	BOOL _scrollingToOccurrence;
	BOOL _settingDate;
	BOOL _userScrolling;
	BOOL _scrollToOccurrencesOnNextReload;
	UIImageView* _topVerticalGridExtension;
	UIImageView* _bottomVerticalGridExtension;
	UIView* _bottomLine;
	NSArray* _existingTimedOcurrences;
	NSDate* _lastInspectedOccurrenceOnDate;
	CGSize _scrolledToFirstVisibleSecondForSize;
	EKDayAllDayView* _allDayView;
	EKDayViewContent* _dayContent;
	EKDayTimeView* _timeView;
	EKDayViewSpringLoadedScrollAnimation* _scrollAnimation;
	UIScrollView* _scroller;
	NSTimer* _timeMarkerTimer;
	CGPoint _lastPinchDistance;
	CGPoint _lastPinchPoint1;
	BOOL _pinching;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	BOOL _allowsOccurrenceSelection;
	BOOL _alignsMidnightToTop;
	BOOL _isNowVisible;
	BOOL _scrollEventsInToViewIgnoresVisibility;
	BOOL _shouldEverShowTimeIndicators;
	BOOL _usesVibrantGridDrawing;
	BOOL _allowPinchingHourHeights;
	int _outlineStyle;
	id<EKDayViewDelegate> _delegate;
	id<EKDayViewDataSource> _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	double _verticalContentInset;
	double _todayScrollSecondBuffer;
	double _scrollAnimationDurationOverride;
	double _hourScale;
	double _topContentInset;
	double _bottomContentInset;

}

@property (assign,nonatomic,__weak) id<EKDayViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                            //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double dayStart;                                       //@synthesize dayStart=_dayStart - In the implementation block
@property (nonatomic,readonly) double dayEnd;                                         //@synthesize dayEnd=_dayEnd - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                          //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL alignsMidnightToTop;                                //@synthesize alignsMidnightToTop=_alignsMidnightToTop - In the implementation block
@property (nonatomic,readonly) double scrollBarOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence; 
@property (nonatomic,readonly) EKDayAllDayView * allDayView; 
@property (nonatomic,readonly) EKDayViewContent * dayContent; 
@property (nonatomic,readonly) double leftContentInset; 
@property (assign,nonatomic) double verticalContentInset;                             //@synthesize verticalContentInset=_verticalContentInset - In the implementation block
@property (assign,nonatomic) BOOL isNowVisible;                                       //@synthesize isNowVisible=_isNowVisible - In the implementation block
@property (assign,nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;              //@synthesize scrollEventsInToViewIgnoresVisibility=_scrollEventsInToViewIgnoresVisibility - In the implementation block
@property (assign,nonatomic) BOOL shouldEverShowTimeIndicators;                       //@synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators - In the implementation block
@property (assign,nonatomic) BOOL animatesTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLine; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLabel; 
@property (assign,nonatomic) BOOL eventsFillGrid; 
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL allowsScrolling; 
@property (assign,nonatomic) int outlineStyle;                                        //@synthesize outlineStyle=_outlineStyle - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle; 
@property (assign,nonatomic) NSRange hoursToRender; 
@property (nonatomic,retain) UIColor * timeViewTextColor; 
@property (nonatomic,retain) UIColor * gridLineColor; 
@property (nonatomic,retain) UIColor * occurrenceTitleColor; 
@property (nonatomic,retain) UIColor * occurrenceTimeColor; 
@property (nonatomic,retain) UIColor * occurrenceLocationColor; 
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor; 
@property (assign,nonatomic) BOOL usesVibrantGridDrawing;                             //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (assign,nonatomic) BOOL allowPinchingHourHeights;                           //@synthesize allowPinchingHourHeights=_allowPinchingHourHeights - In the implementation block
@property (assign,nonatomic) double todayScrollSecondBuffer;                          //@synthesize todayScrollSecondBuffer=_todayScrollSecondBuffer - In the implementation block
@property (assign,nonatomic) double scrollAnimationDurationOverride;                  //@synthesize scrollAnimationDurationOverride=_scrollAnimationDurationOverride - In the implementation block
@property (assign,nonatomic) double hourScale;                                        //@synthesize hourScale=_hourScale - In the implementation block
@property (nonatomic,readonly) double scrollOffset; 
@property (assign,nonatomic) CGPoint normalizedContentOffset; 
@property (assign,nonatomic) double topContentInset;                                  //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                               //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(NSArray *)occurrenceViews;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTimeColor;
-(UIColor *)occurrenceLocationColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(BOOL)eventsFillGrid;
-(EKEvent *)dimmedOccurrence;
-(void)setDisplayDate:(NSDateComponents *)arg1 ;
-(void)_localeChanged;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6 ;
-(void)setTodayScrollSecondBuffer:(double)arg1 ;
-(void)setShouldEverShowTimeIndicators:(BOOL)arg1 ;
-(void)setHourScale:(double)arg1 ;
-(void)setAnimatesTimeMarker:(BOOL)arg1 ;
-(EKDayViewContent *)dayContent;
-(void)setScrollAnimationDurationOverride:(double)arg1 ;
-(void)setVerticalContentInset:(double)arg1 ;
-(void)setAlignsMidnightToTop:(BOOL)arg1 ;
-(void)bringEventToFront:(id)arg1 ;
-(double)dayStart;
-(void)setHoursToRender:(NSRange)arg1 ;
-(BOOL)eventOccursOnThisDay:(id)arg1 ;
-(void)scrollToDate:(id)arg1 offset:(double)arg2 animated:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(NSRange)hoursToRender;
-(double)scaledHourHeight;
-(CGRect)_scrollerRect;
-(void)_dayViewPinched:(id)arg1 ;
-(void)_doubleTap:(id)arg1 ;
-(void)_timeViewTapped:(id)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)_createAllDayView;
-(void)_adjustForDateOrCalendarChange;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(BOOL)showsTimeLine;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(double)scrollBarOffset;
-(double)_verticalOffset;
-(void)updateMarkerPosition;
-(void)_disposeAllDayView;
-(void)stopScrolling;
-(void)setShowsTimeLine:(BOOL)arg1 ;
-(BOOL)animatesTimeMarker;
-(BOOL)showsTimeMarker;
-(BOOL)_isTimeMarkerFullyUnobstructed;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(int)_secondAtPosition:(double)arg1 ;
-(int)firstVisibleSecond;
-(double)_positionOfSecond:(int)arg1 ;
-(void)firstVisibleSecondChanged;
-(void)setUsesVibrantGridDrawing:(BOOL)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(void)_scrollToSecond:(int)arg1 offset:(double)arg2 animated:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(double)todayScrollSecondBuffer;
-(double)scrollAnimationDurationOverride;
-(void)_finishedScrollToSecond;
-(BOOL)alignsMidnightToTop;
-(void)_clearVerticalGridExtensionImageCache;
-(id)_generateVerticalGridExtensionImage;
-(BOOL)scrollEventsInToViewIgnoresVisibility;
-(void)setScrollEventsInToViewIgnoresVisibility:(BOOL)arg1 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)maximumHourScale;
-(double)minimumHourScale;
-(CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(BOOL)_showingAllDaySection;
-(double)_adjustSecondForwardForDSTHole:(double)arg1 ;
-(double)_adjustSecondBackwardForDSTHole:(double)arg1 ;
-(double)highlightedHour;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)allDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg1 ;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2 ;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1 ;
-(void)adjustForSignificantTimeChange;
-(void)setShowsTimeLabel:(BOOL)arg1 ;
-(BOOL)showsTimeLabel;
-(BOOL)isNowVisible;
-(void)setOutlineStyle:(int)arg1 ;
-(BOOL)allowsScrolling;
-(UIColor *)timeViewTextColor;
-(void)setTimeViewTextColor:(UIColor *)arg1 ;
-(UIColor *)gridLineColor;
-(void)setGridLineColor:(UIColor *)arg1 ;
-(void)setAllowPinchingHourHeights:(BOOL)arg1 ;
-(EKDayAllDayView *)allDayView;
-(double)scrollOffset;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)scrollToNowAnimated:(BOOL)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)dayContentView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)resetLastSelectedOccurrencePoint;
-(double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 ;
-(CGRect)rectForEvent:(id)arg1 ;
-(BOOL)containsOccurrences;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2 ;
-(void)relayoutExistingTimedOccurrences;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(BOOL)scrollTowardPoint:(CGPoint)arg1 ;
-(double)allDayRegionHeight;
-(void)highlightHour:(double)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
-(NSDateComponents *)displayDate;
-(double)dayEnd;
-(double)verticalContentInset;
-(void)setIsNowVisible:(BOOL)arg1 ;
-(BOOL)shouldEverShowTimeIndicators;
-(int)outlineStyle;
-(BOOL)usesVibrantGridDrawing;
-(BOOL)allowPinchingHourHeights;
-(double)hourScale;
-(double)leftContentInset;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDataSource:(id<EKDayViewDataSource>)arg1 ;
-(void)setDelegate:(id<EKDayViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<EKDayViewDataSource>)dataSource;
-(id<EKDayViewDelegate>)delegate;
-(void)setOrientation:(long long)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAllowsScrolling:(BOOL)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
@end

