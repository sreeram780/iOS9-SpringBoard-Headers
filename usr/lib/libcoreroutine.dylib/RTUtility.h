/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTUtility : NSObject
+(id)logDirectoryPath;
+(id)preferencesPath;
+(id)mobileCrashReporterPath;
+(void)invokeCommandWithArguments:(id)arg1 suppressStdout:(BOOL)arg2 ;
+(id)managedPreferencesPath;
+(id)frameworkBundlePath;
+(id)getBundleVersionFromPath:(id)arg1 ;
+(id)executablePathFromPid:(int)arg1 ;
+(id)signingIdentifierFromAuditToken:(SCD_Struct_RT3)arg1 ;
+(id)getFirstOpenFailureTimestampKeyForPath:(id)arg1 ;
+(id)getConsecutiveOpenFailuresKeyForPath:(id)arg1 ;
+(id)launchchtlFullPath;
+(id)routinedLaunchdPlist;
+(void)unloadRoutined;
+(void)loadRoutined;
+(int)pidFromAuditToken:(SCD_Struct_RT3)arg1 ;
+(unsigned long long)crcFromData:(id)arg1 ;
+(BOOL)isIntegrityOfFileCompromised:(id)arg1 afterSuccessfulOpen:(BOOL)arg2 ;
+(id)sqlite3FullPath;
+(void)toggleRoutined;
+(void)mobileOwnFileAtPath:(id)arg1 ;
+(long long)getLevenshteinDistanceBetweenString:(id)arg1 andString:(id)arg2 withMaxCutOffDistance:(unsigned long long)arg3 ;
+(float)_randomFloatBetweenLower:(float)arg1 andUpper:(float)arg2 ;
+(double)betaDistributionCdfAtX:(double)arg1 pamamA:(double)arg2 paramB:(double)arg3 ;
@end

