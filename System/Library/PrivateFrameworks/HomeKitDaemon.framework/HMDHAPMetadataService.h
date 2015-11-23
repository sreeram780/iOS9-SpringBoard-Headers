/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataService, NSArray;

@interface HMDHAPMetadataService : NSObject <NSSecureCoding> {

	HAPMetadataService* _hapServiceMetadata;
	NSArray* _mandatoryCharacteristics;
	NSArray* _optionalCharacteristics;

}

@property (nonatomic,retain) HAPMetadataService * hapServiceMetadata;              //@synthesize hapServiceMetadata=_hapServiceMetadata - In the implementation block
@property (nonatomic,retain) NSArray * mandatoryCharacteristics;                   //@synthesize mandatoryCharacteristics=_mandatoryCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * optionalCharacteristics;                    //@synthesize optionalCharacteristics=_optionalCharacteristics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHapServiceMetadata:(HAPMetadataService *)arg1 ;
-(NSArray *)mandatoryCharacteristics;
-(id)hmdCharacteristics:(id)arg1 hapCharacteristics:(id)arg2 ;
-(void)setMandatoryCharacteristics:(NSArray *)arg1 ;
-(NSArray *)optionalCharacteristics;
-(void)setOptionalCharacteristics:(NSArray *)arg1 ;
-(HAPMetadataService *)hapServiceMetadata;
-(id)initWithHAPService:(id)arg1 hapCharacteristics:(id)arg2 ;
-(id)hapCharacteristics:(id)arg1 hapCharacteristics:(id)arg2 ;
@end

