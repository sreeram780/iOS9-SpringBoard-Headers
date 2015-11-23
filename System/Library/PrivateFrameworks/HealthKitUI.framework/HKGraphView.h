/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HKGraphRenderDelegate.h>
#import <libobjc.A.dylib/HKSeriesDelegate.h>

@protocol HKGraphRenderer, HKGraphViewDelegate;
@class NSMutableDictionary, NSMutableArray, _HKGraphViewSelectionContext, HKPropertyAnimationApplier, HKValueRange, UIImage, UIView, UIScrollView, HKDateAxis, UIColor, HKGraphViewSelectionStyle, NSArray, NSString;

@interface HKGraphView : UIView <UIScrollViewDelegate, HKGraphRenderDelegate, HKSeriesDelegate> {

	NSMutableDictionary* _zoomToSeriesMapping;
	NSMutableArray* _currentSeries;
	BOOL _haveRescaledSinceRender;
	BOOL _needsUpdateGraphViewConfiguration;
	_HKGraphViewSelectionContext* _selectionContext;
	HKPropertyAnimationApplier* _animationApplier;
	BOOL _shouldInformDelegateOfUpdates;
	BOOL _shouldListenToScrollViewDelegate;
	HKValueRange* _chartableDateRange;
	UIImage* _topFeatheringImage;
	UIImage* _rightFeatheringImage;
	UIImage* _bottomFeatheringImage;
	UIImage* _leftFeatheringImage;
	UIView*<HKGraphRenderer> _renderView;
	UIScrollView* _scrollView;
	UIView* _scrollViewContent;
	id<HKGraphViewDelegate> _delegate;
	HKDateAxis* _xAxis;
	UIColor* _outlineColor;
	UIColor* _topMarginColor;
	unsigned long long _outlineOptions;
	unsigned long long _featheringOptions;
	HKGraphViewSelectionStyle* _selectionStyle;
	long long _xAxisDateZoom;
	HKValueRange* _axisRange;
	HKValueRange* _visibleDateRange;
	long long _minimumDateZoom;
	long long _maximumDateZoom;
	UIEdgeInsets _axisInset;

}

