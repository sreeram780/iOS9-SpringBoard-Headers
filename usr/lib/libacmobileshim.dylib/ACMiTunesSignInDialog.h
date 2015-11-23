/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libobjc.A.dylib/acmAlertViewDelegateProtocol.h>

@class NSString, UIAlertView;

@interface ACMiTunesSignInDialog : ACMSignInDialog <acmAlertViewDelegateProtocol> {

	BOOL _isShown;
	NSString* _titleField;
	BOOL _isUserNameEditable;
	long long _previousInterfaceOrientation;
	CGSize _titleStringSize;
	long long _currentFirstResponder;
	CGRect _userNameFrame;
	CGRect _passwordFrame;

}

@property (retain) NSString * titleField;                                         //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,readonly) UIAlertView * signInDialog; 
@property (assign) BOOL isShown;                                                  //@synthesize isShown=_isShown - In the implementation block
@property (readonly) BOOL isPortraitMode; 
@property (readonly) CGRect userNameFrame;                                        //@synthesize userNameFrame=_userNameFrame - In the implementation block
@property (readonly) CGRect passwordFrame;                                        //@synthesize passwordFrame=_passwordFrame - In the implementation block
@property (assign) BOOL isUserNameEditable;                                       //@synthesize isUserNameEditable=_isUserNameEditable - In the implementation block
@property (assign,nonatomic) long long previousInterfaceOrientation;              //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize titleStringSize;                              //@synthesize titleStringSize=_titleStringSize - In the implementation block
@property (assign) long long currentFirstResponder;                               //@synthesize currentFirstResponder=_currentFirstResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialog;
-(void)dealloc;
-(long long)statusBarStyle;
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isShown;
-(id)passwordString;
-(void)didRotate:(id)arg1 ;
-(long long)currentFirstResponder;
-(void)applicationDidEnterBackground;
-(void)setTitleField:(NSString *)arg1 ;
-(CGRect)userNameFrame;
-(BOOL)isUserNameEditable;
-(CGRect)passwordFrame;
-(void)setCurrentFirstResponder:(long long)arg1 ;
-(BOOL)isPortraitMode;
-(NSString *)titleField;
-(CGSize)titleStringSize;
-(void)setTitleStringSize:(CGSize)arg1 ;
-(long long)previousInterfaceOrientation;
-(void)setPreviousInterfaceOrientation:(long long)arg1 ;
-(void)handleRotation;
-(void)setIsShown:(BOOL)arg1 ;
-(BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(id)dialogTitle;
-(BOOL)changeTitleStringIfNeeded;
-(void)disableControls:(BOOL)arg1 ;
-(UIAlertView *)signInDialog;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsUserNameEditable:(BOOL)arg1 ;
-(void)signInDialogShouldClosed;
-(id)userNameString;
@end

