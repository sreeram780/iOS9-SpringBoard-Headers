/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/ADAdRecipient.h>

@protocol ADInterstitialAdDelegate;
@class UIViewController, ADInterstitialView, ADAdSpace, ADInterstitialAdPresentationViewController, NSString, UIView;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {

	id<ADInterstitialAdDelegate> _delegate;
	id<ADInterstitialAdDelegate> _internalDelegate;
	UIViewController* _internalPresentingViewController;
	BOOL _loaded;
	BOOL _actionInProgress;
	BOOL _canLoadMoreThanOnce;
	BOOL _hasLoadedFirstAd;
	BOOL _dimmingEnabled;
	int _creativeType;
	long long _options;
	ADInterstitialView* _interstitialView;
	ADAdSpace* _adSpace;
	ADInterstitialAdPresentationViewController* _presentationViewController;

}

@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> delegate; 
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                                          //@synthesize loaded=_loaded - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;                                      //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> internalDelegate; 
@property (nonatomic,retain) ADInterstitialView * interstitialView;                                                //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * internalPresentingViewController; 
@property (nonatomic,retain) ADAdSpace * adSpace;                                                                  //@synthesize adSpace=_adSpace - In the implementation block
@property (assign,nonatomic) BOOL canLoadMoreThanOnce;                                                             //@synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFirstAd;                                                                //@synthesize hasLoadedFirstAd=_hasLoadedFirstAd - In the implementation block
@property (assign,nonatomic) BOOL dimmingEnabled;                                                                  //@synthesize dimmingEnabled=_dimmingEnabled - In the implementation block
@property (assign,nonatomic) int creativeType;                                                                     //@synthesize creativeType=_creativeType - In the implementation block
@property (nonatomic,retain) ADInterstitialAdPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType; 
@property (nonatomic,readonly) long long options;                                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
-(ADInterstitialAdPresentationViewController *)presentationViewController;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ADInterstitialAdDelegate>)delegate;
-(id)identifier;
-(UIViewController *)presentingViewController;
-(id)context;
-(void)cancelAction;
-(void)setContext:(id)arg1 ;
-(BOOL)isLoaded;
-(long long)options;
-(void)setSection:(id)arg1 ;
-(ADAdSpace *)adSpace;
-(int)internalAdType;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(void)setServerURL:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(UIView *)adSpaceView;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(id)initWithCreativeType:(int)arg1 options:(long long)arg2 ;
-(void)setDimmingEnabled:(BOOL)arg1 ;
-(ADInterstitialView *)interstitialView;
-(UIViewController *)internalPresentingViewController;
-(int)creativeType;
-(void)_presentFromViewController:(id)arg1 ;
-(void)setInternalPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)hasLoadedFirstAd;
-(BOOL)canLoadMoreThanOnce;
-(BOOL)_considerClosingAdSpace;
-(void)setHasLoadedFirstAd:(BOOL)arg1 ;
-(void)setActionInProgress:(BOOL)arg1 ;
-(BOOL)presentInView:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(int)clickAction;
-(void)_dismissModalInterstitial;
-(BOOL)isActionInProgress;
-(void)setInterstitialView:(ADInterstitialView *)arg1 ;
-(void)setCanLoadMoreThanOnce:(BOOL)arg1 ;
-(BOOL)dimmingEnabled;
-(void)setCreativeType:(int)arg1 ;
-(void)setPresentationViewController:(ADInterstitialAdPresentationViewController *)arg1 ;
-(id<ADInterstitialAdDelegate>)internalDelegate;
-(void)setInternalDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(id)serverURL;
@end

