/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MusicInteractiveBackdropView, _UIBackdropViewSettings, UIView;

@interface MusicInteractiveBlurringView : UIView {

	MusicInteractiveBackdropView* _backdropView;
	_UIBackdropViewSettings* _destinationSettings;
	UIView* _tintView;
	double _tintAlphaProgressMultiplier;

}

@property (nonatomic,readonly) UIView * tintView;                             //@synthesize tintView=_tintView - In the implementation block
@property (assign,nonatomic) double tintAlphaProgressMultiplier;              //@synthesize tintAlphaProgressMultiplier=_tintAlphaProgressMultiplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(UIView *)tintView;
-(void)setTransitionProgress:(double)arg1 ;
-(BOOL)_shouldUseHighQualityGraphics;
-(void)transitionCompleted;
-(double)tintAlphaProgressMultiplier;
-(void)setTintAlphaProgressMultiplier:(double)arg1 ;
@end

