/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NFHardwareSecureElementInfo, NSString;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
+(id)embeddedSecureElement;
-(BOOL)isInRestrictedMode;
-(void)dealloc;
-(id)identifier;
-(id)info;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(id)_initWithInfo:(id)arg1 ;
-(BOOL)isProductionSigned;
-(NSString *)eccCertificate;
-(NSString *)rsaCertificate;
-(NSString *)serialNumber;
@end

