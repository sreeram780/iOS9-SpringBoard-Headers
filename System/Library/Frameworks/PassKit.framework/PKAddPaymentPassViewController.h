/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIViewController.h>

@class PKWeakReference, PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController;

@interface PKAddPaymentPassViewController : UIViewController {

	PKWeakReference* _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddPaymentPassViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate; 
+(BOOL)canAddPaymentPass;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)modalTransitionStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end

