/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, NSMutableArray, UIResponder, UIWindow;

@interface UITransitionView : UIView <NSCoding> {

	UIView* _fromView;
	UIView* _toView;
	NSMutableArray* _frozenSubviews;
	UIResponder* _firstResponderToRemember;
	id _delegate;
	UIWindow* _originalWindow;
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	}  _transitionViewFlags;
	double _curlUpRevealedHeight;
	BOOL _ignoreDirectTouchEvents;
	long long _animationTimingCurve;

}

@property (assign,nonatomic) BOOL shouldNotifyDidCompleteImmediately; 
@property (assign,nonatomic) long long animationTimingCurve;                       //@synthesize animationTimingCurve=_animationTimingCurve - In the implementation block
@property (assign,nonatomic) BOOL ignoreDirectTouchEvents;                         //@synthesize ignoreDirectTouchEvents=_ignoreDirectTouchEvents - In the implementation block
+(double)defaultDurationForTransition:(int)arg1 ;
-(double)_curlUpRevealedHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(void)setIgnoresInteractionEvents:(BOOL)arg1 ;
-(BOOL)ignoresInteractionEvents;
-(void)setAnimationTimingCurve:(long long)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(BOOL)shouldNotifyDidCompleteImmediately;
-(void)notifyDidCompleteTransition:(id)arg1 ;
-(BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(void)_didStartTransition;
-(BOOL)rasterizesOnTransition;
-(void)_startTransition:(int)arg1 withDuration:(double)arg2 ;
-(void)_didCompleteTransition:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(void)_transitionDidStop:(id)arg1 finished:(id)arg2 ;
-(void)setShouldNotifyDidCompleteImmediately:(BOOL)arg1 ;
-(BOOL)transition:(int)arg1 toView:(id)arg2 ;
-(id)fromView;
-(id)toView;
-(BOOL)_isTransitioningFromFromView:(id)arg1 ;
-(void)setRasterizesOnTransition:(BOOL)arg1 ;
-(long long)animationTimingCurve;
-(BOOL)ignoreDirectTouchEvents;
-(void)setIgnoreDirectTouchEvents:(BOOL)arg1 ;
@end

