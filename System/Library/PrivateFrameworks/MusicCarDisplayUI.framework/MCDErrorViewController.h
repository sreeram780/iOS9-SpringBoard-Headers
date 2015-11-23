/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIButton, NSString;

@interface MCDErrorViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _okButton;
	NSString* _errorTitle;
	NSString* _errorMessage;

}

@property (nonatomic,retain) NSString * errorTitle;                //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorTitle;
-(NSString *)errorMessage;
-(void)okButtonTapped:(id)arg1 ;
-(void)updateTitleLabelText;
-(void)updateMessageLabelText;
@end

