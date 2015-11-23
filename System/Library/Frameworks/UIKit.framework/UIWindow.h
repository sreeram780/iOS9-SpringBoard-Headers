/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSISEngineDelegate.h>

@class NSString, FBSScene, FBSSceneLayer, CALayer, UIView, UIResponder, NSUndoManager, UIScreen, NSMutableArray, UIViewController, NSMutableSet, _UISystemGestureGateGestureRecognizer, UITraitCollection, _UIFocusEngine, _UIViewControllerNullAnimationTransitionCoordinator, NSArray, _UIWindowAnimationController;

@interface UIWindow : UIView <NSISEngineDelegate> {

	BOOL _attachable;
	NSString* _debugName;
	FBSScene* _scene;
	FBSScene* _associatingScene;
	FBSSceneLayer* _associatingSceneLayer;
	CALayer* _rootLayer;
	long long _sceneOrientation;
	BOOL _notedOverlayInsetChange;
	id _delegate;
	double _windowLevel;
	double _windowSublevel;
	id _layerContext;
	UIView* _lastMouseDownView;
	UIView* _lastMouseEnteredView;
	UIResponder* _firstResponder;
	id _fingerInfo;
	id _touchData;
	long long _viewOrientation;
	UIView* _exclusiveTouchView;
	NSUndoManager* _undoManager;
	UIScreen* _screen;
	CALayer* _transformLayer;
	NSMutableArray* _rotationViewControllers;
	UIViewController* _rootViewController;
	NSMutableSet* _subtreeMonitoringViews;
	NSMutableSet* _tintViews;
	id _currentTintView;
	UIView* _rememberedFocusedView;
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
		unsigned legacyOrientationChecks : 1;
		unsigned windowResizedToFullScreen : 1;
		unsigned statusBarFollowsOrientation : 1;
		unsigned secure : 1;
		unsigned isMainSceneSized : 1;
		unsigned isSettingFocusedView : 1;
		unsigned debugNeedsFocusItemOverlayUpdate : 1;
		unsigned didSetRestorationIdentifier : 1;
	}  _windowFlags;
	id _windowController;
	_UISystemGestureGateGestureRecognizer* _systemGestureGateForGestures;
	_UISystemGestureGateGestureRecognizer* _systemGestureGateForTouches;
	UITraitCollection* _traitCollection;
	UITraitCollection* _destinationTraitCollection;
	CFDictionaryRef _touchMap;
	long long _containedGestureRecognizerMaximumState;
	double _lastTouchTimestamp;
	unsigned _systemGesturesArePossible : 1;
	long long _verticalSizeClassStateRestorationOverride;
	long long _horizontalSizeClassStateRestorationOverride;
	_UIFocusEngine* _focusEngine;
	BOOL _shouldDisableTransformLayerScalingForSnapshotting;
	BOOL __containedGestureRecognizersShouldRespectGestureServerInstructions;
	BOOL __representsSelfHostedContent;
	BOOL __usesLegacySupportedOrientationChecks;
	BOOL ___hostViewUnderlapsStatusBar;
	BOOL __shouldHitTestEntireScreen;
	_UIViewControllerNullAnimationTransitionCoordinator* _traitCollectionChangeTransitionCoordinator;
	NSArray* _windowInternalConstraints;
	NSArray* _rootViewConstraints;
	/*^block*/id _deferredLaunchBlock;
	long long _toWindowOrientation;
	long long _fromWindowOrientation;
	_UIWindowAnimationController* __animationController;
	/*^block*/id __shouldPreventRotationHook;
	long long __deferredLaunchOrientation;

}

