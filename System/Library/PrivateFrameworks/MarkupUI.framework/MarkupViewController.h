/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AKControllerDelegateProtocol.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UIToolbarDelegate.h>

@protocol MUContentViewControllerProtocol, MarkupViewControllerDelegate;
@class AKController, UIToolbar, UINavigationBar, UIViewController, NSUndoManager, NSString, NSArray, NSLayoutConstraint, UIView;

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, UINavigationBarDelegate, UIToolbarDelegate> {

	BOOL _toolbarHidden;
	BOOL _shapeDetectionEnabled;
	BOOL _allowShakeToUndo;
	BOOL _userDidCancel;
	BOOL _useFancyTransition;
	BOOL _isAnimatingMarkupExtensionTransition;
	AKController* _annotationController;
	UIToolbar* _toolbar;
	long long _toolbarPosition;
	UINavigationBar* _navBar;
	UIViewController*<MUContentViewControllerProtocol> _contentViewController;
	NSUndoManager* _akUndoManager;
	id<MarkupViewControllerDelegate> _delegate;
	NSString* _sourceContentType;
	id _sourceContent;
	id _digestedSourceContent;
	NSArray* _sourceContentReplacedAnnotationIndexes;
	NSLayoutConstraint* _toolbarTopConstraint;
	NSLayoutConstraint* _toolbarTopAttachedConstraint;
	NSLayoutConstraint* _toolbarBottomConstraint;
	NSString* _preferredFileDisplayName;
	UIView* _contentContainerView;
	UIView* _transitionDimmingView;
	UIView* _whiteView;

}

