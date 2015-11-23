/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCLifeCycle.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BRCMinHeap, NSString;

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle> {

	NSObject*<OS_dispatch_queue> _queue;
	BRCMinHeap* _minHeap;
	NSString* _name;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _delay;
	long long _leeway;
	long long _lastSchedule;
	BOOL _isResumed;
	BOOL _isCancelled;
	/*^block*/id _computeNextAdmissibleDateForScheduling;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long coalescingLeeway;                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id computeNextAdmissibleDateForScheduling;              //@synthesize computeNextAdmissibleDateForScheduling=_computeNextAdmissibleDateForScheduling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled;                                     //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)_close;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)dealloc;
-(void)suspend;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(id)initWithName:(id)arg1 ;
-(void)signal;
-(void)_schedule;
-(void)setCoalescingLeeway:(long long)arg1 ;
-(void)setComputeNextAdmissibleDateForScheduling:(id)arg1 ;
-(void)_addToken:(id)arg1 deadline:(long long)arg2 ;
-(BOOL)_isSleepingRequiredForDeadline:(long long)arg1 now:(long long)arg2 ;
-(long long)coalescingLeeway;
-(id)computeNextAdmissibleDateForScheduling;
-(void)setIsCancelled:(BOOL)arg1 ;
@end

