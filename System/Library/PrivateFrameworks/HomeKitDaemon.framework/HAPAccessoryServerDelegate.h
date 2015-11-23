/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPAccessoryServerDelegate <NSObject>
@required
-(void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
-(void)accessoryServer:(id)arg1 requestUserPermissionForUnauthenticatedAccessory:(id)arg2;
-(void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
-(void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
-(void)accessoryServer:(id)arg1 didDiscoverAccessoriesWithError:(id)arg2 transaction:(id)arg3;
-(void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(/*^block*/id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2;
-(void)accessoryServerDidUpdateStateNumber:(id)arg1;
-(void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;

@end

