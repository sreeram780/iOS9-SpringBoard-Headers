/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidStart:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationsWillInstall:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)pluginsDidInstall:(id)arg1;
-(void)applicationsDidFailToInstall:(id)arg1;
-(void)applicationsWillUninstall:(id)arg1;
-(void)pluginsWillUninstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)pluginsDidUninstall:(id)arg1;
-(void)applicationsDidFailToUninstall:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)networkUsageChanged:(BOOL)arg1;

@end
