/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIColor, NSString;

@interface SUApplication : UIApplication <UIApplicationDelegate> {

	BOOL _terminateOnNextSuspend;
	UIWindow* _window;
	UIColor* _interactionTintColor;

}

@property (nonatomic,copy) UIColor * interactionTintColor;              //@synthesize interactionTintColor=_interactionTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_runScriptTestWithOptions:(id)arg1 ;
-(void)runTestInvocation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(double)defaultImageSnapshotExpiration;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)setInteractionTintColor:(UIColor *)arg1 ;
-(UIColor *)interactionTintColor;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_storeEnabledChangeNotification:(id)arg1 ;
-(void)_teardownUI;
-(void)_setupUI;
-(void)_exitIfStoreNotAvailable;
-(void)_exitForStoreNotAvailable;
@end

