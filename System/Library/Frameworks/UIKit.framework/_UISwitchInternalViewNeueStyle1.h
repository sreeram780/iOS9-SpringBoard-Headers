/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISwitchInternalViewProtocol.h>

@class UIView, UIImageView, UIColor, UIImage, NSString;

@interface _UISwitchInternalViewNeueStyle1 : UIView <_UISwitchInternalViewProtocol> {

	UIView* _switchWellView;
	UIView* _leftSwitchWellView;
	UIView* _switchWellContainerView;
	UIView* _leftSwitchWellContainerView;
	UIView* _switchWellImageViewContainer;
	UIImageView* _switchWellOffImageView;
	UIImageView* _switchWellOnImageView;
	UIImageView* _knobView;
	UIColor* _onTintColor;
	UIColor* _tintColor;
	BOOL _on;
	BOOL _pressed;
	BOOL _isAlwaysAccessible;
	BOOL _useAlternateColor;
	BOOL _pressedIsHandledByGestureRecognizer;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;

}

@property (nonatomic,retain) UIColor * onTintColor;                                 //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (assign,nonatomic) BOOL on;                                               //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) BOOL pressedIsHandledByGestureRecognizer;              //@synthesize pressedIsHandledByGestureRecognizer=_pressedIsHandledByGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isAlwaysAccessible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * onImage;                                     //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                    //@synthesize offImage=_offImage - In the implementation block
@property (assign,nonatomic) BOOL useAlternateColor;                                //@synthesize useAlternateColor=_useAlternateColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIColor *)thumbTintColor;
-(void)_setPressed:(BOOL)arg1 ;
-(void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(id)_defaultOnTintColor;
-(void)_cleanUpAfterAnimating;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 withDuration:(double)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5 ;
-(void)_setProgress:(double)arg1 ;
-(void)_prepareForInteraction;
-(void)setSendAction:(BOOL)arg1 ;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(UIColor *)onTintColor;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(UIImage *)onImage;
-(void)setOnImage:(UIImage *)arg1 ;
-(UIImage *)offImage;
-(void)setOffImage:(UIImage *)arg1 ;
-(BOOL)on;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)useAlternateColor;
-(void)setUseAlternateColor:(BOOL)arg1 ;
-(void)_invalidateControl;
-(void)_accessibilitySettingChanged;
-(void)_invalidateWell;
-(void)_invalidateKnob;
-(void)_invalidateOnOffImages;
-(double)_wellBorderWidthPressed:(BOOL)arg1 on:(BOOL)arg2 ;
-(void)_orderSubviews;
-(void)_transitionWellViewToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionWellViewToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionKnobToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_effectiveThumbImage;
-(void)_transitionKnobToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionKnobToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_effectiveOffImage;
-(id)_effectiveOnImage;
-(CGPoint)_offImagePosition;
-(CGPoint)_onImagePosition;
-(id)_effectiveOffImageTintColor;
-(id)_effectiveOnImageTintColor;
-(void)_transitionImagesToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CGRect)_knobBoundsPressed:(BOOL)arg1 ;
-(CGPoint)_knobPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 forBounds:(CGRect)arg3 ;
-(CGRect)_switchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_switchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGRect)_leftSwitchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_leftSwitchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_switchWellPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(BOOL)arg4 ;
-(id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(CGColorRef)_wellColorOn:(BOOL)arg1 ;
-(id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2 ;
-(id)_effectiveOnTintColor;
-(id)_effectiveTintColor;
-(BOOL)_shouldDrawAccessibly;
-(id)_accessibleOnImage;
-(id)_accessibleOffImage;
-(BOOL)_shouldUseLightTintOverColor:(id)arg1 ;
-(id)_maskLayerForImageViews;
-(CGRect)_frameForLeftAlignmentOfView:(id)arg1 ;
-(id)_labelOpacityAnimation;
-(id)_effectiveOffTextColor;
-(BOOL)isAlwaysAccessible;
-(void)setIsAlwaysAccessible:(BOOL)arg1 ;
-(void)_setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)pressedIsHandledByGestureRecognizer;
-(void)setPressedIsHandledByGestureRecognizer:(BOOL)arg1 ;
@end