@property (retain) AKController * annotationController;                                                   //@synthesize annotationController=_annotationController - In the implementation block
@property (retain) UIToolbar * toolbar;                                                                   //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,getter=isToolbarHidden,nonatomic) BOOL toolbarHidden;                                   //@synthesize toolbarHidden=_toolbarHidden - In the implementation block
@property (assign,nonatomic) long long toolbarPosition;                                                   //@synthesize toolbarPosition=_toolbarPosition - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                                    //@synthesize navBar=_navBar - In the implementation block
@property (retain) UIViewController*<MUContentViewControllerProtocol> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) NSString * outputType; 
@property (assign,getter=isShapeDetectionEnabled,nonatomic) BOOL shapeDetectionEnabled;                   //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (nonatomic,retain) NSUndoManager * akUndoManager;                                               //@synthesize akUndoManager=_akUndoManager - In the implementation block
@property (assign,nonatomic) BOOL allowShakeToUndo;                                                       //@synthesize allowShakeToUndo=_allowShakeToUndo - In the implementation block
@property (assign,nonatomic,__weak) id<MarkupViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * sourceContentType;                                                          //@synthesize sourceContentType=_sourceContentType - In the implementation block
@property (nonatomic,retain) id sourceContent;                                                            //@synthesize sourceContent=_sourceContent - In the implementation block
@property (retain) id digestedSourceContent;                                                              //@synthesize digestedSourceContent=_digestedSourceContent - In the implementation block
@property (retain) NSArray * sourceContentReplacedAnnotationIndexes;                                      //@synthesize sourceContentReplacedAnnotationIndexes=_sourceContentReplacedAnnotationIndexes - In the implementation block
@property (retain) NSLayoutConstraint * toolbarTopConstraint;                                             //@synthesize toolbarTopConstraint=_toolbarTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * toolbarTopAttachedConstraint;                                     //@synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint - In the implementation block
@property (retain) NSLayoutConstraint * toolbarBottomConstraint;                                          //@synthesize toolbarBottomConstraint=_toolbarBottomConstraint - In the implementation block
@property (assign) BOOL userDidCancel;                                                                    //@synthesize userDidCancel=_userDidCancel - In the implementation block
@property (nonatomic,copy) NSString * preferredFileDisplayName;                                           //@synthesize preferredFileDisplayName=_preferredFileDisplayName - In the implementation block
@property (retain) UIView * contentContainerView;                                                         //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (retain) UIView * transitionDimmingView;                                                        //@synthesize transitionDimmingView=_transitionDimmingView - In the implementation block
@property (retain) UIView * whiteView;                                                                    //@synthesize whiteView=_whiteView - In the implementation block
@property (assign) BOOL useFancyTransition;                                                               //@synthesize useFancyTransition=_useFancyTransition - In the implementation block
@property (assign) BOOL isAnimatingMarkupExtensionTransition;                                             //@synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(Class)viewControllerClassForUTI:(CFStringRef)arg1 ;
-(BOOL)userDidCancel;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(UIView *)contentContainerView;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MarkupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MarkupViewControllerDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setData:(id)arg1 ;
-(void)_commonInit;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController*<MUContentViewControllerProtocol>)contentViewController;
-(void)viewDidLoad;
-(UIToolbar *)toolbar;
-(BOOL)isToolbarHidden;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setContentViewController:(UIViewController*<MUContentViewControllerProtocol>)arg1 ;
-(void)delete:(id)arg1 ;
-(void)done:(id)arg1 ;
-(NSString *)outputType;
-(AKController *)annotationController;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2 ;
-(id)undoManagerForAnnotationController:(id)arg1 ;
-(void)duplicate:(id)arg1 ;
-(void)editTextAnnotation:(id)arg1 ;
-(void)setShapeDetectionEnabled:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2 ;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5 ;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2 ;
-(BOOL)controllerShouldDetectFormElements:(id)arg1 ;
-(void)controllerDidEnterToolMode:(id)arg1 ;
-(void)controllerDidExitToolMode:(id)arg1 ;
-(BOOL)shouldPlaceFormElementAtPoint:(CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(BOOL)shouldPlaceProposedFormElementAtRect:(CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(void)setAnnotationController:(AKController *)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setSourceContent:(id)arg1 ;
-(void)setDigestedSourceContent:(id)arg1 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(CGRect)_containerBounds;
-(BOOL)_validateAnimationDictionary:(id)arg1 isEntering:(BOOL)arg2 ;
-(void)setUseFancyTransition:(BOOL)arg1 ;
-(void)_setupContainerAndDimmingViews;
-(BOOL)useFancyTransition;
-(void)_animateEnteringMarkupWithInfo:(id)arg1 ;
-(void)_setData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPreferredFileDisplayName:(NSString *)arg1 ;
-(void)_bailFailedAnimateEnterMarkup;
-(void)_createCancelDoneNavBar;
-(void)_adjustFormSheetFrameToFitSize:(CGSize)arg1 ;
-(void)_adjustContentInsetsForBars;
-(void)_updateAppearanceForTraitCollection:(id)arg1 ;
-(void)_updateConstraintsForBarPosition:(long long)arg1 ;
-(void)_updateAndLoadSourceContent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)sourceContentType;
-(void)_writeToDataConsumer:(CGDataConsumerRef)arg1 ;
-(void)_saveEditing:(id)arg1 ;
-(void)setUserDidCancel:(BOOL)arg1 ;
-(id)digestedSourceContent;
-(NSArray *)sourceContentReplacedAnnotationIndexes;
-(void)_teardownContentViewController;
-(void)_loadSourceContentWithCompletion:(/*^block*/id)arg1 ;
-(id)sourceContent;
-(void)_installContentViewControllerForUTI:(id)arg1 ;
-(NSString *)preferredFileDisplayName;
-(void)setSourceContentType:(NSString *)arg1 ;
-(void)setAkUndoManager:(NSUndoManager *)arg1 ;
-(void)setSourceContentReplacedAnnotationIndexes:(NSArray *)arg1 ;
-(BOOL)isShapeDetectionEnabled;
-(id)_toolbarTintColor;
-(id)_toolbarItemTintColor;
-(long long)toolbarPosition;
-(NSLayoutConstraint *)toolbarTopConstraint;
-(NSLayoutConstraint *)toolbarTopAttachedConstraint;
-(NSLayoutConstraint *)toolbarBottomConstraint;
-(void)setToolbarTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolbarTopAttachedConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolbarBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_navBarTitleColor;
-(BOOL)allowShakeToUndo;
-(NSUndoManager *)akUndoManager;
-(void)animateExitWithInfo:(id)arg1 ;
-(void)_animateExitWithInfo:(id)arg1 ;
-(void)setTransitionDimmingView:(UIView *)arg1 ;
-(UIView *)transitionDimmingView;
-(BOOL)isAnimatingMarkupExtensionTransition;
-(UIView *)whiteView;
-(void)setWhiteView:(UIView *)arg1 ;
-(void)setIsAnimatingMarkupExtensionTransition:(BOOL)arg1 ;
-(CGAffineTransform)_transformToHideContainerViewBehindBounds:(CGRect)arg1 ;
-(CGRect)_rectBetweenNavAndToolbar;
-(void)setToolbarPosition:(long long)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(void)setAllowShakeToUndo:(BOOL)arg1 ;
-(void)setFileURL:(id)arg1 ;
@end

