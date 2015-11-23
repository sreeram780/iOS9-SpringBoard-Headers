/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKProducerDelegate.h>
#import <libobjc.A.dylib/OKSynopsisViewDelegate.h>
#import <libobjc.A.dylib/OKCouchControllerDelegate.h>
#import <libobjc.A.dylib/OKClickWheelViewDelegate.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKPresentationViewControllerProxyExport.h>
#import <libobjc.A.dylib/OKActionResponder.h>

@protocol OS_dispatch_queue, OKPresentationViewControllerDelegate, OKPresentationViewControllerEditingDelegate, NSObject;
@class OKPageViewController, OKPresentation, NSMutableArray, OKProducer, NSString, OKProducerSettings, OFNSOperationQueue, NSMutableDictionary, OKNavigatorViewController, OKJavaScriptContext, NSRecursiveLock, NSObject, NSOperationQueue, OFReachability, OKPresentationView, OKResourceManager, OKCouchController, OKSynopsisView, OKClickWheelView, NSArray, OFUIView;

@interface OKPresentationViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKProducerDelegate, OKSynopsisViewDelegate, OKCouchControllerDelegate, OKClickWheelViewDelegate, OKActionResponderPrivate, OKPresentationViewControllerProxyExport, OKActionResponder> {

	BOOL _hasStartedCouchBefore;
	unsigned long long _playbackMode;
	BOOL _rootNavigatorIsReady;
	OKPresentation* _presentation;
	NSMutableArray* _producerPlugins;
	OKProducer* _producer;
	NSString* _mainNavigatorName;
	OKProducerSettings* _producerSettings;
	OFNSOperationQueue* _highSpeedOperationQueue;
	OFNSOperationQueue* _consumingOperationQueue;
	NSMutableDictionary* _navigatorViewControllers;
	OKNavigatorViewController* _mainNavigatorViewController;
	NSString* _resolution;
	CGSize _resolutionSize;
	CGSize _displaySize;
	BOOL _allowsResizing;
	BOOL _keepAspectRatio;
	OKJavaScriptContext* _jsContext;
	NSRecursiveLock* _jsEvaluationInitRecursiveLock;
	NSObject*<OS_dispatch_queue> _jsEvaluationScriptQueue;
	BOOL _jsEvaluationInit;
	NSMutableArray* _audioDuckingStack;
	NSMutableDictionary* _controllerAudioTrackIDs;
	double _audioVolume;
	BOOL _isPaused;
	BOOL _isFinished;
	BOOL _hasAppeared;
	id<OKPresentationViewControllerDelegate> _delegate;
	id<OKPresentationViewControllerEditingDelegate> _editingDelegate;
	id<NSObject> _activityLatency;
	CGPoint _arrowKeyMaxPanVelocity;
	CGPoint _arrowKeyPanAcceleration;
	CGPoint _arrowKeyCurrentPanVelocity;
	double _lastArrowKeyTimestamp;
	BOOL _arrowKeyIsRepeating;
	NSOperationQueue* _prerationOperationQueue;
	OFReachability* _reachability;
	long long _reachabilityStatus;
	BOOL _couchModeLoops;
	BOOL _interactivityEnabled;
	BOOL _isExporting;
	BOOL _rewindAudioOnCouchPotatoLoop;
	BOOL _arrowKeysSendSwipeAndPan;
	BOOL _hasBeenHidden;
	OKPresentationView* presentationView;
	OKResourceManager* _resourceManager;
	OKCouchController* _couchController;
	double _couchInitialDelay;
	double _couchModeDefaultStepDuration;
	double _couchModeIsReadySpinnerDelay;
	double _audioFadeOutDuration;
	OKSynopsisView* _synopsisView;
	OKClickWheelView* _clickWheelView;
	NSArray* _audioURLs;
	double _interactiveTransitionTrackingBoxRadius;
	double _interactiveTransitionProgressThreshold;
	double _interactiveTransitionVelocityThreshold;

}

