/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _SFBrowserToolbar, _SFNavigationBar, WKWebView, _SFLinkPreviewHeader, _SFCrashBanner;

@interface _SFBrowserView : UIView {

	BOOL _shouldUseScrollToTopView;
	UIView* _contentContainerView;
	_SFBrowserToolbar* _toolbar;
	_SFNavigationBar* _navigationBar;
	double _bottomBarOffset;
	double _topBarHeight;
	WKWebView* _currentWebView;
	unsigned long long _navigationBarBehavior;
	_SFLinkPreviewHeader* _previewHeader;
	UIView* _scrollToTopView;
	_SFCrashBanner* _crashBanner;
	double _crashBannerOffset;

}

@property (nonatomic,readonly) UIView * contentContainerView;                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) _SFBrowserToolbar * toolbar;                           //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) _SFNavigationBar * navigationBar;                      //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) double bottomBarOffset;                                //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double topBarHeight;                                   //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,__weak,readonly) WKWebView * currentWebView;                   //@synthesize currentWebView=_currentWebView - In the implementation block
@property (assign,nonatomic) unsigned long long navigationBarBehavior;              //@synthesize navigationBarBehavior=_navigationBarBehavior - In the implementation block
@property (nonatomic,retain) _SFLinkPreviewHeader * previewHeader;                  //@synthesize previewHeader=_previewHeader - In the implementation block
@property (nonatomic,readonly) UIView * scrollToTopView;                            //@synthesize scrollToTopView=_scrollToTopView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseScrollToTopView;                         //@synthesize shouldUseScrollToTopView=_shouldUseScrollToTopView - In the implementation block
@property (nonatomic,retain) _SFCrashBanner * crashBanner;                          //@synthesize crashBanner=_crashBanner - In the implementation block
@property (assign,nonatomic) double crashBannerOffset;                              //@synthesize crashBannerOffset=_crashBannerOffset - In the implementation block
-(_SFLinkPreviewHeader *)previewHeader;
-(void)setPreviewHeader:(_SFLinkPreviewHeader *)arg1 ;
-(void)setBottomBarOffset:(double)arg1 ;
-(void)setTopBarHeight:(double)arg1 ;
-(void)addWebView:(id)arg1 ;
-(void)updatePreviewHeader;
-(void)setShouldUseScrollToTopView:(BOOL)arg1 ;
-(void)setCrashBanner:(_SFCrashBanner *)arg1 ;
-(void)setCrashBannerOffset:(double)arg1 ;
-(UIView *)contentContainerView;
-(WKWebView *)currentWebView;
-(unsigned long long)navigationBarBehavior;
-(void)setNavigationBarBehavior:(unsigned long long)arg1 ;
-(UIView *)scrollToTopView;
-(BOOL)shouldUseScrollToTopView;
-(_SFCrashBanner *)crashBanner;
-(double)crashBannerOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_SFNavigationBar *)navigationBar;
-(void)setNavigationBar:(_SFNavigationBar *)arg1 ;
-(_SFBrowserToolbar *)toolbar;
-(void)setToolbar:(_SFBrowserToolbar *)arg1 ;
-(double)topBarHeight;
-(double)bottomBarOffset;
@end

