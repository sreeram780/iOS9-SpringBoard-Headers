/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MDM-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MCSoftwareUpdateDownloadOptions : NSObject <NSCopying> {

	BOOL _enforceWifiOnlyOverride;
	int _termsAndConditionsAgreementStatus;
	int _downloadFeeAgreementStatus;

}

@property (assign,nonatomic) int termsAndConditionsAgreementStatus;              //@synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus - In the implementation block
@property (assign,nonatomic) int downloadFeeAgreementStatus;                     //@synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus - In the implementation block
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride;                       //@synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)downloadFeeAgreementStatus;
-(BOOL)enforceWifiOnlyOverride;
-(void)setEnforceWifiOnlyOverride:(BOOL)arg1 ;
-(void)setDownloadFeeAgreementStatus:(int)arg1 ;
-(void)setTermsAndConditionsAgreementStatus:(int)arg1 ;
-(int)termsAndConditionsAgreementStatus;
@end

