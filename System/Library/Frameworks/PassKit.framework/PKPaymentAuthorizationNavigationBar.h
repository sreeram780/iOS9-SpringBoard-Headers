/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UINavigationBar.h>

@class PKPaymentAuthorizationNavigationBarBackgroundView, UIImageView, UIButton, UIView, NSLayoutConstraint, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {

	PKPaymentAuthorizationNavigationBarBackgroundView* _bgView;
	UIImageView* _logoView;
	UIButton* _customButton;
	id _customButtonTarget;
	SEL _customButtonAction;
	UIView* _separatorView;
	NSLayoutConstraint* _separatorLeftConstraint;
	long long _style;
	PKPaymentAuthorizationLayout* _layout;

}

@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(void)setLogoHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setCustomButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_createSubviewsWithFrame:(CGRect)arg1 ;
-(id)_buttonAttributedStringWithString:(id)arg1 ;
-(id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)updateConstraints;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)_prepareConstraints;
@end

