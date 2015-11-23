/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@interface PLUtilities : NSObject
+(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)workQueue;
+(id)processNameForPid:(int)arg1 ;
+(void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)extractDateStringAndUUIDStringFromFilePath:(id)arg1 ;
+(BOOL)createAndChownDirectory:(id)arg1 ;
+(id)shortUUIDString;
+(BOOL)runningAsMobileUser;
+(void)setMobileOwnerForFile:(id)arg1 ;
+(id)runningAsUser;
+(void)_deallocatePortArray:(unsigned*)arg1 withCount:(unsigned)arg2 ;
+(id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2 ;
+(short)canLogMode:(id)arg1 fullMode:(BOOL)arg2 ;
+(BOOL)isN56;
+(BOOL)isN61;
+(BOOL)isN102;
+(BOOL)isJ81;
+(BOOL)isJ82;
+(BOOL)isJ86N;
+(BOOL)isJ87N;
+(BOOL)isJ88NA;
+(BOOL)isJ89NA;
+(BOOL)isN56N;
+(BOOL)isN61N;
+(BOOL)isN56NM;
+(BOOL)isN61NM;
+(BOOL)isN59N;
+(BOOL)isJ85;
+(BOOL)isJ86;
+(BOOL)isJ87;
+(BOOL)isJ85M;
+(BOOL)isJ86M;
+(BOOL)isJ87M;
+(BOOL)isJ71;
+(BOOL)isJ72;
+(BOOL)isJ73;
+(BOOL)isN51;
+(BOOL)isN53;
+(BOOL)isN48;
+(BOOL)isN49;
+(BOOL)isN41;
+(BOOL)isN42;
+(BOOL)isP101;
+(BOOL)isP103;
+(BOOL)isP102;
+(BOOL)isN78;
+(BOOL)isN94;
+(BOOL)isJ1;
+(BOOL)isJ2;
+(BOOL)isJ2A;
+(BOOL)isJ76;
+(BOOL)isiPhone;
+(BOOL)isiPad;
+(int)getDisplayTypeOfDevice;
+(int)getCameraTypeOfDevice;
+(int)getTorchTypeOfDevice;
+(id)valueForMobileGestaltCapability:(id)arg1 ;
+(id)launchdNameToProcessName:(id)arg1 ;
+(BOOL)gasGaugeEnabled;
+(unsigned long long)dispatchTimeInSeconds:(double)arg1 ;
+(unsigned long long)pidForName:(id)arg1 ;
+(id)hashString:(id)arg1 ;
+(BOOL)shouldLogForEntryKey:(id)arg1 ;
+(short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
+(BOOL)isValidString:(id)arg1 ;
+(id)getPlatformVersionOfDevice;
+(BOOL)is64Bit;
+(BOOL)isPowerlogHelperd;
+(BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2 ;
+(id)getIdentifierFromEntry:(id)arg1 ;
+(id)JSONSanitizeDictionary:(id)arg1 ;
+(id)bundleIDFromPid:(int)arg1 ;
+(id)cameraTypeString;
+(id)torchTypeString;
+(double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2 ;
+(id)workQueueForClass:(Class)arg1 ;
+(int)MavRev;
+(BOOL)internalBuild;
+(id)deviceBootTime;
+(BOOL)isWiFiChipset4330;
+(BOOL)isWiFiChipset43291;
+(BOOL)isWiFiChipset4334;
+(BOOL)isWiFiChipset43342;
+(BOOL)isWiFiChipset4324;
+(BOOL)isWiFiChipset4345;
+(BOOL)isWiFiChipset4350;
+(int)getProcessorRevOfDevice;
+(id)dateFromTimeval:(timeval)arg1 ;
+(double)secondsFromMachTime:(unsigned long long)arg1 ;
+(BOOL)isIpad;
+(BOOL)isVrrSupported;
+(BOOL)isK93A;
+(BOOL)isP105;
+(BOOL)isP106;
+(BOOL)isP107;
+(BOOL)isK93;
+(BOOL)isK94;
+(BOOL)isK95;
+(BOOL)isOrb;
+(id)displayTypeStringQuery;
+(id)workQueueForKey:(id)arg1 ;
+(int)getAudioRevOfDevice;
+(BOOL)isMav10;
+(BOOL)isMav7;
+(BOOL)isMav1;
+(BOOL)isMav2;
+(BOOL)isMav4;
+(BOOL)isICE;
+(BOOL)isMav13;
+(BOOL)hasBaseband;
+(id)MavRevStringQuery;
+(BOOL)isMav5;
+(BOOL)isIPod;
+(BOOL)hasNfc;
+(double)defaultBatteryEnergyCapacity;
+(BOOL)alsCurveHigherThanDefault;
+(BOOL)isWiFiChipset4350legacy;
+(void)exitWithReason:(short)arg1 ;
+(id)allSubClassesForClass:(Class)arg1 ;
+(BOOL)nonUIBuild;
+(void)refreshBUI;
+(id)bundleIDFromURL:(id)arg1 ;
@end

