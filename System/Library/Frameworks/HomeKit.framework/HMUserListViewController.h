/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMUserListRemoteViewController;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMUserListRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                       //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                       //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMUserListRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_finishSetupWithError:(id)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)_requestRemoteViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(HMUserListRemoteViewController *)remoteViewController;
-(void)viewDidLoad;
-(void)setRemoteViewController:(HMUserListRemoteViewController *)arg1 ;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
@end

