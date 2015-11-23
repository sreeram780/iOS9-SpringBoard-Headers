/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBProcessObserver.h>

@class FBProcessManager, FBProcess, BSWatchdog, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessObserver> {

	FBProcessManager* _manager;
	FBProcess* _process;
	double _timeout;
	BSWatchdog* _watchdog;

}

@property (nonatomic,retain,readonly) FBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(void)dealloc;
-(FBProcess *)process;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)processDidExit:(id)arg1 ;
-(void)_begin;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
-(id)initWithProcess:(id)arg1 ;
@end

