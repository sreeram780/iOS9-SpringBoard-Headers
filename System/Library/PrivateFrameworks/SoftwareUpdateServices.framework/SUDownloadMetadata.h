/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _autoDownload;
	BOOL _enabledFor2G;
	BOOL _enabledFor3G;
	BOOL _enabledFor4G;
	BOOL _enabledForCellularRoaming;
	BOOL _enabledForWifi;
	BOOL _enabledOnBatteryPower;
	BOOL _enforceWifiOnlyOverride;
	int _activeDownloadPolicyType;
	int _downloadFeeAgreementStatus;
	int _termsAndConditionsAgreementStatus;

}

@property (assign,getter=isAutoDownload,nonatomic) BOOL autoDownload;                                        //@synthesize autoDownload=_autoDownload - In the implementation block
@property (assign,nonatomic) int activeDownloadPolicyType;                                                   //@synthesize activeDownloadPolicyType=_activeDownloadPolicyType - In the implementation block
@property (assign,getter=isEnabledFor2G,nonatomic) BOOL enabledFor2G;                                        //@synthesize enabledFor2G=_enabledFor2G - In the implementation block
@property (assign,getter=isEnabledFor3G,nonatomic) BOOL enabledFor3G;                                        //@synthesize enabledFor3G=_enabledFor3G - In the implementation block
@property (assign,getter=isEnabledFor4G,nonatomic) BOOL enabledFor4G;                                        //@synthesize enabledFor4G=_enabledFor4G - In the implementation block
@property (assign,getter=isEnabledForWifi,nonatomic) BOOL enabledForWifi;                                    //@synthesize enabledForWifi=_enabledForWifi - In the implementation block
@property (assign,getter=isEnabledOnBatteryPower,nonatomic) BOOL enabledOnBatteryPower;                      //@synthesize enabledOnBatteryPower=_enabledOnBatteryPower - In the implementation block
@property (assign,getter=isEnabledForCellularRoaming,nonatomic) BOOL enabledForCellularRoaming;              //@synthesize enabledForCellularRoaming=_enabledForCellularRoaming - In the implementation block
@property (assign,nonatomic) int downloadFeeAgreementStatus;                                                 //@synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus - In the implementation block
@property (assign,nonatomic) int termsAndConditionsAgreementStatus;                                          //@synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus - In the implementation block
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride;                                                   //@synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)downloadFeeAgreementStatus;
-(BOOL)enforceWifiOnlyOverride;
-(void)setEnforceWifiOnlyOverride:(BOOL)arg1 ;
-(id)activeDownloadPolicy:(id)arg1 ;
-(id)availableDownloadPolicyIfDifferentFromActive:(id)arg1 ;
-(void)setDownloadFeeAgreementStatus:(int)arg1 ;
-(void)applyDownloadPolicy:(id)arg1 ;
-(void)setTermsAndConditionsAgreementStatus:(int)arg1 ;
-(BOOL)isAutoDownload;
-(int)activeDownloadPolicyType;
-(int)termsAndConditionsAgreementStatus;
-(BOOL)isEnabledForWifi;
-(BOOL)isEnabledFor2G;
-(BOOL)isEnabledFor3G;
-(BOOL)isEnabledFor4G;
-(BOOL)isEnabledOnBatteryPower;
-(BOOL)isEnabledForCellularRoaming;
-(void)setActiveDownloadPolicyType:(int)arg1 ;
-(void)setAutoDownload:(BOOL)arg1 ;
-(void)setEnabledFor2G:(BOOL)arg1 ;
-(void)setEnabledFor3G:(BOOL)arg1 ;
-(void)setEnabledFor4G:(BOOL)arg1 ;
-(void)setEnabledForWifi:(BOOL)arg1 ;
-(void)setEnabledOnBatteryPower:(BOOL)arg1 ;
-(void)setEnabledForCellularRoaming:(BOOL)arg1 ;
-(id)_stringForBool:(BOOL)arg1 ;
-(BOOL)matchesDownloadPolicy:(id)arg1 ;
-(BOOL)isEnabledForNetworkType:(int)arg1 ;
@end

