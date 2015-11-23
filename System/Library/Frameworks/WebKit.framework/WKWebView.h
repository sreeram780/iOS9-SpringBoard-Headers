/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class _SFSecurityInfo, WKBrowsingContextHandle, NSURL, NSArray, NSString, NSData, _WKSessionState, _WKWebViewPrintFormatter, WKWebViewConfiguration, WKBackForwardList, UIScrollView;

@interface WKWebView : UIView <UIScrollViewDelegate> {

	RetainPtr<WKWebViewConfiguration>* _configuration;
	RefPtr<WebKit::WebPageProxy>* _page;
	unsigned long long _activeFocusedStateRetainCount;
	unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> >* _navigationState;
	unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> >* _uiDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;
	unsigned long long _observedRenderingProgressEvents;
	WeakObjCPtr<id<_WKFormDelegate> > _formDelegate;
	RetainPtr<WKScrollView>* _scrollView;
	RetainPtr<WKContentView>* _contentView;
	BOOL _overridesMinimumLayoutSize;
	CGSize _minimumLayoutSizeOverride;
	BOOL _overridesMaximumUnobscuredSize;
	CGSize _maximumUnobscuredSizeOverride;
	CGRect _inputViewBounds;
	double _viewportMetaTagWidth;
	BOOL _allowsLinkPreview;
	UIEdgeInsets _obscuredInsets;
	BOOL _haveSetObscuredInsets;
	BOOL _isChangingObscuredInsetsInteractively;
	long long _interfaceOrientationOverride;
	BOOL _overridesInterfaceOrientation;
	BOOL _hasCommittedLoadForMainFrame;
	BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
	unsigned long long _firstPaintAfterCommitLoadTransactionID;
	int _dynamicViewportUpdateMode;
	CATransform3D _resizeAnimationTransformAdjustments;
	unsigned long long _resizeAnimationTransformTransactionID;
	RetainPtr<UIView>* _resizeAnimationView;
	double _lastAdjustmentForScroller;
	Optional<CGRect> _frozenVisibleContentRect;
	Optional<CGRect> _frozenUnobscuredContentRect;
	BOOL _needsToRestoreExposedRect;
	FloatRect _exposedRectToRestore;
	BOOL _needsToRestoreUnobscuredCenter;
	FloatPoint _unobscuredCenterToRestore;
	unsigned long long _firstTransactionIDAfterPageRestore;
	double _scaleToRestore;
	unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> >* _gestureController;
	BOOL _allowsBackForwardNavigationGestures;
	RetainPtr<UIView<WKWebViewContentProvider> >* _customContentView;
	RetainPtr<UIView>* _customContentFixedOverlayView;
	Color _scrollViewBackgroundColor;
	BOOL _delayUpdateVisibleContentRects;
	BOOL _hadDelayedUpdateVisibleContentRects;
	BOOL _pageIsPrintingToPDF;
	RetainPtr<CGPDFDocument *>* _printedDocument;
	Vector<std::__1::function<void ()>, 0, WTF::CrashOnOverflow, 16>* _snapshotsDeferredDuringResize;

}

