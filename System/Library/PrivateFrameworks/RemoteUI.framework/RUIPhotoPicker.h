/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImagePickerController, UIImage, NSString;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImagePickerController* _imagePickerController;
	UIImage* _pickedImage;
	/*^block*/id _pickerCompletion;

}

@property (nonatomic,retain) UIImage * pickedImage;                 //@synthesize pickedImage=_pickedImage - In the implementation block
@property (nonatomic,copy) id pickerCompletion;                     //@synthesize pickerCompletion=_pickerCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPickerCompletion:(id)arg1 ;
-(void)setPickedImage:(UIImage *)arg1 ;
-(void)_dismissWithImage:(id)arg1 ;
-(void)pickImageWithParentController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIImage *)pickedImage;
-(id)pickerCompletion;
@end

