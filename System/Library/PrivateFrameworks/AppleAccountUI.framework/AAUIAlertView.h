/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface AAUIAlertView : UIAlertView {

	NSObject*<OS_dispatch_semaphore> _buttonChosenSemaphore;
	long long _chosenButtonIndex;
	/*^block*/id _action;
	/*^block*/id _actionWithText;

}

@property (readonly) long long chosenButtonIndex; 
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(/*^block*/id)arg5 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(/*^block*/id)arg6 ;
-(long long)chosenButtonIndex;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
@end