@property (setter=_sf_setSecurityInfo:,nonatomic,retain) _SFSecurityInfo * _sf_securityInfo; 
@property (assign,setter=_setPrintedDocument:,nonatomic) CGPDFDocumentRef _printedDocument; 
@property (nonatomic,readonly) id _remoteObjectRegistry; 
@property (nonatomic,readonly) WKBrowsingContextHandle * _handle; 
@property (assign,setter=_setObservedRenderingProgressEvents:,nonatomic) unsigned long long _observedRenderingProgressEvents; 
@property (assign,setter=_setHistoryDelegate:,nonatomic,__weak) id<WKHistoryDelegatePrivate> _historyDelegate; 
@property (nonatomic,readonly) NSURL * _unreachableURL; 
@property (nonatomic,readonly) NSArray * _certificateChain; 
@property (nonatomic,readonly) NSURL * _committedURL; 
@property (nonatomic,readonly) NSString * _MIMEType; 
@property (nonatomic,readonly) NSString * _userAgent; 
@property (setter=_setApplicationNameForUserAgent:,copy) NSString * _applicationNameForUserAgent; 
@property (setter=_setCustomUserAgent:,copy) NSString * _customUserAgent; 
@property (assign,setter=_setUserContentExtensionsEnabled:,nonatomic) BOOL _userContentExtensionsEnabled; 
@property (nonatomic,readonly) int _webProcessIdentifier; 
@property (assign,setter=_setEditable:,getter=_isEditable,nonatomic) BOOL _editable; 
@property (nonatomic,readonly) NSData * _sessionStateData; 
@property (nonatomic,readonly) _WKSessionState * _sessionState; 
@property (assign,setter=_setAllowsRemoteInspection:,nonatomic) BOOL _allowsRemoteInspection; 
@property (assign,setter=_setAddsVisitedLinks:,nonatomic) BOOL _addsVisitedLinks; 
@property (nonatomic,readonly) BOOL _networkRequestsInProgress; 
@property (getter=_isShowingNavigationGestureSnapshot,nonatomic,readonly) BOOL _showingNavigationGestureSnapshot; 
@property (assign,setter=_setLayoutMode:,nonatomic) unsigned long long _layoutMode; 
@property (assign,setter=_setFixedLayoutSize:,nonatomic) CGSize _fixedLayoutSize; 
@property (assign,setter=_setMinimumViewSize:,nonatomic) CGSize _minimumViewSize; 
@property (assign,setter=_setViewScale:,nonatomic) double _viewScale; 
@property (nonatomic,readonly) CGSize _minimumLayoutSizeOverride; 
@property (nonatomic,readonly) CGSize _maximumUnobscuredSizeOverride; 
@property (assign,setter=_setObscuredInsets:,nonatomic) UIEdgeInsets _obscuredInsets; 
@property (assign,setter=_setInterfaceOrientationOverride:,nonatomic) long long _interfaceOrientationOverride; 
@property (assign,setter=_setBackgroundExtendsBeyondPage:,nonatomic) BOOL _backgroundExtendsBeyondPage; 
@property (getter=_isDisplayingPDF,nonatomic,readonly) BOOL _displayingPDF; 
@property (nonatomic,readonly) NSData * _dataForDisplayedPDF; 
@property (nonatomic,readonly) NSString * _suggestedFilenameForDisplayedPDF; 
@property (nonatomic,readonly) double _viewportMetaTagWidth; 
@property (nonatomic,readonly) _WKWebViewPrintFormatter * _webViewPrintFormatter; 
@property (assign,setter=_setPaginationMode:,nonatomic) long long _paginationMode; 
@property (assign,setter=_setPaginationBehavesLikeColumns:,nonatomic) BOOL _paginationBehavesLikeColumns; 
@property (assign,setter=_setPageLength:,nonatomic) double _pageLength; 
@property (assign,setter=_setGapBetweenPages:,nonatomic) double _gapBetweenPages; 
@property (readonly) unsigned long long _pageCount; 
@property (nonatomic,readonly) BOOL _supportsTextZoom; 
@property (assign,setter=_setTextZoomFactor:,nonatomic) double _textZoomFactor; 
@property (assign,setter=_setPageZoomFactor:,nonatomic) double _pageZoomFactor; 
@property (assign,setter=_setDiagnosticLoggingDelegate:,nonatomic,__weak) id<_WKDiagnosticLoggingDelegate> _diagnosticLoggingDelegate; 
@property (assign,setter=_setFindDelegate:,nonatomic,__weak) id<_WKFindDelegate> _findDelegate; 
@property (assign,setter=_setFormDelegate:,nonatomic,__weak) id<_WKFormDelegate> _formDelegate; 
@property (getter=_isDisplayingStandaloneImageDocument,nonatomic,readonly) BOOL _displayingStandaloneImageDocument; 
@property (getter=_isDisplayingStandaloneMediaDocument,nonatomic,readonly) BOOL _displayingStandaloneMediaDocument; 
@property (assign,setter=_setScrollPerformanceDataCollectionEnabled:,nonatomic) BOOL _scrollPerformanceDataCollectionEnabled; 
@property (nonatomic,readonly) NSArray * _scrollPerformanceData; 
@property (assign,setter=_setAllowsMediaDocumentInlinePlayback:,getter=_allowsMediaDocumentInlinePlayback,nonatomic) BOOL _allowsMediaDocumentInlinePlayback; 
@property (nonatomic,copy,readonly) WKWebViewConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<WKNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<WKUIDelegate> UIDelegate; 
@property (nonatomic,readonly) WKBackForwardList * backForwardList; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,copy,readonly) NSArray * certificateChain; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (assign,nonatomic) BOOL allowsBackForwardNavigationGestures; 
@property (nonatomic,copy) NSString * customUserAgent; 
@property (assign,nonatomic) BOOL allowsLinkPreview; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) UIEdgeInsets _computedContentInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sf_setSecurityInfo:(id)arg1 ;
-(_SFSecurityInfo *)_sf_securityInfo;
-(Class)_printFormatterClass;
-(void)_endPrinting;
-(long long)_computePageCountAndStartDrawingToPDFForFrame:(id)arg1 printInfo:(const PrintInfo*)arg2 firstPage:(unsigned)arg3 computedTotalScaleFactor:(double*)arg4 ;
-(CGPDFDocumentRef)_printedDocument;
-(void)_setPrintedDocument:(CGPDFDocumentRef)arg1 ;
-(BOOL)_isEditable;
-(WKBrowsingContextHandle *)_handle;
-(void)_close;
-(unsigned long long)_pageCount;
-(void)_setFixedLayoutSize:(CGSize)arg1 ;
-(CGSize)_fixedLayoutSize;
-(id<_WKFormDelegate>)_formDelegate;
-(long long)_paginationMode;
-(void)_setPaginationMode:(long long)arg1 ;
-(BOOL)_paginationBehavesLikeColumns;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(double)_pageLength;
-(void)_setPageLength:(double)arg1 ;
-(double)_gapBetweenPages;
-(void)_setGapBetweenPages:(double)arg1 ;
-(void)_setFormDelegate:(id)arg1 ;
-(_WKSessionState *)_sessionState;
-(void)_didRelaunchProcess;
-(id<WKHistoryDelegatePrivate>)_historyDelegate;
-(void)_becomeFirstResponderWithSelectionMovingForward:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)_minimumLayoutSizeOverride;
-(UIEdgeInsets)_obscuredInsets;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)_beginInteractiveObscuredInsetsChange;
-(void)_endInteractiveObscuredInsetsChange;
-(void)_setBackgroundExtendsBeyondPage:(BOOL)arg1 ;
-(BOOL)_backgroundExtendsBeyondPage;
-(NSArray *)_certificateChain;
-(void)_endAnimatedResize;
-(unsigned long long)_observedRenderingProgressEvents;
-(CGSize)_maximumUnobscuredSizeOverride;
-(double)_viewportMetaTagWidth;
-(long long)_interfaceOrientationOverride;
-(void)_beginAnimatedResizeWithUpdates:(/*^block*/id)arg1 ;
-(void)_overrideLayoutParametersWithMinimumLayoutSize:(CGSize)arg1 maximumUnobscuredSizeOverride:(CGSize)arg2 ;
-(void)_setMinimumLayoutSizeOverride:(CGSize)arg1 ;
-(void)_setMaximumUnobscuredSizeOverride:(CGSize)arg1 ;
-(BOOL)_isDisplayingPDF;
-(id)_loadRequest:(id)arg1 withOptions:(id)arg2 ;
-(void)_setEditable:(BOOL)arg1 ;
-(void)_setHistoryDelegate:(id)arg1 ;
-(void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(NSURL *)_committedURL;
-(NSString *)_MIMEType;
-(NSString *)_userAgent;
-(NSString *)_applicationNameForUserAgent;
-(void)_setApplicationNameForUserAgent:(id)arg1 ;
-(NSString *)_customUserAgent;
-(void)_setCustomUserAgent:(id)arg1 ;
-(void)_setUserContentExtensionsEnabled:(BOOL)arg1 ;
-(BOOL)_userContentExtensionsEnabled;
-(int)_webProcessIdentifier;
-(void)_killWebContentProcess;
-(void)_killWebContentProcessAndResetState;
-(/*^block*/id)_retainActiveFocusedState;
-(id)_snapshotLayerContentsForBackForwardListItem:(id)arg1 ;
-(NSData *)_sessionStateData;
-(void)_restoreFromSessionStateData:(id)arg1 ;
-(id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2 ;
-(BOOL)_allowsRemoteInspection;
-(void)_setAllowsRemoteInspection:(BOOL)arg1 ;
-(BOOL)_addsVisitedLinks;
-(void)_setAddsVisitedLinks:(BOOL)arg1 ;
-(BOOL)_networkRequestsInProgress;
-(void)_setObservedRenderingProgressEvents:(unsigned long long)arg1 ;
-(void)_getMainResourceDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getWebArchiveDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_supportsTextZoom;
-(double)_textZoomFactor;
-(void)_setTextZoomFactor:(double)arg1 ;
-(double)_pageZoomFactor;
-(void)_setPageZoomFactor:(double)arg1 ;
-(id<_WKDiagnosticLoggingDelegate>)_diagnosticLoggingDelegate;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(id<_WKFindDelegate>)_findDelegate;
-(void)_setFindDelegate:(id)arg1 ;
-(void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_hideFindUI;
-(void)_saveBackForwardSnapshotForItem:(id)arg1 ;
-(BOOL)_isDisplayingStandaloneImageDocument;
-(BOOL)_isDisplayingStandaloneMediaDocument;
-(BOOL)_isShowingNavigationGestureSnapshot;
-(unsigned long long)_layoutMode;
-(void)_setLayoutMode:(unsigned long long)arg1 ;
-(double)_viewScale;
-(void)_setViewScale:(double)arg1 ;
-(void)_setMinimumViewSize:(CGSize)arg1 ;
-(CGSize)_minimumViewSize;
-(void)_setScrollPerformanceDataCollectionEnabled:(BOOL)arg1 ;
-(BOOL)_scrollPerformanceDataCollectionEnabled;
-(NSArray *)_scrollPerformanceData;
-(BOOL)_allowsMediaDocumentInlinePlayback;
-(void)_setAllowsMediaDocumentInlinePlayback:(BOOL)arg1 ;
-(void)_setInterfaceOrientationOverride:(long long)arg1 ;
-(void)_hideContentUntilNextUpdate;
-(void)_resizeWhileHidingContentWithUpdates:(/*^block*/id)arg1 ;
-(void)_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
-(void)_snapshotRect:(CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_overrideLayoutParametersWithMinimumLayoutSize:(CGSize)arg1 minimumLayoutSizeForMinimalUI:(CGSize)arg2 maximumUnobscuredSizeOverride:(CGSize)arg3 ;
-(id)_viewForFindUI;
-(NSData *)_dataForDisplayedPDF;
-(NSString *)_suggestedFilenameForDisplayedPDF;
-(_WKWebViewPrintFormatter *)_webViewPrintFormatter;
-(id)_remoteObjectRegistry;
-(NSURL *)_unreachableURL;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)reload;
-(NSString *)title;
-(BOOL)becomeFirstResponder;
-(UIScrollView *)scrollView;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)_scrollViewDidInterruptDecelerating:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(NSURL *)URL;
-(id)loadRequest:(id)arg1 ;
-(id)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(WKBackForwardList *)backForwardList;
-(BOOL)allowsLinkPreview;
-(WKWebViewConfiguration *)configuration;
-(BOOL)isLoading;
-(void)setUIDelegate:(id<WKUIDelegate>)arg1 ;
-(void)setAllowsLinkPreview:(BOOL)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)_frameOrBoundsChanged;
-(NSString *)customUserAgent;
-(void)stopLoading;
-(id)goBack;
-(id)goForward;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(double)estimatedProgress;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_scrollToContentOffset:(FloatPoint)arg1 scrollOrigin:(IntPoint)arg2 ;
-(BOOL)_isShowingVideoPictureInPicture;
-(BOOL)_mayAutomaticallyShowVideoPictureInPicture;
-(void)_processDidExit;
-(void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const String*)arg2 ;
-(void)_didCommitLoadForMainFrame;
-(void)_setViewportMetaTagWidth:(float)arg1 ;
-(PassRefPtr<WebKit::ViewSnapshot>*)_takeViewSnapshot;
-(void)_didCommitLayerTree:(const RemoteLayerTreeTransaction*)arg1 ;
-(void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3 ;
-(void)_couldNotRestorePageState;
-(void)_restorePageStateToExposedRect:(FloatRect)arg1 scale:(double)arg2 ;
-(void)_restorePageStateToUnobscuredCenter:(FloatPoint)arg1 scale:(double)arg2 ;
-(void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const String*)arg1 data:(id)arg2 ;
-(BOOL)_zoomToRect:(FloatRect)arg1 withOrigin:(FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6 ;
-(void)_navigationGestureDidBegin;
-(void)_navigationGestureDidEnd;
-(void)_didFinishLoadForMainFrame;
-(void)_didFailLoadForMainFrame;
-(void)_didSameDocumentNavigationForMainFrame:(int)arg1 ;
-(void)_updateScrollViewBackground;
-(void)_mediaDocumentNaturalSizeChanged:(CGSize)arg1 ;
-(id)goToBackForwardListItem:(id)arg1 ;
-(BOOL)hasOnlySecureContent;
-(NSArray *)certificateChain;
-(void)_updateVisibleContentRects;
-(BOOL)_scrollToRect:(FloatRect)arg1 origin:(FloatPoint)arg2 minimumScrollDistance:(float)arg3 ;
-(void)_zoomToFocusRect:(FloatRect)arg1 selectionRect:(FloatRect)arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(BOOL)arg6 forceScroll:(BOOL)arg7 ;
-(void)_zoomOutWithOrigin:(FloatPoint)arg1 animated:(BOOL)arg2 ;
-(id)browsingContextController;
-(void)_scrollByOffset:(FloatPoint)arg1 ;
-(UIEdgeInsets)_computedContentInset;
-(void)_willInvokeUIScrollViewDelegateCallback;
-(void)_didInvokeUIScrollViewDelegateCallback;
-(void)_didFinishScrolling;
-(void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(BOOL)allowsBackForwardNavigationGestures;
-(id)_contentSizeCategory;
-(id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(CGPoint)_adjustedContentOffset:(CGPoint)arg1 ;
-(FloatRect)visibleRectInViewCoordinates;
-(id)_currentContentView;
-(CGRect)_contentRectForUserInteraction;
-(void)_zoomToPoint:(FloatPoint)arg1 atScale:(double)arg2 animated:(BOOL)arg3 ;
-(void)_zoomToRect:(FloatRect)arg1 atScale:(double)arg2 origin:(FloatPoint)arg3 animated:(BOOL)arg4 ;
-(BOOL)usesStandardContentView;
-(BOOL)_scrollViewIsRubberBanding;
-(BOOL)_shouldUpdateKeyboardWithInfo:(id)arg1 ;
-(id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(OpaqueWKPageRef)_pageForTesting;
-(id<WKNavigationDelegate>)navigationDelegate;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)setNavigationDelegate:(id<WKNavigationDelegate>)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)reloadFromOrigin;
-(id<WKUIDelegate>)UIDelegate;
@end

