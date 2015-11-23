/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol OS_dispatch_group;
@class MCUIAppSigner, UIAlertController, NSObject;

@interface MCAppSignerViewController : UITableViewController {

	BOOL _isNetworkReachable;
	MCUIAppSigner* _appSigner;
	UIAlertController* _activeAlertController;
	NSObject*<OS_dispatch_group> _trustActionGroup;

}

@property (nonatomic,retain) MCUIAppSigner * appSigner;                                  //@synthesize appSigner=_appSigner - In the implementation block
@property (nonatomic,retain) UIAlertController * activeAlertController;                  //@synthesize activeAlertController=_activeAlertController - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> trustActionGroup;              //@synthesize trustActionGroup=_trustActionGroup - In the implementation block
-(BOOL)canBeShownFromSuspendedState;
-(void)_setup;
-(BOOL)isNetworkReachable;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithAppSigner:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(void)setActiveAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)activeAlertController;
-(void)effectiveSettingsChanged:(id)arg1 ;
-(void)appSignerApplicationsChanged:(id)arg1 ;
-(MCUIAppSigner *)appSigner;
-(NSObject*<OS_dispatch_group>)trustActionGroup;
-(BOOL)_isEnterpriseAppTrustAllowed;
-(void)refreshAppSigner;
-(void)_presentNetworkRequiredAlert;
-(void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg1 ;
-(BOOL)_isShowingTrustUntrustRowAllowed;
-(void)_presentAppRemovalAlert;
-(void)_presentTrustAlert;
-(void)_presentVerifyAppAlert;
-(void)trustAppSigner;
-(void)verifyApps;
-(void)removeAppSignerApps;
-(void)setAppSigner:(MCUIAppSigner *)arg1 ;
-(void)setTrustActionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)networkReachabilityChanged:(id)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
@end