@property (nonatomic,readonly) NSArray * allSeries; 
@property (assign,nonatomic,__weak) id<HKGraphViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) HKDateAxis * xAxis;                                        //@synthesize xAxis=_xAxis - In the implementation block
@property (assign,nonatomic) UIEdgeInsets axisInset;                                  //@synthesize axisInset=_axisInset - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,copy) UIColor * outlineColor;                                    //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,copy) UIColor * topMarginColor;                                  //@synthesize topMarginColor=_topMarginColor - In the implementation block
@property (assign,nonatomic) unsigned long long outlineOptions;                       //@synthesize outlineOptions=_outlineOptions - In the implementation block
@property (assign,nonatomic) unsigned long long featheringOptions;                    //@synthesize featheringOptions=_featheringOptions - In the implementation block
@property (nonatomic,retain) HKGraphViewSelectionStyle * selectionStyle;              //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,readonly) long long xAxisDateZoom;                               //@synthesize xAxisDateZoom=_xAxisDateZoom - In the implementation block
@property (nonatomic,retain) HKValueRange * axisRange;                                //@synthesize axisRange=_axisRange - In the implementation block
@property (nonatomic,retain) HKValueRange * chartableDateRange; 
@property (nonatomic,retain) HKValueRange * visibleDateRange;                         //@synthesize visibleDateRange=_visibleDateRange - In the implementation block
@property (assign,nonatomic) long long minimumDateZoom;                               //@synthesize minimumDateZoom=_minimumDateZoom - In the implementation block
@property (assign,nonatomic) long long maximumDateZoom;                               //@synthesize maximumDateZoom=_maximumDateZoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<HKGraphViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id<HKGraphViewDelegate>)delegate;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)setSelectionStyle:(HKGraphViewSelectionStyle *)arg1 ;
-(HKGraphViewSelectionStyle *)selectionStyle;
-(void)_updateScene;
-(void)setRenderView:(id)arg1 ;
-(HKValueRange *)chartableDateRange;
-(void)seriesDidInvalidatePaths:(id)arg1 ;
-(void)_loadScrollView;
-(void)_loadFeatheringImages;
-(id)_defaultXAxisValueRange;
-(CGRect)_axisRect;
-(void)setChartableDateRange:(HKValueRange *)arg1 ;
-(void)_updateAxisDateZoomScaleValueRange;
-(void)_setNeedsUpdateGraphViewConfiguration;
-(void)_updateGraphViewConfigurationIfNecessary;
-(HKValueRange *)axisRange;
-(id)_mutableAllSeries;
-(void)_addPointSelectionRecognizerToView:(id)arg1 ;
-(void)_addTapGestureRecognizerToView:(id)arg1 ;
-(void)_reloadViewScope;
-(void)_clearRenderViewIfNecessary;
-(void)_setVisibleXAxisRange:(HKRange)arg1 animated:(BOOL)arg2 ;
-(void)_resumeChartInteraction;
-(void)_pauseChartInteraction;
-(double)_timeIntervalFromDateRange:(id)arg1 ;
-(void)_updateZoomForParameters;
-(void)_autoScaleXAxis;
-(void)_fitVisibleDateRangeToAxisRange;
-(void)_scrollToDateRange:(id)arg1 ;
-(void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(/*^block*/id)arg1 ;
-(NSArray *)allSeries;
-(CGAffineTransform)_xAxisCoordinateTransform;
-(id)_visibleYAxis;
-(void)_autoScaleYAxisIfNecessary;
-(void)_renderGridlines;
-(void)_renderSelectionLineWithContext:(CGContextRef)arg1 ;
-(void)_renderSeriesWithContext:(CGContextRef)arg1 secondaryRenderContext:(id)arg2 ;
-(void)_renderAxisLabels;
-(void)_renderDividersAndFeatheringWithContext:(CGContextRef)arg1 ;
-(void)_updateDateZoomIfNecessary;
-(id)_graphSeriesForZoom:(long long)arg1 ;
-(void)_notifyDelegateOfVisibleDateRange:(id)arg1 ;
-(void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(double)_maxTimeThreshold;
-(void)_updateGraphViewConfiguration;
-(void)_tapGestureRecognizerFired:(id)arg1 ;
-(void)_scrollToNowAnimated:(BOOL)arg1 ;
-(long long)_numSelectionAreas;
-(long long)_currentSelectionState;
-(void)_enumerateSeriesSelectionRegionsWithBlock:(/*^block*/id)arg1 ;
-(void)_pointSelectionRecognizerDidUpdate:(id)arg1 ;
-(void)_pointSelectionRecognizerDidBegin:(id)arg1 ;
-(void)_pointSelectionGestureRecognizerDidMove:(id)arg1 ;
-(void)_pointSelectionGestureRecognizerDidFinish:(id)arg1 ;
-(id)_closestSeriesToPoint:(CGPoint)arg1 allSeries:(id)arg2 ;
-(void)_notifyDidBeginSelection;
-(id)_selectedRegionForTouchPoint:(CGPoint)arg1 ;
-(void)_updateSelectionContextStateWithTouchPoint:(CGPoint)arg1 ;
-(id)_dateForXAxisLocation:(double)arg1 ;
-(void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 ;
-(void)_moveSeriesToFront:(id)arg1 ;
-(void)_notifyDidUpdateSelectionWithPointContext:(id)arg1 ;
-(void)_notifyDidEndSelection;
-(void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(CGContextRef)arg2 ;
-(BOOL)stillAnimating:(id)arg1 ;
-(void)setXAxis:(HKDateAxis *)arg1 ;
-(void)setAxisRange:(HKValueRange *)arg1 ;
-(void)setNeedsReloadSeries;
-(void)setXAxisDateZoom:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAxisInset:(UIEdgeInsets)arg1 ;
-(void)setVisibleDateRange:(HKValueRange *)arg1 ;
-(void)forceYAxisAutoScaleAnimated:(BOOL)arg1 ;
-(double)_selectionAreaHeight;
-(HKDateAxis *)xAxis;
-(UIEdgeInsets)axisInset;
-(UIColor *)topMarginColor;
-(void)setTopMarginColor:(UIColor *)arg1 ;
-(unsigned long long)outlineOptions;
-(void)setOutlineOptions:(unsigned long long)arg1 ;
-(unsigned long long)featheringOptions;
-(void)setFeatheringOptions:(unsigned long long)arg1 ;
-(long long)xAxisDateZoom;
-(HKValueRange *)visibleDateRange;
-(long long)minimumDateZoom;
-(void)setMinimumDateZoom:(long long)arg1 ;
-(long long)maximumDateZoom;
-(void)setMaximumDateZoom:(long long)arg1 ;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
@end

