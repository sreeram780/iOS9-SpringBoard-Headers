/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationItemView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _UIBarButtonItemAppearanceStorage, UIImageView, UIColor, NSString;

@interface UINavigationItemButtonView : UINavigationItemView <UIGestureRecognizerDelegate> {

	long long _style;
	BOOL _pressed;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	BOOL _customBackgroundImageChangedToOrFromNil;
	UIImageView* _backgroundImageView;
	UIImageView* _imageView;
	BOOL _wantsBlendModeForAccessibilityBackgrounds;
	unsigned long long _abbreviatedTitleIndex;
	UIColor* _accessibilityBackgroundTintColor;

}

@property (assign,setter=_setAbbreviatedTitleIndex:,nonatomic) unsigned long long _abbreviatedTitleIndex;                                        //@synthesize abbreviatedTitleIndex=_abbreviatedTitleIndex - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) BOOL _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
@property (setter=_setAccessibilityBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityBackgroundTintColor;                           //@synthesize accessibilityBackgroundTintColor=_accessibilityBackgroundTintColor - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)title;
-(UIEdgeInsets)alignmentRectInsets;
-(id)image;
-(void)_focusedViewDidChange:(id)arg1 ;
-(BOOL)_canDrawContent;
-(BOOL)canBecomeFocused;
-(void)_focusedViewWillChange:(id)arg1 ;
-(Class)_appearanceGuideClass;
-(void)tintColorDidChange;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(id)_scriptingInfo;
-(unsigned long long)_abbreviatedTitleIndex;
-(void)_setAbbreviatedTitleIndex:(unsigned long long)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(id)_appearanceStorage;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(BOOL)_wantsAccessibilityButtonShapes;
-(id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)customBackgroundImageChangedToOrFromNil;
-(BOOL)_suppressesBackIndicatorView;
-(void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(BOOL)pressed;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasCustomBackgroundImage;
-(id)backgroundImageView;
-(CGSize)imageSize;
-(id)_defaultFont;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(UIColor *)_accessibilityBackgroundTintColor;
-(UIColor *)_tintColor;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(double)_titleYAdjustmentCustomization;
-(void)_resetRenderingModesForAccessibilityBackgrounds;
-(id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1 ;
-(void)_drawBackground_legacy;
-(void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_installBackSelectGestureRecognizer;
-(void)_uninstallBackSelectGestureRecognizer;
-(void)_backSelectGestureChanged:(id)arg1 ;
-(UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
@end

