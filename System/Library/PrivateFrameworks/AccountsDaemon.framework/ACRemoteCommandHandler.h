/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deleteAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_authenticateAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(id)_localAccountMatchingRemoteAccount:(id)arg1 ;
-(void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

