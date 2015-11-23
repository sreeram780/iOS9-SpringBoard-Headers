/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSString* _signedAuthToken;
	NSDictionary* _stateInformation;
	NSString* _secureElementIdentifier;
	NSString* _deviceSerialNumber;
	NSString* _companionSerialNumber;
	NSString* _productType;

}

@property (nonatomic,copy) NSString * signedAuthToken;                      //@synthesize signedAuthToken=_signedAuthToken - In the implementation block
@property (nonatomic,copy) NSDictionary * stateInformation;                 //@synthesize stateInformation=_stateInformation - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceSerialNumber;                   //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * companionSerialNumber;                //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                //@synthesize devSigned=_devSigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)secureElementIdentifier;
-(BOOL)devSigned;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
-(void)setSignedAuthToken:(NSString *)arg1 ;
-(void)setStateInformation:(NSDictionary *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(NSString *)signedAuthToken;
-(NSDictionary *)stateInformation;
-(NSString *)deviceSerialNumber;
-(NSString *)companionSerialNumber;
@end
