/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSTextFieldSpecifier, WBSSavedPassword;

@interface SafariSavedPasswordDetailController : PSListController {

	PSTextFieldSpecifier* _websiteSpecifier;
	PSTextFieldSpecifier* _usernameSpecifier;
	PSTextFieldSpecifier* _passwordSpecifier;
	WBSSavedPassword* _savedPassword;
	BOOL _editing;

}
+(id)_valueOfSpecifier:(id)arg1 ;
+(id)_specifierWithName:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3 textChangeHandler:(/*^block*/id)arg4 ;
+(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
-(id)init;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_updateSpecifiers;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)_deleteItemsForSpecifiers:(id)arg1 ;
-(void)_updateDoneButtonForWebsite:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(BOOL)_isSpecifierForAutoFillItem:(id)arg1 ;
-(void)_updateRightBarButtonItem;
-(void)setSpecifier:(id)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
@end
