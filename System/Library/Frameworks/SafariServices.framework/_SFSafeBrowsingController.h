/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFSafeBrowsingWarningResponseObserver.h>

@protocol _SFSafeBrowsingWebProcessController, _SFSafeBrowsingControllerDelegate;
@class WKWebView, _WKRemoteObjectInterface, _SFSecurityInfo, NSString;

@interface _SFSafeBrowsingController : NSObject <_SFSafeBrowsingWarningResponseObserver> {

	WKWebView* _webView;
	_WKRemoteObjectInterface* _safeBrowsingResponseObserverInterface;
	id<_SFSafeBrowsingWebProcessController> _safeBrowsingControllerProxy;
	unsigned long long _safeBrowsingCheckSeed;
	BOOL _showingSecurityWarningPage;
	BOOL _loadingSecurityWarningPage;
	id<_SFSafeBrowsingControllerDelegate> _delegate;
	_SFSecurityInfo* _provisionalSecurityInfo;

}

@property (assign,nonatomic,__weak) id<_SFSafeBrowsingControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _SFSecurityInfo * provisionalSecurityInfo;                                          //@synthesize provisionalSecurityInfo=_provisionalSecurityInfo - In the implementation block
@property (getter=isShowingSecurityWarningPage,nonatomic,readonly) BOOL showingSecurityWarningPage;              //@synthesize showingSecurityWarningPage=_showingSecurityWarningPage - In the implementation block
@property (getter=isLoadingSecurityWarningPage,nonatomic,readonly) BOOL loadingSecurityWarningPage;              //@synthesize loadingSecurityWarningPage=_loadingSecurityWarningPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_localizedStringsForSafeBrowsing;
-(void)_setUpSafeBrowsingObserverInterface;
-(void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(BOOL)arg2 ;
-(void)didRespondToSafeBrowsingWarningWithResult:(long long)arg1 ;
-(id)safeBrowsingControllerProxy;
-(void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 ;
-(void)showSecurityWarningPageWithSecurityInfo:(id)arg1 ;
-(id)_securityWarningPageURL;
-(void)hideSecurityWarningPage;
-(void)commitProvisionalSecurityInfo;
-(void)cancelCheckForFraudulentWebsites;
-(void)startCheckingFraudulentWebSitesWithURL:(id)arg1 ;
-(void)updateShowingSecurityWarningPageIfNeeded;
-(_SFSecurityInfo *)provisionalSecurityInfo;
-(void)setProvisionalSecurityInfo:(_SFSecurityInfo *)arg1 ;
-(BOOL)isShowingSecurityWarningPage;
-(BOOL)isLoadingSecurityWarningPage;
-(void)setDelegate:(id<_SFSafeBrowsingControllerDelegate>)arg1 ;
-(id<_SFSafeBrowsingControllerDelegate>)delegate;
-(void)invalidate;
-(id)initWithWebView:(id)arg1 ;
@end

