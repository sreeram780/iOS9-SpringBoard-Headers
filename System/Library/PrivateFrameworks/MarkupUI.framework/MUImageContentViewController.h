/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MUContentViewControllerProtocol.h>

@class AKController, NSArray, UIScrollView, UIImageView, NSURL, NSString;

@interface MUImageContentViewController : UIViewController <UIScrollViewDelegate, MUContentViewControllerProtocol> {

	CGPoint _pointToCenterAfterRotation;
	double _scaleToRestoreAfterRotation;
	BOOL _inDoubleTapZoom;
	AKController* _annotationController;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	double _initialContentScaleInModel;
	double _downsampledImageScale;
	NSURL* _fileURL;
	/*^block*/id _loadCompletionBlock;
	UIEdgeInsets _edgeInsets;

}

@property (__weak) AKController * annotationController;                           //@synthesize annotationController=_annotationController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                             //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign) double initialContentScaleInModel;                             //@synthesize initialContentScaleInModel=_initialContentScaleInModel - In the implementation block
@property (assign) double downsampledImageScale;                                  //@synthesize downsampledImageScale=_downsampledImageScale - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL inDoubleTapZoom;                                //@synthesize inDoubleTapZoom=_inDoubleTapZoom - In the implementation block
@property (copy) id loadCompletionBlock;                                          //@synthesize loadCompletionBlock=_loadCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * sourceContentReplacedAnnotationIndexes; 
-(void)_doubleTap:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(UIEdgeInsets)edgeInsets;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(CGRect)visibleContentRect;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSURL *)fileURL;
-(AKController *)annotationController;
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
-(void)setImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setupForController:(id)arg1 ;
-(id)contentSnapshot;
-(void)_updateMinMaxZoomFactor;
-(BOOL)_imageIsSmallerThanView;
-(double)_zoomToFitZoomFactor;
-(double)downsampledImageScale;
-(void)setInitialContentScaleInModel:(double)arg1 ;
-(void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)setLoadCompletionBlock:(id)arg1 ;
-(id)loadCompletionBlock;
-(void)_downsampleImageForDisplay:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDownsampledImageScale:(double)arg1 ;
-(double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
-(double)_zoomToFitZoomFactorInBounds:(CGRect)arg1 ;
-(CGRect)_zoomRectForScale:(double)arg1 withCenter:(CGPoint)arg2 ;
-(BOOL)_imageIsSize:(CGSize)arg1 isSmallerThanSize:(CGSize)arg2 ;
-(void)_prepareToRotate;
-(void)_recoverFromRotation;
-(double)initialContentScaleInModel;
-(BOOL)inDoubleTapZoom;
-(void)setInDoubleTapZoom:(BOOL)arg1 ;
-(CGPoint)_maximumContentOffset;
-(CGPoint)_minimumContentOffset;
-(void)setFileURL:(NSURL *)arg1 ;
@end

