/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h>
#import <UIKit/_UIViewServiceDeputy.h>
#import <UIKit/_UIViewServiceDeputyRotationDelegate.h>

@class _UIAsyncInvocation, UIWindow, NSArray, NSString;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _remoteViewControllerProxy;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIWindow* _hostedWindow;
	CGPoint _windowOffset;
	CGSize _sceneSize;
	BOOL _canRestoreInputViews;
	BOOL _isRestoringInputViews;
	BOOL _didResignForDisappear;
	BOOL _localVCDisablesAutomaticBehaviors;
	NSArray* _allowedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(void)dealloc;
-(id)invalidate;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(id)_queue;
-(void)__setWindowOffset:(CGPoint)arg1 ;
-(void)__setSceneSize:(CGSize)arg1 ;
-(void)__createHostedTextEffectsWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__setHostAllowedNotifications:(id)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2 ;
-(void)__hostViewWillAppear:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)forceSyncToStatusBarOrientation;
-(void)windowDidGainFirstResponder:(id)arg1 ;
-(void)_sendNotification:(id)arg1 ;
-(void)_viewServiceHostWillEnterForeground:(id)arg1 ;
-(void)_resetSceneSize;
-(void)_restoreInputViews;
-(void)performOnRelevantWindows:(/*^block*/id)arg1 ;
@end