@property (nonatomic,retain,readonly) OKPresentationView * presentationView; 
@property (nonatomic,retain,readonly) OKPresentation * presentation;                                       //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain,readonly) OKProducer * producer;                                               //@synthesize producer=_producer - In the implementation block
@property (assign,nonatomic) unsigned long long playbackMode;                                              //@synthesize playbackMode=_playbackMode - In the implementation block
@property (nonatomic,retain,readonly) NSString * resolution;                                               //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,readonly) CGSize resolutionSize;                                                      //@synthesize resolutionSize=_resolutionSize - In the implementation block
@property (nonatomic,readonly) CGSize displaySize;                                                         //@synthesize displaySize=_displaySize - In the implementation block
@property (nonatomic,readonly) BOOL keepAspectRatio;                                                       //@synthesize keepAspectRatio=_keepAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL allowsResizing;                                                          //@synthesize allowsResizing=_allowsResizing - In the implementation block
@property (assign,nonatomic) BOOL interactivityEnabled;                                                    //@synthesize interactivityEnabled=_interactivityEnabled - In the implementation block
@property (assign,nonatomic) double couchInitialDelay;                                                     //@synthesize couchInitialDelay=_couchInitialDelay - In the implementation block
@property (assign,nonatomic) BOOL couchModeLoops;                                                          //@synthesize couchModeLoops=_couchModeLoops - In the implementation block
@property (assign,nonatomic) double couchModeDefaultStepDuration;                                          //@synthesize couchModeDefaultStepDuration=_couchModeDefaultStepDuration - In the implementation block
@property (assign,nonatomic) double couchModeIsReadySpinnerDelay;                                          //@synthesize couchModeIsReadySpinnerDelay=_couchModeIsReadySpinnerDelay - In the implementation block
@property (assign,nonatomic) double audioFadeOutDuration;                                                  //@synthesize audioFadeOutDuration=_audioFadeOutDuration - In the implementation block
@property (assign,nonatomic) double audioVolume;                                                           //@synthesize audioVolume=_audioVolume - In the implementation block
@property (nonatomic,retain) NSArray * audioURLs;                                                          //@synthesize audioURLs=_audioURLs - In the implementation block
@property (assign,nonatomic) BOOL rewindAudioOnCouchPotatoLoop;                                            //@synthesize rewindAudioOnCouchPotatoLoop=_rewindAudioOnCouchPotatoLoop - In the implementation block
@property (nonatomic,retain) OKNavigatorViewController * mainNavigatorViewController;                      //@synthesize mainNavigatorViewController=_mainNavigatorViewController - In the implementation block
@property (assign,nonatomic) id<OKPresentationViewControllerDelegate> delegate; 
@property (assign,nonatomic) id<OKPresentationViewControllerEditingDelegate> editingDelegate; 
@property (nonatomic,readonly) OKSynopsisView * synopsisView;                                              //@synthesize synopsisView=_synopsisView - In the implementation block
@property (nonatomic,readonly) OKClickWheelView * clickWheelView;                                          //@synthesize clickWheelView=_clickWheelView - In the implementation block
@property (assign,nonatomic) double interactiveTransitionTrackingBoxRadius;                                //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThreshold;                                //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThreshold;                                //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenHidden;                                                         //@synthesize hasBeenHidden=_hasBeenHidden - In the implementation block
@property (nonatomic,retain,readonly) OKJavaScriptContext * jsContext; 
@property (assign,nonatomic) BOOL arrowKeysSendSwipeAndPan;                                                //@synthesize arrowKeysSendSwipeAndPan=_arrowKeysSendSwipeAndPan - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                             //@synthesize isExporting=_isExporting - In the implementation block
@property (nonatomic,retain,readonly) OKResourceManager * resourceManager;                                 //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,readonly) long long reachabilityStatus;                                               //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (nonatomic,retain,readonly) OFNSOperationQueue * highSpeedOperationQueue;                        //@synthesize highSpeedOperationQueue=_highSpeedOperationQueue - In the implementation block
@property (nonatomic,retain,readonly) OFNSOperationQueue * consumingOperationQueue;                        //@synthesize consumingOperationQueue=_consumingOperationQueue - In the implementation block
@property (readonly) OKCouchController * couchController;                                                  //@synthesize couchController=_couchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OKPageViewController * currentPageViewController; 
@property (readonly) OFUIView * actionView; 
+(Class)viewClass;
+(void)setupJavascriptContext:(id)arg1 ;
-(unsigned long long)playbackMode;
-(void)setPlaybackMode:(unsigned long long)arg1 ;
-(id)visibleMediaObjects;
-(void)instantPlay;
-(void)instantPause;
-(void)audioFinishedPlayingForTrackID:(id)arg1 ;
-(void)restart;
-(void)setInteractivityEnabled:(BOOL)arg1 ;
-(void)setInteractiveTransitionTrackingBoxRadius:(double)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(double)arg1 ;
-(void)setInteractiveTransitionVelocityThreshold:(double)arg1 ;
-(id)initWithPreset:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3 ;
-(BOOL)isPaused;
-(void)setCouchInitialDelay:(double)arg1 ;
-(void)setCouchModeDefaultStepDuration:(double)arg1 ;
-(void)setCouchModeLoops:(BOOL)arg1 ;
-(void)setAudioURLs:(NSArray *)arg1 ;
-(NSArray *)audioURLs;
-(void)setDelegate:(id<OKPresentationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<OKPresentationViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(BOOL)isEditable;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_hasAppeared;
-(void)setEditingDelegate:(id<OKPresentationViewControllerEditingDelegate>)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id<OKPresentationViewControllerEditingDelegate>)editingDelegate;
-(void)commonInit;
-(OFUIView *)actionView;
-(BOOL)isFinished;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)initWithPresentation:(id)arg1 ;
-(id)colorSpace;
-(OKPresentation *)presentation;
-(id)navigatorViewControllerForNavigatorWithName:(id)arg1 ;
-(void)removeAllActionBindings;
-(NSString *)resolution;
-(id)widgetNodeFromWidget:(id)arg1 ;
-(void)updateMotion;
-(CGSize)layoutFactor;
-(CGSize)resolutionSize;
-(OKPageViewController *)currentPageViewController;
-(id)visibleWidgets;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(OFNSOperationQueue *)highSpeedOperationQueue;
-(OFNSOperationQueue *)consumingOperationQueue;
-(double)presentationViewScale;
-(void)endAudioForController:(id)arg1 andTrackID:(id)arg2 ;
-(id)beginAudioForController:(id)arg1 withURL:(id)arg2 andVolume:(float)arg3 ;
-(OKPresentationView *)presentationView;
-(void)synopsisViewDidEnd:(id)arg1 ;
-(void)synopsisViewDidBegin:(id)arg1 ;
-(void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2 ;
-(BOOL)shouldShowSynopsisView;
-(void)synopsisView:(id)arg1 didSelectItem:(id)arg2 ;
-(OKNavigatorViewController *)mainNavigatorViewController;
-(id)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forNavigatorViewController:(id)arg4 pageViewController:(id)arg5 andWidgetView:(id)arg6 ;
-(void)synopsisViewWillBegin:(id)arg1 ;
-(id)widgetViewFromWidget:(id)arg1 ;
-(CGSize)displaySize;
-(id)allActionBindings;
-(id)dynamicsPushBehaviors;
-(void)instantResume;
-(id)visibleMediaItemsForProducer:(id)arg1 ;
-(void)producer:(id)arg1 didProcessLiveAuthoringKeyPaths:(id)arg2 ;
-(void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
-(OKResourceManager *)resourceManager;
-(void)removeActionBinding:(id)arg1 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(void)cancelCouchPotatoIfNeededWithAction:(id)arg1 ;
-(BOOL)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)interactivityEnabled;
-(BOOL)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(id)initWithPresentation:(id)arg1 andMainNavigatorName:(id)arg2 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(void)_startActivityIndicator;
-(BOOL)isActivityIndicatorVisible;
-(void)_stopActivityIndicator:(/*^block*/id)arg1 ;
-(BOOL)_registerProducerPlugin:(id)arg1 ;
-(OKProducer *)producer;
-(void)updateDisplayResolution;
-(void)setMainNavigatorViewController:(OKNavigatorViewController *)arg1 ;
-(id)_registeredProducerPluginWithIdentifier:(id)arg1 ;
-(void)_loadMainNavigatorIfNeeded;
-(void)_rootNavigatorPrepareForDisplay;
-(void)_rootNavigatorWillAppear:(BOOL)arg1 ;
-(void)_prepareInitialCouchPotatoPlayback;
-(void)initWheelController;
-(void)initSynopsisView;
-(void)cancelCouchPotatoPlayback;
-(void)_rootNavigatorDidAppear:(BOOL)arg1 ;
-(void)_startPresentation;
-(void)_startActivityIndicatorWithDelay;
-(BOOL)_prepareNavigationOffscreenWithProgressBlock:(/*^block*/id)arg1 colorSpace:(id)arg2 error:(id*)arg3 ;
-(void)updateActivityIndicatorWithProgress:(double)arg1 ;
-(void)displayPresentation:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_stopActivityIndicatorWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)interactiveTransitionTrackingBoxRadius;
-(double)interactiveTransitionProgressThreshold;
-(double)interactiveTransitionVelocityThreshold;
-(void)_stopPresentation;
-(CGSize)_fitDisplaySizeForRenderSize:(CGSize)arg1 ;
-(void)_delayedPrepareForRefresh;
-(id)displayedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(id)visibleMediaItems;
-(void)navigateToItemAtKeyPath:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_doArrowKeyDownForDirection:(unsigned long long)arg1 atTimestamp:(double)arg2 ;
-(void)_repeatArrowKeyForDirection:(id)arg1 ;
-(void)_addSubWidgetViewsFromSubWidgets:(id)arg1 toWidgetView:(id)arg2 ;
-(OKCouchController *)couchController;
-(void)prepareCouchPotatoPlayback;
-(void)_addSubWidgetNodesFromSubWidgets:(id)arg1 toWidgetNode:(id)arg2 ;
-(id)evaluateScript:(id)arg1 ;
-(void)setPropertyWithValue:(id)arg1 forKey:(id)arg2 inJSObject:(OpaqueJSValueRef)arg3 ;
-(id)evaluateScript:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(CGPoint)convertPointToBackingLayout:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGPoint)convertPointToBackingLayout:(CGPoint)arg1 fromWidget:(id)arg2 ;
-(CGPoint)convertLocationInWindow:(CGPoint)arg1 toPage:(id)arg2 ;
-(double)audioFadeOutDuration;
-(void)fadeAllAudioTracksWithDuration:(double)arg1 ;
-(id)beginAudioForController:(id)arg1 withAVAsset:(id)arg2 andVolume:(float)arg3 ;
-(void)audioStartedPlayingForTrackID:(id)arg1 withAVAsset:(id)arg2 andVolume:(float)arg3 ;
-(void)updateTimeLeft;
-(BOOL)couchControllerCanStartPlayback:(id)arg1 ;
-(void)couchControllerWillStartPlayback:(id)arg1 ;
-(void)couchControllerDidStopPlayback:(id)arg1 ;
-(BOOL)thingsAreReadyInCurrentPageForCouchController:(id)arg1 ;
-(BOOL)couchController:(id)arg1 thingsAreReadyForNextStep:(id)arg2 withProgress:(double*)arg3 ;
-(void)couchControllerStartsWaitingForReadiness:(id)arg1 ;
-(void)couchControllerWaitingForReadiness:(id)arg1 withProgress:(double)arg2 ;
-(void)couchControllerStopsWaitingForReadiness:(id)arg1 ;
-(void)couchControllerPlaybackLooped:(id)arg1 ;
-(void)couchControllerPlaybackCompleted:(id)arg1 ;
-(BOOL)shouldShowPlayIcon;
-(void)clickWheelViewWillAppear:(id)arg1 ;
-(void)clickWheelViewWillDisappear:(id)arg1 ;
-(BOOL)clickWheelViewShouldAppear;
-(void)clickWheelViewMenuButtonPressed:(id)arg1 ;
-(void)clickWheelViewClosePressed:(id)arg1 ;
-(CGPoint)convertLocationInWindow:(CGPoint)arg1 toWidget:(id)arg2 ;
-(void)setInteractiveTransitionTrackingBoxRadiusFromNumber:(id)arg1 ;
-(void)setInteractiveTransitionProgressThresholdFromNumber:(id)arg1 ;
-(void)setInteractiveTransitionVelocityThresholdFromNumber:(id)arg1 ;
-(BOOL)prepareWithProgressBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)prepareForRefreshWithDelay:(double)arg1 ;
-(void)setAllowsResizing:(BOOL)arg1 ;
-(id)cachedNavigatorPageViewControllers;
-(void)_doArrowKeyUpForDirection:(unsigned long long)arg1 atTimestamp:(double)arg2 ;
-(void)allowCouchPlayback;
-(void)preventCouchPlayback;
-(BOOL)canStartCouchPotatoPlayback;
-(void)startCouchPotatoPlayback;
-(void)setCouchModeIsReadySpinnerDelay:(double)arg1 ;
-(void)setAudioVolume:(double)arg1 ;
-(void)fadeMainNavigatorTracksWithDuration:(double)arg1 ;
-(void)audioStartedPlayingForTrackID:(id)arg1 withMediaURL:(id)arg2 andVolume:(float)arg3 ;
-(BOOL)canPanMediaForWidget:(id)arg1 ;
-(BOOL)shouldPanMediaForWidget:(id)arg1 toOffset:(CGPoint)arg2 ;
-(BOOL)canEditTextForWidget:(id)arg1 ;
-(BOOL)shouldChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
-(void)willChangeFocusForTextWidget:(id)arg1 toFocusState:(BOOL)arg2 ;
-(id)visibleItemKeyPaths;
-(long long)reachabilityStatus;
-(double)couchInitialDelay;
-(BOOL)couchModeLoops;
-(double)couchModeDefaultStepDuration;
-(double)couchModeIsReadySpinnerDelay;
-(BOOL)allowsResizing;
-(BOOL)keepAspectRatio;
-(BOOL)isExporting;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)audioVolume;
-(BOOL)rewindAudioOnCouchPotatoLoop;
-(void)setRewindAudioOnCouchPotatoLoop:(BOOL)arg1 ;
-(OKSynopsisView *)synopsisView;
-(OKClickWheelView *)clickWheelView;
-(BOOL)arrowKeysSendSwipeAndPan;
-(void)setArrowKeysSendSwipeAndPan:(BOOL)arg1 ;
-(BOOL)hasBeenHidden;
-(OKJavaScriptContext *)jsContext;
@end

