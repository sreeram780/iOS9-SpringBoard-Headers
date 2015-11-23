/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSLayoutConstraint;

@interface UISearchDisplayControllerContainerView : UIView {

	BOOL _collapsedTopView;
	UIView* _topView;
	UIView* _bottomView;
	UIView* _behindView;
	NSLayoutConstraint* _topViewHeightConstraint;
	NSLayoutConstraint* _topViewAttributeTopConstraint;

}

@property (nonatomic,readonly) UIView * topView;                                              //@synthesize topView=_topView - In the implementation block
@property (nonatomic,readonly) UIView * bottomView;                                           //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) UIView * behindView;                                           //@synthesize behindView=_behindView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topViewHeightConstraint;                    //@synthesize topViewHeightConstraint=_topViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topViewAttributeTopConstraint;              //@synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(UIView *)topView;
-(void)setBottomViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)updateTopViewHeight:(double)arg1 ;
-(void)updateTopAttributeConstant:(double)arg1 ;
-(void)collapseTopView;
-(void)updateTopViewHeight:(double)arg1 animateUpdate:(BOOL)arg2 ;
-(void)configureInteractionForContainment:(BOOL)arg1 ;
-(void)adjustTopAttributeConstantByDelta:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 topViewHeight:(double)arg2 ;
-(UIView *)bottomView;
-(UIView *)behindView;
-(void)setTopViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopViewAttributeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topViewHeightConstraint;
-(NSLayoutConstraint *)topViewAttributeTopConstraint;
@end

