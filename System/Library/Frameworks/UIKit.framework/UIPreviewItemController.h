/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol UIPreviewItemDelegate;
@class MLULookupItem, UIPreviewInteractionController, UIView, UIImageView, CADisplayLink, NSDictionary, UIViewController, NSArray, UIGestureRecognizer, NSString;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver> {

	MLULookupItem* _lookupItem;
	UIPreviewInteractionController* _previewInteractionController;
	UIView* _previewIndicatorView;
	UIImageView* _previewIndicatorImageView;
	UIView* _previewIndicatorSnapshotView;
	CADisplayLink* _previewIndicatorDisplayLink;
	double _lastPreviewIndicatorAnimationTimestamp;
	double _previewIndicatorAnimationTargetAlpha;
	CGRect _previewIndicatorBoundingRect;
	BOOL _previewIndicatorUsesStandardAnimation;
	BOOL _contentManagedByClient;
	UIPreviewItemController* _strongSelf;
	BOOL _interactionInProgress;
	id<UIPreviewItemDelegate> _delegate;
	long long _type;
	NSDictionary* _previewData;
	UIViewController* _presentedViewController;
	UIViewController* _presentingViewController;
	UIView* _view;

}

@property (assign,nonatomic) id<UIPreviewItemDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewData;                                                //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationSecondaryGestureRecognizer; 
@property (nonatomic,readonly) UIViewController * presentedViewController;                                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;                               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) BOOL interactionInProgress;                                                //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                      //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UIPreviewItemDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UIPreviewItemDelegate>)delegate;
-(UIView *)view;
-(UIViewController *)presentingViewController;
-(long long)type;
-(NSArray *)gestureRecognizers;
-(UIViewController *)presentedViewController;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCommitToViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3 ;
-(BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5 ;
-(id)initWithView:(id)arg1 ;
-(UIGestureRecognizer *)presentationSecondaryGestureRecognizer;
-(BOOL)interactionInProgress;
-(NSDictionary *)previewData;
-(BOOL)_shouldCancelPreviewWithNegativeFeedback;
-(id)previewViewControllerForPosition:(CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3 ;
-(void)stopInteraction;
-(void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(BOOL)arg2 ;
-(void)updatePreviewIndicatorAnimation:(id)arg1 ;
-(void)startInteraction;
-(void)setupPreviewIndicatorInSourceView:(id)arg1 ;
-(void)clearPreviewIndicator;
@end

