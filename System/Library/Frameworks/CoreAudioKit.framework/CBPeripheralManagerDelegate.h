/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBPeripheralManagerDelegate <NSObject>
@optional
-(void)peripheralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;

@required
-(void)peripheralManagerDidUpdateState:(id)arg1;

@end

