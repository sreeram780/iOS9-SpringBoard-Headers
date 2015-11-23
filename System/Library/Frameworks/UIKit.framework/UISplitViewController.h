/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, NSString, UIPopoverController, UIView, UIResponder, UISnapshotView, NSArray, UIGestureRecognizer, UITraitCollection, UIViewController, UIFocusContainerGuide;

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegate> {

	id _delegate;
	UIBarButtonItem* _barButtonItem;
	UIBarButtonItem* _displayModeButtonItem;
	NSString* _buttonTitle;
	UIPopoverController* _hiddenPopoverController;
	UIView* _rotationSnapshotView;
	UIResponder* _postTransitionResponder;
	UISnapshotView* _collapsingMasterSnapshotView;
	UISnapshotView* _collapsingDetailSnapshotView;
	double _masterColumnWidth;
	float _gutterWidth;
	float _cornerRadius;
	long long _rotatingFromOrientation;
	long long _lastPresentedOrientation;
	CGRect _rotatingFromMasterViewFrame;
	CGRect _rotatingToMasterViewFrame;
	NSArray* _cornerImageViews;
	UIView* _underBarSeparatorView;
	unsigned long long _slideTransitionCount;
	UIView* _masterBackgroundView;
	BOOL _presentsInFadingPopover;
	BOOL _presentsWithGesture;
	UIGestureRecognizer* _popoverPresentationGestureRecognizer;
	long long _preferredDisplayMode;
	long long _effectiveTargetDisplayMode;
	long long _pendingDisplayModeChangeCount;
	long long _rotatingMasterChange;
	BOOL _useChangingBoundsLayout;
	long long _transitioningMasterChange;
	UITraitCollection* _transitioningToTraitCollection;
	long long _transitioningToInternalMode;
	long long _lastNotifiedDisplayMode;
	CGRect _viewBoundsBeforeCollapse;
	long long _suspendedState;
	struct {
		unsigned invalidDelegateHiddenMasterAspectRatios : 2;
		unsigned delegateHiddenMasterAspectRatios : 2;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
		unsigned resizesDetailOnSlide : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned disableDetailFrameChanges : 1;
		unsigned delegateWantsShowViewController : 1;
		unsigned delegateWantsPrivateShowViewController : 1;
		unsigned delegateWantsShowDetailViewController : 1;
		unsigned delegateWantsPrivateShowDetailViewController : 1;
		unsigned delegateWantsCollapseSecondaryViewController : 1;
		unsigned delegateWantsPrivateCollapseSecondaryViewController : 1;
		unsigned delegateWantsSeparateSecondaryViewController : 1;
		unsigned delegateWantsPrivateSeparateSecondaryViewController : 1;
		unsigned delegateWantsPrimaryViewControllerForCollapse : 1;
		unsigned delegateWantsPrivatePrimaryViewControllerForCollapse : 1;
		unsigned delegateWantsPrimaryViewControllerForExpanding : 1;
		unsigned delegateWantsPrivatePrimaryViewControllerForExpanding : 1;
		unsigned collapsedState : 2;
		unsigned primaryHidingState : 2;
		unsigned primaryHidingStateForCurrentOrientation : 2;
		unsigned delegateWantsWillChangeToDisplayMode : 1;
		unsigned delegateWantsTargetDisplayModeForAction : 1;
		unsigned delegateCanModifyFirstResponderOnTraitCollectionTransition : 1;
		unsigned pendingPresentMasterViewController : 1;
		unsigned pendingUpdateTargetDisplayMode : 1;
		unsigned collapsingClockwise : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned inWillTransitionToSize : 1;
		unsigned hasTransitioningToInternalMode : 1;
		unsigned delegateImplementsPrivateIsPrimaryVisible : 1;
		unsigned delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1;
	}  _splitViewControllerFlags;
	BOOL _resizeForKeyboard;
	NSString* _displayModeButtonItemTitle;
	unsigned long long _lastFocusedChildViewControllerIndex;
	double _preferredPrimaryColumnWidthFraction;
	double _minimumPrimaryColumnWidth;
	double _maximumPrimaryColumnWidth;
	UIViewController* __preservedDetailController;
	/*^block*/id __didChangeBoundsBlock;
	/*^block*/id __clearPreventRotationHook;
	UIFocusContainerGuide* _masterFocusContainerGuide;
	UIFocusContainerGuide* _detailFocusContainerGuide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                                                          //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (nonatomic,readonly) long long displayMode; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction;                                                                        //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumPrimaryColumnWidth;                                                                                  //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumPrimaryColumnWidth;                                                                                  //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (nonatomic,readonly) double primaryColumnWidth; 
@property (assign,nonatomic) float masterColumnWidth; 
@property (assign,nonatomic) BOOL resizeForKeyboard;                                                                                            //@synthesize resizeForKeyboard=_resizeForKeyboard - In the implementation block
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (nonatomic,readonly) BOOL hidesMasterViewInLandscape; 
@property (assign,setter=_setResizesDetailOnSlide:,nonatomic) BOOL _resizesDetailOnSlide; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle;                                       //@synthesize displayModeButtonItemTitle=_displayModeButtonItemTitle - In the implementation block
@property (assign,setter=_setPresentsInFadingPopover:,nonatomic) BOOL _presentsInFadingPopover; 
@property (setter=_setPreservedDetailController:,nonatomic,retain) UIViewController * _preservedDetailController;                               //@synthesize _preservedDetailController=__preservedDetailController - In the implementation block
@property (setter=_setDidChangeBoundsBlock:,getter=_didChangeBoundsBlock,nonatomic,copy) id _didChangeBoundsBlock;                              //@synthesize _didChangeBoundsBlock=__didChangeBoundsBlock - In the implementation block
@property (setter=_setClearPreventRotationHook:,nonatomic,copy) id _clearPreventRotationHook;                                                   //@synthesize _clearPreventRotationHook=__clearPreventRotationHook - In the implementation block
@property (getter=_lastFocusedChildViewControllerIndex,nonatomic,readonly) unsigned long long lastFocusedChildViewControllerIndex;              //@synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex - In the implementation block
@property (getter=_masterFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * masterFocusContainerGuide;                             //@synthesize masterFocusContainerGuide=_masterFocusContainerGuide - In the implementation block
@property (getter=_detailFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * detailFocusContainerGuide;                             //@synthesize detailFocusContainerGuide=_detailFocusContainerGuide - In the implementation block
+(BOOL)doesOverrideSupportedInterfaceOrientations;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+(double)_defaultGutterWidthInView:(id)arg1 ;
+(BOOL)_forcePresentsInSlidingPopover;
+(BOOL)_forcePresentsWithGesture;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_allContainedViewControllers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)applicationWillSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(void)applicationDidResume;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_commonInit;
-(id)preferredFocusedView;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_updateChildContentMargins;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)unloadViewForced:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(id)masterViewController;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(void)_getRotationContentSettings:(SCD_Struct_UI35*)arg1 ;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)__viewWillLayoutSubviews;
-(id)detailViewController;
-(id)_primaryContentResponder;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(long long)displayMode;
-(CGRect)_masterViewFrame;
-(CGRect)_detailViewFrame;
-(void)_setPresentsInFadingPopover:(BOOL)arg1 ;
-(void)_setUpFocusContainerGuides;
-(void)_removeCollapsingSnapshotViews;
-(void)loadSubviews;
-(void)_loadNewSubviews:(id)arg1 ;
-(void)_updateTargetDisplayMode;
-(long long)_primaryHidingStateForCurrentOrientation;
-(long long)_primaryHidingState;
-(long long)_effectivePrimaryHidingState;
-(BOOL)_hidesMasterViewInCurrentOrientation;
-(BOOL)_presentsInFadingPopover;
-(BOOL)_delegateUsesLegacySlideSPI;
-(BOOL)_isMasterPopoverVisible;
-(BOOL)_isHidesMasterInPortraitInvalid;
-(void)_setDelegateHidesMaster:(BOOL)arg1 inAspectRatio:(long long)arg2 ;
-(BOOL)_isHidesMasterInLandscapeInvalid;
-(BOOL)_effectivePresentsWithGesture;
-(BOOL)_hasMasterViewController;
-(void)_setupHiddenPopoverControllerWithViewController:(id)arg1 ;
-(unsigned long long)_targetEdgeForPopover;
-(long long)_effectiveTargetDisplayMode;
-(void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1 ;
-(void)_updateDelegateHiddenMasterAspectRatios;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 ;
-(BOOL)_isMasterViewShown;
-(CGRect)_masterViewFrame:(CGRect)arg1 ;
-(CGRect)_detailViewFrameWithPopoverControllerFrame:(CGRect)arg1 ;
-(float)gutterWidth;
-(CGRect)_detailViewFrame:(CGRect)arg1 ;
-(void)popoverWillAppear:(id)arg1 ;
-(BOOL)_resizesDetailOnSlide;
-(void)toggleMasterVisible:(id)arg1 ;
-(double)primaryColumnWidth;
-(long long)preferredDisplayMode;
-(BOOL)_isBasicallyHorizontallyCompact;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 isCompact:(BOOL)arg2 ;
-(double)preferredPrimaryColumnWidthFraction;
-(double)_defaultMaximumPrimaryColumnWidthForSize:(CGSize)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(double)maximumPrimaryColumnWidth;
-(BOOL)isCollapsed;
-(UIViewController *)_preservedDetailController;
-(BOOL)_canDisplayHostedMaster;
-(BOOL)_canSlideMaster;
-(void)_viewControllerHiding:(id)arg1 ;
-(void)_setMasterOverrideTraitCollectionActive:(BOOL)arg1 ;
-(void)_updateDisplayModeButtonItem;
-(void)_prepareForCompactLayout;
-(void)_setCollapsedState:(long long)arg1 ;
-(id)_childContainingSender:(id)arg1 ;
-(void)_setPreservedDetailController:(id)arg1 ;
-(id)_primaryViewControllerForCollapsing;
-(id)_secondaryViewControllerForCollapsing;
-(void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(id)_primaryViewControllerForExpanding;
-(id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(id)_didChangeBoundsBlock;
-(void)_setDidChangeBoundsBlock:(/*^block*/id)arg1 ;
-(void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1 ;
-(void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_invokeDidChangeBoundsBlock;
-(BOOL)_isTransitioningFromCollapsedToSeparated;
-(void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_didTransitionTraitCollection;
-(long long)_medusaState;
-(BOOL)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2 ;
-(BOOL)hidesMasterViewInPortrait;
-(BOOL)hidesMasterViewInLandscape;
-(BOOL)_isLandscape;
-(void)_showMasterViewAnimated:(BOOL)arg1 ;
-(BOOL)presentsWithGesture;
-(void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(BOOL)arg2 ;
-(id)_defaultDisplayModes;
-(void)_displayModeWillChangeTo:(long long)arg1 ;
-(void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1 ;
-(void)_setPrimaryHidingState:(long long)arg1 ;
-(void)_dismissMasterViewController:(BOOL)arg1 ;
-(void)_presentMasterViewController:(BOOL)arg1 ;
-(void)_displayModeDidChange;
-(void)_cacheEffectiveTargetDisplayMode;
-(long long)_defaultTargetDisplayMode;
-(double)_masterPresentationAnimationDuration;
-(NSString *)_displayModeButtonItemTitle;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(id)_clearPreventRotationHook;
-(void)_setClearPreventRotationHook:(/*^block*/id)arg1 ;
-(BOOL)_shouldPreventAutorotation;
-(BOOL)_isCollapsed;
-(void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)_lastFocusedChildViewControllerIndex;
-(long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2 ;
-(long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(CGSize)arg3 medusaState:(long long)arg4 ;
-(void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3 ;
-(void)_setupRoundedCorners;
-(long long)_prepareToTransitionToViewSize:(CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4 ;
-(void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3 ;
-(void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2 ;
-(BOOL)_isRotating;
-(void)snapshotMasterView;
-(void)snapshotAllViews;
-(void)_setupUnderBarSeparatorView;
-(void)_setDetailViewFrame:(CGRect)arg1 ;
-(void)_removeRoundedCorners;
-(void)_updateMasterViewControllerFrame;
-(id)_masterFocusContainerGuide;
-(id)_detailFocusContainerGuide;
-(id)_primaryDimmingView;
-(float)leftColumnWidth;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1 ;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(void)setPreferredLeftColumnWidth:(float)arg1 ;
-(float)preferredLeftColumnWidth;
-(void)setGutterWidth:(float)arg1 ;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(id)displayModeButtonItem;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1 ;
-(void)_setResizesDetailOnSlide:(BOOL)arg1 ;
-(void)_popoverController:(id)arg1 willAnimateToFrame:(CGRect)arg2 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(BOOL)resizeForKeyboard;
-(void)setResizeForKeyboard:(BOOL)arg1 ;
@end

