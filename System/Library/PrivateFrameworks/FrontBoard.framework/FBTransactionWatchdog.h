/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,retain,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)initWithTransaction:(id)arg1 ;
-(FBTransaction *)transaction;
-(void)dealloc;
-(void)invalidate;
-(void)_watchdogTimerFired;
-(void)_dumpDebugInfo;
@end

