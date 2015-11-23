/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, SKUIOnboardingProgressView;

@interface SKUIOnboardingFooterView : UIView {

	UIButton* _leftButton;
	SKUIOnboardingProgressView* _progressView;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton; 
@property (nonatomic,readonly) UIButton * rightButton; 
@property (nonatomic,retain) SKUIOnboardingProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_newButton;
-(void)setProgressView:(SKUIOnboardingProgressView *)arg1 ;
-(SKUIOnboardingProgressView *)progressView;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)hideLeftButtonWithAnimation:(long long)arg1 ;
-(void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)hideRightButtonWithAnimation:(long long)arg1 ;
-(void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)_hideButton:(id)arg1 withAnimation:(long long)arg2 ;
-(void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3 ;
@end

