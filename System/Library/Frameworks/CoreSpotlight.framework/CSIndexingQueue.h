/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSIndexQueuableItem;
@class NSMutableDictionary, NSObject;

@interface CSIndexingQueue : NSObject {

	BOOL _timerArmed;
	long long _mode;
	double _idleTime;
	double _idleTimeLeeway;
	unsigned long long _maximumBatchSize;
	NSMutableDictionary* _queuedItems;
	NSObject*<OS_dispatch_queue> _coalescingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	/*^block*/id _notifyBlock;
	double _lastPush;
	id<CSIndexQueuableItem> _lastPushedItem;

}

@property (assign) long long mode;                                                //@synthesize mode=_mode - In the implementation block
@property (assign) double idleTime;                                               //@synthesize idleTime=_idleTime - In the implementation block
@property (assign) double idleTimeLeeway;                                         //@synthesize idleTimeLeeway=_idleTimeLeeway - In the implementation block
@property (assign) unsigned long long maximumBatchSize;                           //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (retain) NSMutableDictionary * queuedItems;                             //@synthesize queuedItems=_queuedItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> coalescingQueue;                  //@synthesize coalescingQueue=_coalescingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> coalescingTimer;                 //@synthesize coalescingTimer=_coalescingTimer - In the implementation block
@property (copy) id notifyBlock;                                                  //@synthesize notifyBlock=_notifyBlock - In the implementation block
@property (assign) BOOL timerArmed;                                               //@synthesize timerArmed=_timerArmed - In the implementation block
@property (assign) double lastPush;                                               //@synthesize lastPush=_lastPush - In the implementation block
@property (nonatomic,retain) id<CSIndexQueuableItem> lastPushedItem;              //@synthesize lastPushedItem=_lastPushedItem - In the implementation block
-(id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(/*^block*/id)arg5 ;
-(void)_applicationWillResign:(id)arg1 ;
-(void)_flushItemsQueue;
-(void)_queueItems:(id)arg1 ;
-(void)_pushLastItem:(id)arg1 time:(double)arg2 ;
-(id)initWithMode:(long long)arg1 notifyBlock:(/*^block*/id)arg2 ;
-(void)queueItems:(id)arg1 ;
-(void)queueItem:(id)arg1 ;
-(double)idleTimeLeeway;
-(void)setIdleTimeLeeway:(double)arg1 ;
-(void)setMaximumBatchSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)queuedItems;
-(void)setQueuedItems:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)coalescingQueue;
-(void)setCoalescingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)notifyBlock;
-(void)setNotifyBlock:(id)arg1 ;
-(BOOL)timerArmed;
-(void)setTimerArmed:(BOOL)arg1 ;
-(double)lastPush;
-(void)setLastPush:(double)arg1 ;
-(id<CSIndexQueuableItem>)lastPushedItem;
-(void)setLastPushedItem:(id<CSIndexQueuableItem>)arg1 ;
-(void)dealloc;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(unsigned long long)maximumBatchSize;
-(NSObject*<OS_dispatch_source>)coalescingTimer;
-(void)setCoalescingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)idleTime;
-(void)setIdleTime:(double)arg1 ;
@end

