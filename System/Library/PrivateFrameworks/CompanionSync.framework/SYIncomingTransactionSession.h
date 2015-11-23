/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@class SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	unsigned long long _activity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	long long state;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_sendComplete;
-(void)_sendChanges;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)protocolVersion;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(BOOL)wasCancelled;
@end

