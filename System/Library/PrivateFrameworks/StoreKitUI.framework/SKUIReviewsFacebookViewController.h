/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKUIReviewsFacebookViewControllerDelegate;
@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@interface SKUIReviewsFacebookViewController : UIViewController {

	SKUIClientContext* _clientContext;
	id<SKUIReviewsFacebookViewControllerDelegate> _delegate;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIReviewsFacebookView* _facebookView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIFacebookLikeStatus * facebookLikeStatus;                                  //@synthesize facebookLikeStatus=_facebookLikeStatus - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIReviewsFacebookViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUIReviewsFacebookViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIReviewsFacebookViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIFacebookLikeStatus *)facebookLikeStatus;
-(void)setFacebookLikeStatus:(SKUIFacebookLikeStatus *)arg1 ;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
@end

