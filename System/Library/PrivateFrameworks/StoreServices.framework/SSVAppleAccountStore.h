/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACAccountStore, NSObject, ACAccount;

@interface SSVAppleAccountStore : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ACAccount* _primaryAppleAccount;

}

@property (readonly) ACAccount * primaryAppleAccount; 
+(id)sharedAccountStore;
-(id)init;
-(ACAccount *)primaryAppleAccount;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

