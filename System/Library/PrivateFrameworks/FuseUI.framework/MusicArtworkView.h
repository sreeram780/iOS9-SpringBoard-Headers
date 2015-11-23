/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@protocol MusicArtworkViewDelegate;
@class NSMutableSet, UIView;

@interface MusicArtworkView : UIImageView {

	NSMutableSet* _activeTouches;
	long long _externalContentMode;
	UIView* _highlightView;
	unsigned long long _highlightTransactionCount;
	BOOL _overallHighlighted;
	BOOL _touchHighlighted;
	BOOL _shouldRespectHighlightProperty;
	id<MusicArtworkViewDelegate> _delegate;
	double _idealAspectRatio;

}

@property (assign,nonatomic,__weak) id<MusicArtworkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double idealAspectRatio;                                   //@synthesize idealAspectRatio=_idealAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL shouldRespectHighlightProperty;                       //@synthesize shouldRespectHighlightProperty=_shouldRespectHighlightProperty - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MusicArtworkViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicArtworkViewDelegate>)delegate;
-(id)initWithImage:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setIdealAspectRatio:(double)arg1 ;
-(BOOL)isArtworkSizeCloseEnoughToIdealAspectRatio:(CGSize)arg1 ;
-(void)setShouldRespectHighlightProperty:(BOOL)arg1 ;
-(double)idealAspectRatio;
-(void)_musicArtworkViewCommonInitialization;
-(void)_setTouchHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_finishTouches:(id)arg1 didCancel:(BOOL)arg2 withEvent:(id)arg3 ;
-(void)_updateArtworkViewContentMode;
-(void)_updateOverallHighlightedAnimated:(BOOL)arg1 ;
-(BOOL)shouldRespectHighlightProperty;
@end

