/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>

@class UIColor, UIImageView, _UINavigationControllerPalette, UINavigationBar, _UIBackdropView, UIView;

@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {

	UIColor* _barTintColor;
	UIImageView* _shadowView;
	_UINavigationControllerPalette* _palette;
	UINavigationBar* _bar;
	_UIBackdropView* _adaptiveBackdrop;
	struct {
		unsigned barTranslucence : 3;
		unsigned barStyle : 3;
		unsigned paletteWantsAdaptiveBackdrop : 1;
	}  _navbarFlags;

}

@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (setter=_setShadowView:,getter=_shadowView,nonatomic,retain) UIView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL paletteWantsAdaptiveBackdrop; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didMoveToSuperview;
-(id)_shadowView;
-(id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(UIColor *)barTintColor;
-(void)_setShadowView:(id)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2 ;
-(void)updateBackgroundView;
-(void)_syncWithBarStyles;
-(BOOL)paletteWantsAdaptiveBackdrop;
-(void)setPaletteWantsAdaptiveBackdrop:(BOOL)arg1 ;
@end

