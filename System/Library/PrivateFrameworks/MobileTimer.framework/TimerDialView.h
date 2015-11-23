/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIFont;

@interface TimerDialView : UIView {

	double _currentDuration;
	BOOL _running;
	double _remainingTime;
	double _fireTime;
	double _currentTime;
	CFNumberFormatterRef _formatter;
	NSMutableArray* _graduatedSections;
	unsigned long long _graduatedSectionCount;
	double _graduatedSectionWidth;
	NSMutableArray* _graduatedSectionLabels;
	NSMutableArray* _graduatedSectionValues;
	double _tickHorizontalSpacing;
	unsigned long long _minorTicksPerSection;
	double _majorTickHeight;
	double _minorTickHeight;
	UIFont* _labelFont;

}

@property (assign,nonatomic) double tickHorizontalSpacing;                         //@synthesize tickHorizontalSpacing=_tickHorizontalSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long minorTicksPerSection;              //@synthesize minorTicksPerSection=_minorTicksPerSection - In the implementation block
@property (assign,nonatomic) double majorTickHeight;                               //@synthesize majorTickHeight=_majorTickHeight - In the implementation block
@property (assign,nonatomic) double minorTickHeight;                               //@synthesize minorTickHeight=_minorTickHeight - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                   //@synthesize labelFont=_labelFont - In the implementation block
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)makeGraduatedSurfaceAtLeastWidth:(double)arg1 ;
-(void)setupWithDuration:(double)arg1 ;
-(double)pointsPerMinute;
-(double)updatedDurationForPointOffset:(double)arg1 ;
-(id)graduatedSection;
-(void)setFireTime:(double)arg1 withTime:(double)arg2 ;
-(BOOL)updateDisplayWithTime:(double)arg1 ;
-(void)markStaleWithTime:(double)arg1 ;
-(double)tickHorizontalSpacing;
-(void)setTickHorizontalSpacing:(double)arg1 ;
-(unsigned long long)minorTicksPerSection;
-(void)setMinorTicksPerSection:(unsigned long long)arg1 ;
-(double)majorTickHeight;
-(void)setMajorTickHeight:(double)arg1 ;
-(double)minorTickHeight;
-(void)setMinorTickHeight:(double)arg1 ;
@end

