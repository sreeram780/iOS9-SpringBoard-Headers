/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {

	NSString* _encryptionScheme;
	NSString* _cardholderName;
	NSString* _primaryAccountSuffix;
	NSString* _localizedDescription;
	NSString* _primaryAccountIdentifier;
	NSString* _paymentNetwork;

}

@property (nonatomic,copy,readonly) NSString * encryptionScheme;              //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountSuffix;                   //@synthesize primaryAccountSuffix=_primaryAccountSuffix - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;               //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                         //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)primaryAccountIdentifier;
-(id)initWithEncryptionScheme:(id)arg1 ;
-(NSString *)encryptionScheme;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)primaryAccountSuffix;
-(void)setPrimaryAccountSuffix:(NSString *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
@end

