/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIShadowedView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>
#import <UIKit/_UIBarPositioningInternal.h>
#import <UIKit/UIBarPositioning.h>

@protocol UIToolbarDelegate;
@class NSArray, UIColor, _UIBackdropView, UIImageView, UIView, NSString;

@interface UIToolbar : UIView <_UIShadowedView, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, UIBarPositioning> {

	id<UIToolbarDelegate> _delegate;
	NSArray* _items;
	UIColor* _barTintColor;
	struct {
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned isLocked : 1;
		unsigned hasCustomBackgroundView : 1;
	}  _toolbarFlags;
	double _extraEdgeInsets;
	id _appearanceStorage;
	_UIBackdropView* _adaptiveBackdrop;
	UIImageView* _backgroundView;
	UIView* _shadowView;
	BOOL _centerTextButtons;
	BOOL __wantsLetterpressContent;
	long long _barPosition;
	NSString* _backdropViewLayerGroupName;

}

@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,copy) NSArray * items; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                                                                       //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) id<UIToolbarDelegate> delegate; 
@property (assign,nonatomic) BOOL centerTextButtons;                                                                                                       //@synthesize centerTextButtons=_centerTextButtons - In the implementation block
@property (getter=isMinibar,nonatomic,readonly) BOOL minibar; 
@property (setter=_setBackgroundView:,nonatomic,retain) UIImageView * _backgroundView; 
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow; 
@property (assign,setter=_setWantsLetterpressContent:,nonatomic) BOOL _wantsLetterpressContent;                                                            //@synthesize _wantsLetterpressContent=__wantsLetterpressContent - In the implementation block
@property (assign,setter=_setLocked:,getter=_isLocked,nonatomic) BOOL _locked; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                                                                                  //@synthesize shadowView=_shadowView - In the implementation block
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;              //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition;                                                                                                      //@synthesize barPosition=_barPosition - In the implementation block
+(double)defaultHeight;
+(id)defaultButtonFont;
+(Class)defaultButtonClass;
+(Class)defaultTextButtonClass;
+(double)defaultSelectionModeHeight;
+(double)defaultHeightForBarSize:(int)arg1 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIToolbarDelegate>)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIToolbarDelegate>)delegate;
-(UIImageView *)_backgroundView;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(BOOL)isTranslucent;
-(id)scriptingInfoWithChildren;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(BOOL)_subclassImplementsDrawRect;
-(BOOL)isMinibar;
-(UIView *)_shadowView;
-(void)_updateBackgroundColor;
-(id)_effectiveBarTintColor;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1 ;
-(void)_updateBackgroundImage;
-(BOOL)_wantsLetterpressContent;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)_updateOpacity;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_setBarPosition:(long long)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)_customViewChangedForButtonItem:(id)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(long long)_barPosition;
-(long long)barPosition;
-(void)_setBackgroundImage:(id)arg1 mini:(id)arg2 ;
-(void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(void)_setWantsLetterpressContent:(BOOL)arg1 ;
-(BOOL)_hidesShadow;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(UIColor *)barTintColor;
-(id)_backdropViewLayerGroupName;
-(void)_setShadowView:(id)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2 ;
-(id)_adaptiveBackdrop;
-(void)_setLocked:(BOOL)arg1 ;
-(id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(BOOL)_isInNavigationBar;
-(void)_updateBarForStyle;
-(void)_updateItemsForNewFrame:(id)arg1 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4 ;
-(void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 ;
-(BOOL)_isTopBar_legacy;
-(BOOL)_supportsAdaptiveBackground;
-(void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg1 wasMinibar:(BOOL)arg2 ;
-(void)_frameOrCenterChanged;
-(void)_layoutBackgroundViewConsideringStatusBar;
-(void)_cleanupAdaptiveBackdrop;
-(double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2 ;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
-(void)_updateScriptingInfo:(id)arg1 view:(id)arg2 ;
-(id)initInView:(id)arg1 withFrame:(CGRect)arg2 withItemList:(id)arg3 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(id)shadowImageForToolbarPosition:(long long)arg1 ;
-(CGRect)_frameOfBarButtonItem:(id)arg1 ;
-(BOOL)_isLocked;
-(id)_buttonName:(id)arg1 withType:(int)arg2 ;
-(BOOL)_isAdaptiveToolbarDisabled;
-(void)_setAdaptiveToolbarDisabled:(BOOL)arg1 ;
-(void)setExtraEdgeInsets:(double)arg1 ;
-(double)extraEdgeInsets;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)initInView:(id)arg1 withItemList:(id)arg2 ;
-(void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4 ;
-(id)createButtonWithDescription:(id)arg1 ;
-(void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4 ;
-(void)_buttonBarFinishedAnimating;
-(void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3 ;
-(void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3 ;
-(void)showButtonGroup:(int)arg1 withDuration:(double)arg2 ;
-(int)currentButtonGroup;
-(void)getVisibleButtonTags:(int*)arg1 count:(unsigned*)arg2 maxItems:(unsigned)arg3 ;
-(void)setButtonBarTrackingMode:(int)arg1 ;
-(void)setBadgeValue:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeGlyph:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2 ;
-(BOOL)onStateForButton:(int)arg1 ;
-(void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2 ;
-(void)animateWithDuration:(float)arg1 forButton:(int)arg2 ;
-(id)buttonItems;
-(void)setButtonItems:(id)arg1 ;
-(void)_setForceTopBarAppearance:(BOOL)arg1 ;
-(BOOL)centerTextButtons;
-(void)setCenterTextButtons:(BOOL)arg1 ;
@end

