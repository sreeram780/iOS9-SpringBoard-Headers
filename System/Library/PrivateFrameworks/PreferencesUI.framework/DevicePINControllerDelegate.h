/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)didAcceptRemovePIN;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didAcceptEnteredPIN;
-(void)willCancelEnteringPIN;
-(void)didCancelEnteringPIN;

@end

