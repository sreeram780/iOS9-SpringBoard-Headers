/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FUChartSeries.h>

@class NSDate, NSArray;

@interface FUUniformBarSeries : FUChartSeries {

	NSDate* _minDate;
	double _barWidth;
	double _barSpacing;
	double _roundedCornerRadius;
	CGGradientRef _barGradient;
	NSArray* _plotPoints;

}

@property (assign,nonatomic) NSDate * minDate;                        //@synthesize minDate=_minDate - In the implementation block
@property (assign,nonatomic) double barWidth;                         //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double barSpacing;                       //@synthesize barSpacing=_barSpacing - In the implementation block
@property (assign,nonatomic) double roundedCornerRadius;              //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (assign,nonatomic) CGGradientRef barGradient;               //@synthesize barGradient=_barGradient - In the implementation block
@property (nonatomic,retain) NSArray * plotPoints;                    //@synthesize plotPoints=_plotPoints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setMinDate:(NSDate *)arg1 ;
-(void)setBarWidth:(double)arg1 ;
-(void)setBarSpacing:(double)arg1 ;
-(void)setRoundedCornerRadius:(double)arg1 ;
-(void)setBarGradient:(CGGradientRef)arg1 ;
-(double)_getXValueForPointFromChartPoint:(id)arg1 ;
-(double)_getYValueForPointFromChartPoint:(id)arg1 ;
-(double)barWidth;
-(double)barSpacing;
-(double)roundedCornerRadius;
-(CGGradientRef)barGradient;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
-(NSDate *)minDate;
@end

