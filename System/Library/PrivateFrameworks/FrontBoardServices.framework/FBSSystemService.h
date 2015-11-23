/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSSystemService : NSObject
+(id)sharedService;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
-(BOOL)isPasscodeLockedOrBlocked;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)deleteAllSnapshotsForApplication:(id)arg1 ;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(int)pidForApplication:(id)arg1 ;
-(id)systemApplicationBundleIdentifier;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_badArgumentError;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)openDataActivationURL:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(id)clientCallbackQueue;
-(unsigned)createClientPort;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
-(void)shutdown;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)reboot;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
@end

