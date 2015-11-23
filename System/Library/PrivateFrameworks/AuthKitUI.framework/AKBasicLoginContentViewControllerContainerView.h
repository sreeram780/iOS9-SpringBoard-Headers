/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, UIImageView, UILabel, NSArray;

@interface AKBasicLoginContentViewControllerContainerView : UIView {

	UIImage* _bannerImage;
	NSString* _titleText;
	NSString* _messageText;
	UIImageView* _bannerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) UIImage * bannerImage;                    //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                     //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) UIImageView * bannerView;                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;              //@synthesize activeConstraints=_activeConstraints - In the implementation block
-(UIImageView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)updateConstraints;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)_configureMessageLabel;
-(void)_configureBannerImage;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UIImage *)bannerImage;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
-(NSString *)titleText;
-(void)setBannerView:(UIImageView *)arg1 ;
@end

