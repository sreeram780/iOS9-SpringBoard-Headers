/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneDelegate.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@class FBSceneManagerObserver, NSMutableOrderedSet, NSMutableDictionary, NSMapTable, NSHashTable, FBSSceneClientSettingsDiffInspector, FBSceneEventQueue, NSMutableArray, NSString;

@interface FBSceneManager : NSObject <FBSceneDelegate, FBSceneLayerManagerObserver> {

	FBSceneManagerObserver* _delegate;
	NSMutableOrderedSet* _observers;
	NSMutableDictionary* _displayToRootWindow;
	NSMutableDictionary* _displayToOcclusionsStack;
	unsigned long long _synchronizationBlockDepth;
	NSMutableDictionary* _scenesByID;
	NSMapTable* _providerToSceneMap;
	NSHashTable* _providersWithOpenTransactions;
	FBSSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;
	FBSceneEventQueue* _eventQueue;
	NSMutableArray* _pendingIdleEvents;

}

@property (assign,nonatomic) id<FBSceneManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)synchronizeChanges:(/*^block*/id)arg1 ;
+(BOOL)_isSynchronizingSceneUpdates;
-(void)setDelegate:(id<FBSceneManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<FBSceneManagerDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerManagerWillStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg1 display:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 clientProvider:(id)arg5 transitionContext:(id)arg6 ;
-(void)destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)_executeEventWhenIdle:(id)arg1 ;
-(id)_rootWindowForDisplay:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_beginSynchronizationBlock;
-(id)_occlusionStackForDisplay:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_sendOutstandingOcclusionChangesForStack:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_endSynchronizationBlock;
-(void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_enqueueInternalObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 asUpdate:(BOOL)arg3 withTransitionContext:(id)arg4 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_noteSceneMovedToBackground:(id)arg1 ;
-(void)_noteSceneMovedToForeground:(id)arg1 ;
-(void)_noteSceneChangedLevel:(id)arg1 ;
-(void)_reEvaluateNeedForRootWindowOnDisplay:(id)arg1 ;
-(id)_eventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 preferInternal:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_executeNextIdleEventIfAppropriate;
-(void)_positionWrapperViewInRootViewOrderedCorrectly:(id)arg1 rootWindow:(id)arg2 ;
-(void)_startContextHostingForScene:(id)arg1 ;
-(void)_stopContextHostingForScene:(id)arg1 ;
-(void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)scenesMatchingPredicate:(id)arg1 ;
-(id)scenesPassingTest:(/*^block*/id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5 ;
-(void)attachDefaultTransform:(id)arg1 forDisplay:(id)arg2 ;
-(void)removeDefaultTransform:(id)arg1 forDisplay:(id)arg2 ;
-(void)shutdown:(BOOL)arg1 ;
@end

