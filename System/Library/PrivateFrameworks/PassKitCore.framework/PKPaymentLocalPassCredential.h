/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential {

	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) PKPaymentPass * paymentPass;                //@synthesize paymentPass=_paymentPass - In the implementation block
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)passTypeIdentifier;
@end

