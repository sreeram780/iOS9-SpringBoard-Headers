/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;
	UIImage* _externalImage;
	UIView* _highlightView;
	BOOL _isDeallocating;
	BOOL _automaticallyApplyAspectConstraints;
	BOOL _dimsWhenHighlighted;
	BOOL _forcesAnimatedUnhighlighting;
	BOOL _displayingPlaceholder;
	UIImage* _placeholderImage;

}

@property (assign,nonatomic) BOOL automaticallyApplyAspectConstraints;                                                                                 //@synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints - In the implementation block
@property (assign,nonatomic) BOOL dimsWhenHighlighted;                                                                                                 //@synthesize dimsWhenHighlighted=_dimsWhenHighlighted - In the implementation block
@property (assign,nonatomic) BOOL forcesAnimatedUnhighlighting;                                                                                        //@synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,getter=isDisplayingPlaceholder,nonatomic) BOOL displayingPlaceholder;                                                                //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlaceholder; 
@property (nonatomic,readonly) UIImage * _externalImage;                                                                                               //@synthesize externalImage=_externalImage - In the implementation block
@property (assign,setter=_setAspectConstraintMultiplier:,getter=_aspectConstraintMultiplier,nonatomic) double aspectConstraintMultiplier; 
-(BOOL)isDisplayingPlaceholder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateConstraints;
-(void)setHighlightedImage:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setAutomaticallyApplyAspectConstraints:(BOOL)arg1 ;
-(void)setDimsWhenHighlighted:(BOOL)arg1 ;
-(void)setForcesAnimatedUnhighlighting:(BOOL)arg1 ;
-(BOOL)automaticallyApplyAspectConstraints;
-(void)_setAspectConstraintMultiplier:(double)arg1 ;
-(void)_updateHighlightViewAnimated:(BOOL)arg1 ;
-(void)_setPlaceholderHidden:(BOOL)arg1 ;
-(BOOL)shouldDisplayPlaceholder;
-(void)_imageDidChange;
-(UIImage *)_externalImage;
-(void)setDisplayingPlaceholder:(BOOL)arg1 ;
-(BOOL)_shouldShowHighlightView;
-(BOOL)forcesAnimatedUnhighlighting;
-(double)_aspectConstraintMultiplier;
-(BOOL)dimsWhenHighlighted;
@end

