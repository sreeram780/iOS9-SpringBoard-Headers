/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BTDevicePickerDelegate.h>

@protocol EABluetoothAccessoryPickerDelegate;
@class BTDevicePicker, NSString;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {

	BTDevicePicker* _picker;
	id<EABluetoothAccessoryPickerDelegate> _delegate;

}

@property (assign,nonatomic) id<EABluetoothAccessoryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wakeSelectedBluetoothAccessories:(id)arg1 ;
-(void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3 ;
-(void)dismissPicker;
-(void)show;
-(void)setDelegate:(id<EABluetoothAccessoryPickerDelegate>)arg1 ;
-(void)dealloc;
-(id<EABluetoothAccessoryPickerDelegate>)delegate;
-(id)initWithPredicate:(id)arg1 ;
@end

