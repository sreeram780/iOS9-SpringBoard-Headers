/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UIButton, UIImageView, UILabel, UIView, UIActivityIndicatorView, CNFRegSplashSignInController;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {

	long long _serviceType;
	PSSpecifier* _specifier;
	UIButton* _learnMoreButton;
	UIImageView* _splashImageView;
	UILabel* _titleLabel;
	UILabel* _verbiageLabel;
	UIView* _authKitSignInView;
	UILabel* _signingInLabel;
	UIActivityIndicatorView* _signingInSpinner;
	CNFRegSplashSignInController* _controller;

}

@property (assign,nonatomic) long long serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) CNFRegSplashSignInController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)titleLabel;
-(CNFRegSplashSignInController *)controller;
-(void)setController:(CNFRegSplashSignInController *)arg1 ;
-(void)setSigningIn:(BOOL)arg1 ;
-(void)setAuthKitSignInView:(id)arg1 ;
-(void)_learnMorePressed:(id)arg1 ;
-(id)signingInLabel;
-(id)signingInSpinner;
-(id)_splashImage;
-(id)splashImageView;
-(id)verbiageLabel;
-(id)learnMoreButton;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
@end

