/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperation : CKDDatabaseOperation {

	int _serverVersion;
	CKDMescalSession* _mescalSession;

}

@property (assign,nonatomic) int serverVersion;                             //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setMescalSession:(CKDMescalSession *)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(unsigned long long)activityStart;
-(BOOL)shouldCheckAppVersion;
-(id)flowControlKey;
-(void)_handleCertRequestFinished:(id)arg1 ;
-(void)_handleSessionRequestFinished:(id)arg1 ;
-(void)_handleDataExchanged:(id)arg1 withError:(id)arg2 ;
-(void)_exchangeDataAndSendRequest:(id)arg1 ;
-(BOOL)requiresTokenRegistration;
-(CKDMescalSession *)mescalSession;
-(void)setServerVersion:(int)arg1 ;
-(int)serverVersion;
@end