@property (nonatomic,readonly) CGSize MPU_rootViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIScreen * screen; 
@property (assign,nonatomic) double windowLevel; 
@property (getter=isKeyWindow,nonatomic,readonly) BOOL keyWindow; 
@property (nonatomic,retain) UIViewController * rootViewController;                                                                                                                                 //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:,nonatomic) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions;                 //@synthesize _containedGestureRecognizersShouldRespectGestureServerInstructions=__containedGestureRecognizersShouldRespectGestureServerInstructions - In the implementation block
@property (assign,setter=_setRepresentsSelfHostedContent:,getter=_representsSelfHostedContent,nonatomic) BOOL _representsSelfHostedContent;                                                         //@synthesize _representsSelfHostedContent=__representsSelfHostedContent - In the implementation block
@property (assign,setter=_setShouldDisableTransformLayerScalingForSnapshotting:,nonatomic) BOOL _shouldDisableTransformLayerScalingForSnapshotting;                                                 //@synthesize shouldDisableTransformLayerScalingForSnapshotting=_shouldDisableTransformLayerScalingForSnapshotting - In the implementation block
@property (setter=_setWindowInternalConstraints:,nonatomic,copy) NSArray * _windowInternalConstraints;                                                                                              //@synthesize windowInternalConstraints=_windowInternalConstraints - In the implementation block
@property (nonatomic,readonly) BOOL _usesLegacySupportedOrientationChecks;                                                                                                                          //@synthesize _usesLegacySupportedOrientationChecks=__usesLegacySupportedOrientationChecks - In the implementation block
@property (setter=_setDeferredLaunchBlock:,nonatomic,copy) id _deferredLaunchBlock;                                                                                                                 //@synthesize deferredLaunchBlock=_deferredLaunchBlock - In the implementation block
@property (assign,setter=_setLegacyOrientationChecks:,nonatomic) BOOL _legacyOrientationChecks; 
@property (assign,setter=_setToWindowOrientation:,getter=_toWindowOrientation,nonatomic) long long toWindowOrientation;                                                                             //@synthesize toWindowOrientation=_toWindowOrientation - In the implementation block
@property (assign,setter=_setFromWindowOrientation:,getter=_fromWindowOrientation,nonatomic) long long fromWindowOrientation;                                                                       //@synthesize fromWindowOrientation=_fromWindowOrientation - In the implementation block
@property (setter=_setAnimationController:,getter=_animationController,nonatomic,retain) _UIWindowAnimationController * _animationController;                                                       //@synthesize _animationController=__animationController - In the implementation block
@property (setter=_setTraitCollectionChangeTransitionCoordinator:,nonatomic,retain) _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;              //@synthesize traitCollectionChangeTransitionCoordinator=_traitCollectionChangeTransitionCoordinator - In the implementation block
@property (nonatomic,readonly) SCD_Struct_UI23 __sizeClassPair; 
@property (setter=_setShouldPreventRotationHook:,nonatomic,copy) id _shouldPreventRotationHook;                                                                                                     //@synthesize _shouldPreventRotationHook=__shouldPreventRotationHook - In the implementation block
@property (assign,setter=__setHostViewUnderlapsStatusBar:,nonatomic) BOOL __hostViewUnderlapsStatusBar;                                                                                             //@synthesize __hostViewUnderlapsStatusBar=___hostViewUnderlapsStatusBar - In the implementation block
@property (setter=_setRootViewConstraints:,nonatomic,copy) NSArray * _rootViewConstraints;                                                                                                          //@synthesize rootViewConstraints=_rootViewConstraints - In the implementation block
@property (assign,setter=_setDeferredLaunchOrientation:,nonatomic) long long _deferredLaunchOrientation;                                                                                            //@synthesize _deferredLaunchOrientation=__deferredLaunchOrientation - In the implementation block
@property (assign,setter=_setShouldHitTestEntireScreen:,nonatomic) BOOL _shouldHitTestEntireScreen;                                                                                                 //@synthesize _shouldHitTestEntireScreen=__shouldHitTestEntireScreen - In the implementation block
@property (setter=_setFocusEngine:,nonatomic,retain) _UIFocusEngine * _focusEngine; 
+(BOOL)_isSystemWindow;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
+(id)keyWindow;
+(void)_executeDeferredLaunchBlocks;
+(void)_synchronizeDrawingWithFence:(id)arg1 ;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3 ;
+(id)_statusBarControllingWindow;
+(id)_synchronizedDrawingFence;
+(void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3 ;
+(void)_synchronizeDrawing;
+(void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 ;
+(id)_topVisibleWindowPassingTest:(/*^block*/id)arg1 ;
+(void)_prepareWindowsForAppSuspend;
+(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 allowMutation:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
+(id)_externalKeyWindow;
+(void)_prepareWindowsPassingTestForAppResume:(/*^block*/id)arg1 ;
+(void)_prepareWindowsForAppResume;
+(unsigned)_synchronizeDrawingAcrossProcesses;
+(BOOL)_transformLayerRotationsAreEnabled;
+(void)initialize;
+(void)adjustForAccessibilityIfNeeded:(id)arg1 ;
+(BOOL)_isSecure;
+(CGRect)constrainFrameToScreen:(CGRect)arg1 ;
+(void)_synchronizeDrawingWithPreCommitHandler:(/*^block*/id)arg1 ;
+(void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(/*^block*/id)arg2 ;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 withPreCommitHandler:(/*^block*/id)arg2 ;
+(unsigned long long)_keyWindowStackSize;
+(void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2 ;
+(void)_popKeyWindow:(id)arg1 ;
+(void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned*)arg2 count:(unsigned long long)arg3 frame:(CGRect)arg4 usePurpleGfx:(BOOL)arg5 outTransform:(CGAffineTransform*)arg6 ;
+(void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned*)arg2 count:(unsigned long long)arg3 frame:(CGRect)arg4 baseTransform:(CGAffineTransform)arg5 ;
+(void*)createIOSurfaceFromScreen:(id)arg1 ;
+(void*)createIOSurfaceWithContextId:(unsigned)arg1 frame:(CGRect)arg2 ;
+(id)_hitTestToPoint:(CGPoint)arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4 ;
+(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
+(void)_adjustMediaTimingForLayerHost:(id)arg1 ;
+(Class)layerClass;
+(void)_setAllWindowsKeepContextInBackground:(BOOL)arg1 ;
+(void)_setTransformLayerRotationsAreEnabled:(BOOL)arg1 ;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 ;
+(void)_clearKeyWindowStack;
+(void)_setKeyWindowStackEnabled:(BOOL)arg1 ;
+(void)_pushKeyWindow:(id)arg1 ;
+(void)_popKeyWindow;
+(void)_removeWindowFromStack:(id)arg1 ;
+(void)_unregisterChargedView:(id)arg1 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 outTransform:(CGAffineTransform*)arg4 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 usePurpleGfx:(BOOL)arg4 outTransform:(CGAffineTransform*)arg5 ;
+(void*)createScreenIOSurface;
+(id)_findWithDisplayPoint:(CGPoint)arg1 ;
+(id)_windowWithContextId:(unsigned)arg1 ;
+(void)_adjustMediaTimingForLayerHostView:(id)arg1 ;
-(id)addTouchCaptureViewWithTag:(long long)arg1 ;
-(id)removeTouchCaptureViewWithTag:(long long)arg1 ;
-(CGSize)MPU_rootViewSize;
-(id)copyIOSurfaceSnapshotView:(long long)arg1 ;
-(CGRect)_axConvertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(BOOL)_accessibilityIsModalWithKeyboard;
-(void)_setIsLoweringAnchoringConstraints:(BOOL)arg1 ;
-(id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2 contentInsetScale:(double)arg3 ;
-(BOOL)_isLoweringAnchoringConstraints;
-(void)_autolayout_windowDidChangeBoundsFrom:(CGRect)arg1 ;
-(void)_autolayout_windowDidChangeCenterFrom:(CGPoint)arg1 ;
-(BOOL)_canBecomeLayoutEngineDelegate;
-(void)_constraints_subviewWillChangeSuperview:(id)arg1 ;
-(void)updateConstraints;
-(void)_invalidateWindowInternalConstraints;
-(unsigned long long)_expectedWindowInternalConstraintsCount;
-(void)_windowInternalConstraints_sizeDidChange;
-(void)_windowInternalConstraints_centerDidChange;
-(void)_uiib_invalidateWindowInternalConstraints;
-(id)_layoutEngineCreateIfNecessary;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(id)_layoutEngineIfAvailable;
-(void)updateConstraintsIfNeeded;
-(void)_initializeLayoutEngine;
-(id)_uiib_candidateRedundantConstraints;
-(id)_descendantWithAmbiguousLayout;
-(void)exerciseAmbiguityInLayout;
-(id)_uiib_layoutEngineCreatingIfNecessary;
-(id)_redundantConstraints;
-(BOOL)hasAmbiguousLayout;
-(id)_hostingHandle;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_isTextEffectsWindow;
-(BOOL)_isTextEffectsWindowHosting;
-(void)_matchDeviceOrientation;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)inhibitSetupOrientation;
-(BOOL)inhibitManualTransform;
-(double)_classicOffset;
-(void)keyboardDidHide;
-(BOOL)inhibitTextEffectsRotation;
-(void)setupForOrientation:(long long)arg1 ;
-(void)matchDeviceOrientation:(id)arg1 ;
-(void)_setNeedsFocusItemOverlayUpdate;
-(void)_updateFocusItemOverlayViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)traitCollection;
-(id)_screen;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(_UIWindowAnimationController *)_animationController;
-(long long)interfaceOrientation;
-(BOOL)_clearMouseView;
-(void)makeKeyAndVisible;
-(void)_updateTransformLayer;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(id)_initWithOrientation:(long long)arg1 ;
-(void)setResizesToFullScreen:(BOOL)arg1 ;
-(void)_resizeWindowToFullScreenIfNecessary;
-(id)nextResponder;
-(id)firstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setWindowLevel:(double)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(unsigned)_contextId;
-(CGRect)_sceneReferenceBounds;
-(UIScreen *)screen;
-(BOOL)_windowControlsStatusBarOrientation;
-(UIViewController *)rootViewController;
-(id)_currentTintView;
-(BOOL)_shouldZoom;
-(BOOL)_includeInDefaultImageSnapshot;
-(id)_associatingSceneLayer;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(void)sendEvent:(id)arg1 ;
-(id)undoManager;
-(BOOL)_needsShakesWhenInactive;
-(CFDictionaryRef)_touchMap;
-(id)representation;
-(id)_touchData;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(id)_deepestUnambiguousResponder;
-(BOOL)_shouldParticipateInVirtualResizing;
-(void)_willTransitionToVirtualHorizontalSizeClass:(long long)arg1 virtualVerticalSizeClass:(long long)arg2 ;
-(long long)_windowInterfaceOrientation;
-(void)_adjustSizeClassesAndResizeWindowToFrame:(CGRect)arg1 ;
-(void)_updateWindowTraits;
-(BOOL)isKeyWindow;
-(BOOL)_containedInAbsoluteResponderChain;
-(BOOL)becomeFirstResponder;
-(void)_beginModalSession;
-(void)_endModalSession;
-(void)_setSecure:(BOOL)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(id)_window;
-(id)restorationIdentifier;
-(BOOL)_canAffectStatusBarAppearance;
-(id)_scene;
-(void)_setSystemGestureRecognitionIsPossible:(BOOL)arg1 andTouchesAreCancelled:(BOOL)arg2 ;
-(CGPoint)_clampPointToScreenJail:(CGPoint)arg1 ;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(id)_exclusiveTouchView;
-(void)_setExclusiveTouchView:(id)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(CGRect)_sceneBounds;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(BOOL)_isHostedInAnotherProcess;
-(void)_setTouchMap:(CFDictionaryRef)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(id)_targetWindowForPathIndex:(long long)arg1 atPoint:(CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5 ;
-(void)beginDisablingInterfaceAutorotation;
-(void)endDisablingInterfaceAutorotation;
-(void)_clearSizeClassesForStateRestoration;
-(void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2 ;
-(void)_setFirstResponder:(id)arg1 ;
-(_UIFocusEngine *)_focusEngine;
-(id)_focusedView;
-(void)_setWindowControlsStatusBarOrientation:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(BOOL)arg2 isRotationDisabled:(BOOL*)arg3 ;
-(BOOL)isInterfaceAutorotationDisabled;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isInternalWindow;
-(BOOL)_wantsSceneAssociation;
-(void)_setScene:(id)arg1 ;
-(void)_setAssociatingScene:(id)arg1 ;
-(id)_newSceneLayer;
-(void)_configureSceneAndLayerIfNecessary;
-(void)_attachSceneLayer;
-(void)_detachSceneLayer;
-(BOOL)_isSecure;
-(void)_sceneBoundsDidChange;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_createContextIfNecessaryForCurrentApplicationState;
-(void)_setDeferredLaunchOrientation:(long long)arg1 ;
-(void)_installFocusEngine;
-(void)_commonInitAttachedWindow:(BOOL)arg1 debugName:(id)arg2 scene:(id)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 attached:(BOOL)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 scene:(id)arg3 attached:(BOOL)arg4 ;
-(int)bitsPerComponent;
-(void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)_setWindowInternalConstraints:(id)arg1 ;
-(void)_setMouseDownView:(id)arg1 withEvent:(GSEventRef)arg2 ;
-(void)_setMouseEnteredView:(id)arg1 ;
-(void)_endKeyWindowDeferral;
-(void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1 ;
-(void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1 ;
-(BOOL)_shouldDisableTransformLayerScalingForSnapshotting;
-(long long)_orientationForViewTransform;
-(BOOL)_windowOwnsInterfaceOrientation;
-(long long)_orientationForRootTransform;
-(CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1 ;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_createContextAttached:(BOOL)arg1 ;
-(int)windowOutput;
-(BOOL)_ignoresHitTest;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldCreateContextAsSecure;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_shouldUseRemoteContext;
-(void)setLevel:(double)arg1 ;
-(void)_setAttachedToScene:(BOOL)arg1 ;
-(void)_createContext;
-(BOOL)keepContextInBackground;
-(void)_destroyContext;
-(void)_beginKeyWindowDeferral;
-(NSArray *)_rootViewConstraints;
-(void)_setRootViewConstraints:(id)arg1 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1 ;
-(void)setNeedsPreferredFocusedItemUpdate;
-(BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
-(void)makeKeyWindow;
-(void)_resignKeyWindowStatus;
-(void)setNeedsFocusUpdate;
-(void)addRootViewControllerViewIfPossible;
-(id)_deferredLaunchBlock;
-(void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3 ;
-(void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2 ;
-(BOOL)_areOverlayInsetsValid:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_overlayInsets;
-(double)_touchSloppinessFactor;
-(double)_chargeMultiplicationFactor;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(BOOL)_isScrollingEnabledForView:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1 ;
-(id)_firstResponder;
-(void)_sendGesturesForEvent:(id)arg1 ;
-(void)_sendTouchesForEvent:(id)arg1 ;
-(void)_sendButtonGesturesForEvent:(id)arg1 ;
-(void)_sendButtonsForEvent:(id)arg1 ;
-(CGPoint)_convertPointToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertPointFromSceneReferenceSpace:(CGPoint)arg1 ;
-(id)_rootForKeyResponderCycle;
-(void)setCenter:(CGPoint)arg1 ;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(id)_rotationViewControllers;
-(id)_clientsForRotation;
-(BOOL)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_shouldPreventRotationHook;
-(BOOL)isRotating;
-(long long)_deferredLaunchOrientation;
-(void)_setDeferredLaunchBlock:(/*^block*/id)arg1 ;
-(long long)_toWindowOrientation;
-(void)_willChangeToSize:(CGSize)arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(BOOL)_guardSizeTransitionFromAnimations;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(void)_setShouldHitTestEntireScreen:(BOOL)arg1 ;
-(void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1 ;
-(void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3 ;
-(BOOL)_isStatusBarWindow;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1 ;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1 ;
-(void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2 ;
-(void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4 ;
-(void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3 ;
-(CGRect)_convertRectToSceneReferenceSpace:(CGRect)arg1 ;
-(void)_rotateToBounds:(CGRect)arg1 withAnimator:(id)arg2 transitionContext:(id)arg3 ;
-(void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 skipCallbacks:(BOOL)arg4 ;
-(id)__clientsForRotationCallbacks;
-(id)contentView;
-(void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4 ;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_shouldPrepareScreenForWindow;
-(void)_removeFocusEngine;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(BOOL)_shouldPropigateTraitCollectionChanges;
-(id)_traitCollectionForSize:(CGSize)arg1 screen:(id)arg2 ;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 ;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4 ;
-(void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_propagateTraitCollectionChangedForStateRestoration;
-(void)_updateIsSceneSizedFlag;
-(void)resignKeyWindow;
-(void)becomeKeyWindow;
-(id)_deferralPropertiesWithContextID:(unsigned)arg1 ;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void*)createIOSurfaceWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldResizeWithScene;
-(double)windowLevel;
-(void)_setShouldDisableTransformLayerScalingForSnapshotting:(BOOL)arg1 ;
-(void)_updateAppTintView;
-(void)_updateCurrentTintView;
-(BOOL)resizesToFullScreen;
-(void)_focusedViewDidChange:(id)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)_wantsFocusEngine;
-(BOOL)_shouldHitTestEntireScreen;
-(void)_noteEnvironmentNeedsFocusUpdate:(id)arg1 allowsDeferral:(BOOL)arg2 ;
-(void)updatePreferredFocusedItemIfNeeded;
-(BOOL)isAncestorOfItem:(id)arg1 ;
-(id)preferredFocusedView;
-(id)preferredFocusedItem;
-(void)updateFocusIfNeeded;
-(void)setRestorationIdentifier:(id)arg1 ;
-(void)_unregisterChargedView:(id)arg1 ;
-(id)_debugName;
-(id)_associatingScene;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 ;
-(id)initWithContentRect:(CGRect)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)_updateTransformLayerSizeForClassicPresentation;
-(void)_transformLayerShouldMaskToBounds:(BOOL)arg1 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(BOOL)_hasContext;
-(BOOL)_legacyOrientationChecks;
-(void)_setLegacyOrientationChecks:(BOOL)arg1 ;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(void)orderOut:(id)arg1 ;
-(void)makeKey:(id)arg1 ;
-(void)_noteOverlayInsetsDidChange;
-(id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3 ;
-(void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_disableAutomaticKeyboardUI;
-(CGPoint)_convertOffset:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGPoint)_convertOffset:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGPoint)_convertOffsetToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertOffsetFromSceneReferenceSpace:(CGPoint)arg1 ;
-(double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2 ;
-(double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2 ;
-(CGPoint)convertWindowToDevice:(CGPoint)arg1 ;
-(CGPoint)convertDeviceToWindow:(CGPoint)arg1 ;
-(double)level;
-(void)setBecomeKeyOnOrderFront:(BOOL)arg1 ;
-(void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5 ;
-(void)_addRotationViewController:(id)arg1 ;
-(void)_removeRotationViewController:(id)arg1 ;
-(void)_clearPendingKeyboardChanges;
-(unsigned long long)_supportedInterfaceOrientationsForRootViewController;
-(BOOL)_isAnyWindowRotating;
-(void)_updateToInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateInterfaceOrientationFromDeviceOrientation;
-(void)setAutorotates:(BOOL)arg1 ;
-(void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 ;
-(void)_forceTwoPartRotationAnimation:(BOOL)arg1 ;
-(BOOL)autorotates;
-(BOOL)isUsingOnePartRotationAnimation;
-(void)_setWindowInterfaceOrientation:(long long)arg1 ;
-(id)_appearanceContainer;
-(BOOL)_systemGestureRecognitionIsPossible;
-(BOOL)_shouldDelayTouchForSystemGestures:(id)arg1 ;
-(id)_traitCollectionWhenRotated;
-(SCD_Struct_UI23)__sizeClassPair;
-(void)_screenWillTransitionToTraitCollection:(id)arg1 ;
-(void)_makeExternalKeyWindow;
-(void)_registerChargedView:(id)arg1 ;
-(id)_registeredScrollToTopViews;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(void)_setFocusEngine:(id)arg1 ;
-(void)_setIsSettingFirstResponder:(BOOL)arg1 ;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(void*)createIOSurface;
-(long long)_sceneOrientation;
-(CGRect)_convertRectFromSceneReferenceSpace:(CGRect)arg1 ;
-(CGPoint)_convertDoublePointToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertDoublePointFromSceneReferenceSpace:(CGPoint)arg1 ;
-(BOOL)_isInAWindow;
-(id)_responderWindow;
-(CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)arg1 ;
-(void)setKeepContextInBackground:(BOOL)arg1 ;
-(void)_registerViewForSubtreeMonitoring:(id)arg1 ;
-(void)_unregisterViewForSubtreeMonitoring:(id)arg1 ;
-(id)_subtreeMonitorsForView:(id)arg1 ;
-(void)_writeLayerTreeToPath:(id)arg1 ;
-(void)_tintViewDidChangeAppearance:(id)arg1 ;
-(void)_updateCurrentTintViewForPotentialTintView:(id)arg1 ;
-(void)_addTintView:(id)arg1 ;
-(void)_removeTintView:(id)arg1 ;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(id)_normalInheritedTintColor;
-(BOOL)_appearsInLoupe;
-(id)_parentFocusEnvironment;
-(id)_viewControllersInPreferredFocusedChain;
-(_UIViewControllerNullAnimationTransitionCoordinator *)_traitCollectionChangeTransitionCoordinator;
-(NSArray *)_windowInternalConstraints;
-(BOOL)_containedGestureRecognizersShouldRespectGestureServerInstructions;
-(void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(BOOL)arg1 ;
-(BOOL)_representsSelfHostedContent;
-(void)_setRepresentsSelfHostedContent:(BOOL)arg1 ;
-(BOOL)_usesLegacySupportedOrientationChecks;
-(void)_setToWindowOrientation:(long long)arg1 ;
-(long long)_fromWindowOrientation;
-(void)_setFromWindowOrientation:(long long)arg1 ;
-(void)_setAnimationController:(id)arg1 ;
-(void)_setShouldPreventRotationHook:(/*^block*/id)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
@end

