/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NPKWorkQueue : NSObject {

	BOOL _performingWork;
	BOOL _takeOutTransactions;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remainingWork;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingWork;                          //@synthesize remainingWork=_remainingWork - In the implementation block
@property (assign,nonatomic) BOOL performingWork;                                     //@synthesize performingWork=_performingWork - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL takeOutTransactions;                                //@synthesize takeOutTransactions=_takeOutTransactions - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithQueue:(id)arg1 takeOutTransactions:(BOOL)arg2 ;
-(void)setRemainingWork:(NSMutableArray *)arg1 ;
-(void)setTakeOutTransactions:(BOOL)arg1 ;
-(BOOL)performingWork;
-(NSMutableArray *)remainingWork;
-(void)setPerformingWork:(BOOL)arg1 ;
-(BOOL)takeOutTransactions;
-(void)_onQueue_doWorkIfNecessary;
-(void)performWork:(/*^block*/id)arg1 ;
@end

