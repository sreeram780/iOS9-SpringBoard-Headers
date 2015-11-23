/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKVibrationPickerViewController, UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController {

	TKVibrationPickerViewController* _vibrationPickerViewController;
	BOOL _canEnterEditingMode;
	UIBarButtonItem* _saveButton;

}

@property (nonatomic,retain,readonly) TKVibrationPickerViewController * vibrationPickerViewController; 
@property (setter=_setSaveButton:,nonatomic,retain) UIBarButtonItem * _saveButton;                                  //@synthesize saveButton=_saveButton - In the implementation block
-(double)ab_heightToFitForViewInPopoverView;
-(id)initWithAlertType:(int)arg1 ;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
-(void)_vibrationSaveButtonClicked:(id)arg1 ;
-(void)_setSaveButton:(id)arg1 ;
-(UIBarButtonItem *)_saveButton;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
@end

