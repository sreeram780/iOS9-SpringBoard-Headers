/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PKPaymentPass, PKPaymentSetupAddToWatchOfferView;

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController {

	PKPaymentPass* _pass;
	long long _context;
	/*^block*/id _dismissalHandler;
	PKPaymentSetupAddToWatchOfferView* _offerView;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                   //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupAddToWatchOfferView * offerView;              //@synthesize offerView=_offerView - In the implementation block
+(void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_doneTapped:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(/*^block*/id)arg3 ;
-(void)_configureNavigationItem;
-(void)_openAppTapped:(id)arg1 ;
-(void)_handleDismissal:(BOOL)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)_handleBridgeProvisioningError:(id)arg1 ;
-(void)_addLaterTapped:(id)arg1 ;
-(PKPaymentSetupAddToWatchOfferView *)offerView;
-(void)dealloc;
-(void)loadView;
-(long long)context;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)setContext:(long long)arg1 ;
-(PKPaymentPass *)pass;
@end

