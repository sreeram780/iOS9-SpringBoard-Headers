/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;
@class NSObject, NSXPCListener, NSMutableArray, _UIKeyboardArbiterHandle, NSString, FBSWorkspace, FBSScene, BKSApplicationStateMonitor, _UIKeyboardChangedInformation;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableArray* _clients;
	_UIKeyboardArbiterHandle* _activeHandle;
	_UIKeyboardArbiterHandle* _previouslyActiveHandle;
	NSString* _currentBundleIdForHardwareKeyboard;
	_UIKeyboardArbiterHandle* _keyboardFocusHandle;
	_UIKeyboardArbiterHandle* _commandFocusHandle;
	FBSWorkspace* _workspace;
	FBSScene* _scene;
	int _updateCounter;
	BKSApplicationStateMonitor* _stateMonitor;
	id<_UIKeyboardArbiterLink> _sceneLink;
	_UIKeyboardChangedInformation* _lastUpdate;

}

@property (nonatomic,readonly) id<_UIKeyboardArbiterLink> sceneLink;                  //@synthesize sceneLink=_sceneLink - In the implementation block
@property (nonatomic,retain) _UIKeyboardChangedInformation * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithLink:(id)arg1 ;
-(void)updateSceneSettings:(id)arg1 ;
-(void)activateClients;
-(id<_UIKeyboardArbiterLink>)sceneLink;
-(void)attemptConnection;
-(void)processWithPID:(int)arg1 foreground:(BOOL)arg2 suspended:(BOOL)arg3 ;
-(void)runOperations:(/*^block*/id)arg1 onHandler:(id)arg2 ;
-(void)setLastUpdate:(_UIKeyboardChangedInformation *)arg1 ;
-(void)scheduleWindowTimeout;
-(void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(void)handlerRequestedFocus:(id)arg1 ;
-(void)reevaluateHardwareKeyboardClient;
-(id)handlerForPID:(int)arg1 ;
-(BOOL)handler:(id)arg1 activateSceneLayer:(id)arg2 ;
-(void)updateInterestedBundleIDs;
-(void)completeKeyboardStatusChangedFromHandler:(id)arg1 ;
-(void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(/*^block*/id)arg3 ;
-(BOOL)handler:(id)arg1 deactivateSceneLayer:(id)arg2 ;
-(void)handleUnexpectedDeallocForHandler:(id)arg1 ;
-(void)updateSuppression:(BOOL)arg1 ofPIDs:(id)arg2 ;
-(void)reevaluateSceneSettings;
-(id)handlerForBundleID:(id)arg1 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4 ;
-(_UIKeyboardChangedInformation *)lastUpdate;
@end

