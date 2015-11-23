/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_NCWidgetViewController_Service_IPC.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>

@protocol NCWidgetProviding, OS_dispatch_queue, UIViewControllerAnimatedTransitioning;
@class UIViewController, NSString, UIView, NSMapTable, NSObject, _UIViewControllerTransitionContext;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate> {

	UIViewController*<NCWidgetProviding> _contentProvidingViewController;
	NSString* _widgetIdentifier;
	UIView* _contentView;
	UIEdgeInsets _clientMarginInsets;
	double _clientPreferredViewHeight;
	NSMapTable* _activeTransitionContextsByRequestID;
	NSObject*<OS_dispatch_queue> _remoteViewControllerProxyQueue;
	id<UIViewControllerAnimatedTransitioning> _transitionController;
	_UIViewControllerTransitionContext* _activeTransitionContext;
	NSMapTable* _wrappedAppearStatesToOpenTransactionIDs;
	struct {
		unsigned implementsPerformUpdateWithCompletionHandler : 1;
		unsigned implementsMarginInsets : 1;
		unsigned implementsContentWidthDidChange : 1;
	}  _contentProvidingViewControllerFlags;

}

@property (getter=_contentProvidingViewController,nonatomic,retain) UIViewController*<NCWidgetProviding> contentProvidingViewController;              //@synthesize contentProvidingViewController=_contentProvidingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_reduceTransparencyDidChange:(id)arg1 ;
+(void)initialize;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)__setWidgetIdentifier:(id)arg1 ;
-(void)__viewWillTransitionToSize:(CGSize)arg1 requestIdentifier:(id)arg2 ;
-(void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1 ;
-(void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1 ;
-(void)__requestEncodedLayerTreeWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(double)_sanitizedClientContentWidthForProposedHostWidth:(double)arg1 ;
-(void)_setContentProvidingViewController:(id)arg1 ;
-(void)_requestMarginInsets;
-(CGRect)_sanitizedClientFrameFromHostSize:(CGSize)arg1 ;
-(void)_enqueueProxyRequest:(/*^block*/id)arg1 ;
-(void)_closeTransactionWithAppearState:(int)arg1 ;
-(id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(BOOL)arg2 createIfNecessary:(BOOL)arg3 ;
-(void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2 ;
-(id)_contentProvidingViewController;
-(id)_transitionContextForRequestIdentifier:(id)arg1 ;
-(id)_customAnimator:(BOOL)arg1 ;
-(void)_encodeLayerTree:(/*^block*/id)arg1 ;
-(void)_performUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContentProvidingViewController:(UIViewController*<NCWidgetProviding>)arg1 ;
-(void)dealloc;
-(void)_openURL:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
@end

