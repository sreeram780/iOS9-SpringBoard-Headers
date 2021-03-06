/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentServiceDelegate <NSObject>
@optional
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentServiceReceivedInterruption;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(id)arg1 fromSource:(long long)arg2;

@end

