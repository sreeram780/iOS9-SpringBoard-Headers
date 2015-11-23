/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentCredential, NSString;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {

	PKPaymentCredential* _paymentCredential;
	NSString* _cardholderName;
	NSString* _primaryAccountNumber;

}

@property (nonatomic,retain) PKPaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                              //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                        //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
-(PKPaymentCredential *)paymentCredential;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(id)initWithPaymentCredential:(id)arg1 ;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(void)dealloc;
-(id)_cardDictionary;
-(id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 ;
-(NSString *)primaryAccountNumber;
@end

