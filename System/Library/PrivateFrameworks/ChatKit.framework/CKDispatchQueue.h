/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ChatKit/ChatKit-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CKDispatchQueue : NSObject {

	unsigned long long _fifo;
	BOOL _suspended;
	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	CFBinaryHeapRef _heap;
	NSMutableDictionary* _dispatchQueueBlocks;

}

@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                       //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;                  //@synthesize lockQueue=_lockQueue - In the implementation block
@property (nonatomic,retain) CFBinaryHeapRef heap;                                    //@synthesize heap=_heap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dispatchQueueBlocks;               //@synthesize dispatchQueueBlocks=_dispatchQueueBlocks - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                       //@synthesize cancelled=_cancelled - In the implementation block
+(id)serialQueueWithDispatchPriority:(long long)arg1 ;
+(id)concurrentQueueWithDispatchPriority:(long long)arg1 ;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 withQueuePriority:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)cancelOustandingBlocks;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2 ;
-(void)setHeap:(CFBinaryHeapRef)arg1 ;
-(void)setDispatchQueueBlocks:(NSMutableDictionary *)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3 ;
-(CFBinaryHeapRef)heap;
-(NSMutableDictionary *)dispatchQueueBlocks;
-(void)removeOutstandingBlockForKey:(id)arg1 ;
-(void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2 ;
-(long long)queuePriorityOfOutstandingBlockForKey:(id)arg1 ;
-(id)allKeysOfOutstandingBlocks;
-(BOOL)containsOutstandingBlockForKey:(id)arg1 ;
-(void)removeAllOutstandingBlocks;
-(void)addBlock:(/*^block*/id)arg1 ;
@end
