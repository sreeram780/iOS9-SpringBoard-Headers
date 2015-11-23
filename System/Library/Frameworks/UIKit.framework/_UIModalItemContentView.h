/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class _UIModalItem, UILabel, UITextField, UIViewController, UIView, UIButton, UITableView, _UIModalItemsPresentingViewController, NSString;

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	_UIModalItem* _modalItem;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _messageLabel;
	UITextField* _loginTextField;
	UITextField* _passwordTextField;
	UIViewController* _accessoryViewController;
	CGSize _accessoryViewControllerSize;
	UIView* _accessoryViewControllerContrainerView;
	CGSize _actualViewControllerSize;
	UIButton* _cancelButton;
	UIButton* _defaultButton;
	long long _cancelButtonIndex;
	long long _defaultButtonIndex;
	UITableView* _buttonTable;
	CGSize _presentingSize;
	_UIModalItemsPresentingViewController* _presentingViewController;
	CGSize _maxSize;
	BOOL _enableFirstOtherButton;

}

@property (assign,nonatomic) _UIModalItem * modalItem;                                                      //@synthesize modalItem=_modalItem - In the implementation block
@property (assign,nonatomic) CGSize presentingSize;                                                         //@synthesize presentingSize=_presentingSize - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                                                                //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) _UIModalItemsPresentingViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                                                      //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UITextField * loginTextField;                                                //@synthesize loginTextField=_loginTextField - In the implementation block
@property (nonatomic,readonly) UITextField * passwordTextField;                                             //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (nonatomic,readonly) UIViewController * accessoryViewController;                                  //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) CGSize accessoryViewControllerSize;                                          //@synthesize accessoryViewControllerSize=_accessoryViewControllerSize - In the implementation block
@property (nonatomic,readonly) UIView * accessoryViewControllerContrainerView;                              //@synthesize accessoryViewControllerContrainerView=_accessoryViewControllerContrainerView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * defaultButton;                                                      //@synthesize defaultButton=_defaultButton - In the implementation block
@property (nonatomic,readonly) long long cancelButtonIndex;                                                 //@synthesize cancelButtonIndex=_cancelButtonIndex - In the implementation block
@property (nonatomic,readonly) long long defaultButtonIndex;                                                //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (nonatomic,readonly) UITableView * buttonTable;                                                   //@synthesize buttonTable=_buttonTable - In the implementation block
@property (assign,nonatomic) CGSize actualViewControllerSize;                                               //@synthesize actualViewControllerSize=_actualViewControllerSize - In the implementation block
@property (assign,nonatomic) BOOL enableFirstOtherButton;                                                   //@synthesize enableFirstOtherButton=_enableFirstOtherButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)cancelButtonIndex;
-(_UIModalItemsPresentingViewController *)presentingViewController;
-(CGSize)maxSize;
-(UILabel *)titleLabel;
-(void)layout;
-(void)setModalItem:(id)arg1 skipLayout:(BOOL)arg2 ;
-(void)_createAndConfigureTitleLabel;
-(void)_createAndConfigureSubtitleLabel;
-(void)_createAndConfigureMessageLabel;
-(void)_createAndConfigureTextFieldsForInputStyle:(long long)arg1 ;
-(void)_createAndConfigureButtonTable;
-(void)_createViewControllerContentView;
-(long long)defaultButtonIndex;
-(_UIModalItem *)modalItem;
-(void)textFieldValueDidChange:(id)arg1 ;
-(UITextField *)passwordTextField;
-(UITextField *)loginTextField;
-(void)setModalItem:(_UIModalItem *)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)_reloadButtons;
-(CGSize)presentingSize;
-(void)setPresentingSize:(CGSize)arg1 ;
-(void)setPresentingViewController:(_UIModalItemsPresentingViewController *)arg1 ;
-(CGSize)actualViewControllerSize;
-(void)setActualViewControllerSize:(CGSize)arg1 ;
-(BOOL)enableFirstOtherButton;
-(void)setEnableFirstOtherButton:(BOOL)arg1 ;
-(UILabel *)subtitleLabel;
-(UILabel *)messageLabel;
-(UIViewController *)accessoryViewController;
-(CGSize)accessoryViewControllerSize;
-(UIView *)accessoryViewControllerContrainerView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)defaultButton;
-(void)setDefaultButton:(UIButton *)arg1 ;
-(UITableView *)buttonTable;
@end

