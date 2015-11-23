/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider>
@optional
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1;

@required
-(void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1;

@end

