/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACMExternalAppleConnectDelegate <NSObject>
@optional
-(void)appleConnectWillShowSignInDialog:(id)arg1;
-(void)appleConnectDidShowSignInDialog:(id)arg1;
-(void)appleConnectWillHideSignInDialog:(id)arg1;
-(void)appleConnectDidHideSignInDialog:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeDisabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeDisabled:(id)arg1;
-(BOOL)appleConnectCanHideSignInDialog:(id)arg1;
-(BOOL)appleConnectSignInAnimated:(id)arg1;
-(id)appleConnectStandardBackgroundColor:(id)arg1;
-(id)appleConnectStandardLogoImage:(id)arg1;
-(id)appleConnectStandardLicenseText:(id)arg1;
-(id)appleConnectStandardLicenseTextColor:(id)arg1;
-(id)appleConnectStandardAccountNameFieldPlaceholder:(id)arg1;
-(BOOL)appleConnectUseCustomAppearance:(id)arg1;
-(CGPoint*)appleConnectWidgetPosition:(id)arg1;
-(id)appleConnectAccountLabel:(id)arg1;
-(id)appleConnectSignInButton:(id)arg1;
-(id)appleConnectCancelButton:(id)arg1;
-(long long)appleConnectPasswordFieldsReturnKeyType:(id)arg1;
-(BOOL)appleConnectShouldAuthenticateOnUserInput:(id)arg1;

@required
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2;
-(id)appleConnectParentViewController:(id)arg1;

@end

