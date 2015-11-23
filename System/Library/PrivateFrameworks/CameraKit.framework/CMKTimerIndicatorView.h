/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, CMKAnimationDelegate;

@interface CMKTimerIndicatorView : UIView {

	BOOL __performingStyleAnimation;
	long long _style;
	UIView* __dimmingView;
	UILabel* __countdownLabel;
	long long __startingTicks;
	long long __remainingTicks;
	long long __labelOrientation;
	CMKAnimationDelegate* __animationDelegate;
	long long __deferredLabelOrientation;

}

@property (assign,nonatomic) long long style;                                                                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                                                                                             //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (nonatomic,readonly) UILabel * _countdownLabel;                                                                                         //@synthesize _countdownLabel=__countdownLabel - In the implementation block
@property (nonatomic,readonly) long long _startingTicks;                                                                                          //@synthesize _startingTicks=__startingTicks - In the implementation block
@property (nonatomic,readonly) long long _remainingTicks;                                                                                         //@synthesize _remainingTicks=__remainingTicks - In the implementation block
@property (assign,setter=_setLabelOrientation:,nonatomic) long long _labelOrientation;                                                            //@synthesize _labelOrientation=__labelOrientation - In the implementation block
@property (nonatomic,readonly) CMKAnimationDelegate * _animationDelegate;                                                                         //@synthesize _animationDelegate=__animationDelegate - In the implementation block
@property (assign,setter=_setPerformingStyleAnimation:,getter=_isPerformingStyleAnimation,nonatomic) BOOL _performingStyleAnimation;              //@synthesize _performingStyleAnimation=__performingStyleAnimation - In the implementation block
@property (assign,setter=_setDeferredOrientation:,nonatomic) long long _deferredLabelOrientation;                                                 //@synthesize _deferredLabelOrientation=__deferredLabelOrientation - In the implementation block
-(void)decrement;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFont:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)font;
-(UIView *)_dimmingView;
-(void)cam_rotateWithDeviceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_commonCMKTimerIndicatorViewInitialization;
-(void)stopCountdown;
-(void)resetWithNumberOfTicks:(long long)arg1 ;
-(void)startCountdownWithAnimationDelegate:(id)arg1 ;
-(id)_fontForStyle:(long long)arg1 ;
-(void)_updateCountdownLabelWithTicksRemaining;
-(void)_layoutCountdownLabelForStyle:(long long)arg1 ;
-(CGRect)_landscapeSwapBoundsCoordinates:(CGRect)arg1 ;
-(BOOL)_isPerformingStyleAnimation;
-(void)_layoutCountdownLabelForSmallStyle;
-(void)_layoutCountdownLabelForLargeStyle;
-(void)_updateFromChangeToStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setPerformingStyleAnimation:(BOOL)arg1 ;
-(void)_transitionDimmingViewFromStyle:(long long)arg1 ;
-(long long)_deferredLabelOrientation;
-(void)_handleOrientationChange:(long long)arg1 ;
-(void)_setDeferredOrientation:(long long)arg1 ;
-(void)_addDecrementAnimationForTick:(long long)arg1 ;
-(void)_addDimmingAnimationForTick:(long long)arg1 ;
-(id)_decrementAnimationForTick:(long long)arg1 ;
-(id)_dimmingAnimationForTick:(long long)arg1 ;
-(id)_finalDimmingAnimation;
-(void)_setLabelOrientation:(long long)arg1 ;
-(UILabel *)_countdownLabel;
-(long long)_startingTicks;
-(long long)_remainingTicks;
-(long long)_labelOrientation;
-(CMKAnimationDelegate *)_animationDelegate;
@end

