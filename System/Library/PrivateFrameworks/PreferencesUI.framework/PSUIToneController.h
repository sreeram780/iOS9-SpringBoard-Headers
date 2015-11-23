/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@class TKTonePickerViewController, NSString;

@interface PSUIToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;              //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TKTonePickerViewController *)tonePickerViewController;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setSpecifier:(id)arg1 ;
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)_insertTonePickerView;
-(void)_updateReloadSpecifierInParentController;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
@end

