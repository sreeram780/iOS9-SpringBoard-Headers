/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUISignInViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIViewElementLayoutContext, SKUISignInTemplateView, UIScrollView, SKUISignInTemplateViewElement, SKUILayoutCache, NSString;

@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController> {

	CGRect _keyboardFrame;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUISignInTemplateView* _loginView;
	UIScrollView* _scrollView;
	SKUISignInTemplateViewElement* _templateElement;
	SKUILayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(id)_layoutContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)_layoutScrollView;
-(void)_reloadPanelViewWithScrollViewSize:(CGSize)arg1 ;
-(void)_reloadContentSize;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_signInSuccess:(id)arg1 ;
-(void)_signInFailed:(id)arg1 reason:(id)arg2 ;
-(void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3 ;
@end

