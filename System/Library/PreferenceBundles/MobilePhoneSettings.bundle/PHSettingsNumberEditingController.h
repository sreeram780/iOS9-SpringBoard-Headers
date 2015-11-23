/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, PHSettingsNumberCell;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousStringSuggestionValue;
	PHSettingsNumberCell* cell;

}
-(id)specifiers;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SCD_Struct_Ph3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)shouldReloadSpecifiersOnResume;
@end
