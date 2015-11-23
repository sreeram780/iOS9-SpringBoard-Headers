/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUPurchaseContinuation.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIActionSheet, UIAlertView, ABPeoplePickerNavigationController, NSString;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	ABPeoplePickerNavigationController* _peoplePicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dismissPeoplePicker;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)start;
-(void)actionSheetCancel:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_destroyActionSheet;
-(void)_destroyAlertView;
-(id)_copyAllowedToneStyles;
-(void)_pickAssigneeToneStyle;
-(void)_showPeoplePicker;
-(id)initWithPurchase:(id)arg1 ;
@end

