/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class ABImagePickerController;


@protocol ABImagePickerControllerDelegate
@property (assign,nonatomic) BOOL popoverSizeUpdatesDisabled; 
@property (nonatomic,readonly) ABImagePickerController * imagePicker; 
@required
-(void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
-(void)imagePickerWillBeRemoved:(id)arg1;
-(void)setPopoverSizeUpdatesDisabled:(BOOL)arg1;
-(id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
-(id)personImageView;
-(void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
-(void)removeImagePickerControllerFromUI;
-(void)finishTearingDownImagePickerController;
-(void)imagePickerWillBeShown:(id)arg1;
-(id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
-(void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
-(id)selectedPeople;
-(void)showImageMenuForHelper:(id)arg1;
-(BOOL)popoverSizeUpdatesDisabled;
-(ABImagePickerController *)imagePicker;
-(id)styleProvider;

@end

