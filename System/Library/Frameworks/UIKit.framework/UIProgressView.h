/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, UIView, UIImageView, CAShapeLayer, NSArray, UIVisualEffectView, NSProgress, NSObservation, UIImage;

@interface UIProgressView : UIView <NSCoding> {

	long long _progressViewStyle;
	float _progress;
	long long _barStyle;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;
	UIView* _contentView;
	UIImageView* _trackView;
	UIImageView* _progressView;
	CAShapeLayer* _maskLayer;
	BOOL _isAnimating;
	NSArray* _trackColors;
	NSArray* _progressColors;
	UIVisualEffectView* _effectView;
	NSProgress* _observedProgress;
	NSObservation* _progressObservation;
	UIImage* _trackImage;
	UIImage* _progressImage;

}

@property (assign,nonatomic) long long progressViewStyle;                //@synthesize progressViewStyle=_progressViewStyle - In the implementation block
@property (assign,nonatomic) float progress;                             //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * progressImage;                    //@synthesize progressImage=_progressImage - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                       //@synthesize trackImage=_trackImage - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;              //@synthesize observedProgress=_observedProgress - In the implementation block
+(CGSize)defaultSize;
+(id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned long long)arg3 ;
+(id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2 ;
+(unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2 ;
+(void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3 ;
+(id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2 ;
+(id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(id)_effectiveContentView;
-(void)_updateImages;
-(void)_setProgress:(float)arg1 ;
-(void)_setupProgressViewCommon;
-(void)setProgressViewStyle:(long long)arg1 ;
-(BOOL)_shouldTintTrack;
-(BOOL)_shouldTintProgress;
-(UIColor *)trackTintColor;
-(id)_defaultTrackColorForCurrentStyle;
-(unsigned long long)_roundedCornersForTrackForCurrentStyle;
-(id)_appropriateTrackImage;
-(UIColor *)progressTintColor;
-(unsigned long long)_roundedCornersForProgressForCurrentStyle;
-(id)_appropriateProgressImage;
-(NSProgress *)observedProgress;
-(void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 ;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(id)initWithProgressViewStyle:(long long)arg1 ;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(id)_progressColor;
-(void)_setProgressColor:(id)arg1 ;
-(void)setProgressImage:(UIImage *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(void)setTrackImage:(UIImage *)arg1 ;
-(long long)progressViewStyle;
-(float)progress;
-(UIImage *)trackImage;
-(UIImage *)progressImage;
@end

