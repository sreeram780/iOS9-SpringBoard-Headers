/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <WebUI/WebUIDelegate.h>
#import <WebApp/WebPolicyDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>

@class UIWindow, UIWebView, UIView, UIWebClip, NSTimer, WBUSheetController, NSMutableArray, WebUIAuthenticationManager, NSArray, WebUIDownloadManager, NSDictionary, NSString;

@interface WebAppController : WebUIDelegate <WebPolicyDelegate, UIApplicationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate> {

	UIWindow* _window;
	UIWebView* webView;
	UIView* _loadingView;
	long long _orientation;
	UIWebClip* webClip;
	NSTimer* snapshotHideTimer;
	BOOL webViewDidLayout;
	BOOL webViewHasFinishedLoading;
	BOOL snapshotHideTimeHasExpired;
	WBUSheetController* _sheetController;
	NSMutableArray* _alerts;
	CGRect _rotationRect;
	unsigned _rotationEdgePin;
	WebUIAuthenticationManager* _authenticationManager;
	NSArray* _fallbackURLs;
	WebUIDownloadManager* _downloadManager;
	BOOL _isSuspended;
	CGRect _inputViewScreenBoundsAfterRotation;
	NSDictionary* _connectionProperties;

}

@property (nonatomic,retain) UIWebClip * webClip; 
@property (nonatomic,readonly) UIWebView * webView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)contentBackgroundColor;
-(void)sheetControllerDidShowSheet:(id)arg1 ;
-(void)sheetControllerDidHideSheet:(id)arg1 ;
-(void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3 ;
-(id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2 ;
-(void)_ignorePolicyListener:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 ;
-(void)addAlert:(id)arg1 ;
-(id)_sheetController;
-(void)showGenericDownloadAlert;
-(void)showProfileInstallAlert;
-(void)showProfileDownloadAlert;
-(void)continueAfterCertificateAlertWithContext:(id)arg1 ;
-(id)specializedMessageForError:(id)arg1 ;
-(id)genericMessageForError:(id)arg1 ;
-(void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2 context:(id)arg3 ;
-(BOOL)handleCertificateError:(id)arg1 inWebView:(id)arg2 ;
-(id)titleForError:(id)arg1 ;
-(void)_cancelSnapshotHideTimer;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1 ;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(id)rotatingContentViewForWindow:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_setTopScrollIndicatorInset:(double)arg1 ;
-(void)layoutWebview;
-(CGRect)browserFrameForOrientation:(long long)arg1 ;
-(float)_minZoomScale;
-(float)_maxZoomScale;
-(void)dealloc;
-(void)suspend;
-(UIWebView *)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)resume;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)uiWebView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4 ;
-(void)uiWebView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)uiWebView:(id)arg1 printFrameView:(id)arg2 ;
-(id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(BOOL)uiWebView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4 ;
-(void)_setFallbackURLs:(id)arg1 ;
-(UIWebClip *)webClip;
-(id)initForWebClipURL:(id)arg1 ;
-(void)tryMultipleURLs:(id)arg1 ;
-(void)setWebClip:(UIWebClip *)arg1 ;
-(void)_setPersistentStoragePathDefaults;
-(void)_handleStatusBarHeightChanged:(id)arg1 ;
-(void)_inputViewWillRotate:(id)arg1 ;
-(void)timeLimitForLoadCompletionExpired;
-(void)updateStatusBarStyleFromWebClip;
-(void)loadInputAddress:(id)arg1 ;
-(void)swapWebViewForImageViewOnlyIfReady;
-(id)containerViewForAuthenticationPanel;
-(void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3 ;
-(void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidFail:(id)arg2 ;
-(void)downloadManager:(id)arg1 hasData:(id)arg2 forFinishedDownload:(id)arg3 ;
@end

