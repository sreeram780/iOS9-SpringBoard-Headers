/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface WLAppWishlistController : NSObject {

	NSArray* _appIdentifiers;
	/*^block*/id _accountStoreChangeHandler;

}
+(id)sharedInstance;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_sendWishListToStoreWithShouldRetryOnAccountStateFailure:(BOOL)arg1 ;
-(BOOL)_isAccountStateError:(id)arg1 ;
-(void)_observeChangedInAccountStoreWithChangeHandler:(/*^block*/id)arg1 ;
-(void)_stopObservingChangeInAccountStore;
-(void)addMigratableAppsToWishlist:(id)arg1 ;
@end

