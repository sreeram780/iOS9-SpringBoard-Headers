/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSObject;

@interface __NSOperationQueueInternal : NSObject {

	opaque_pthread_mutex_t __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	NSObject*<OS_dispatch_queue> __pending_barrier;
	long long __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned __unused2;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	char __propertyQOS;
	NSObject*<OS_dispatch_queue> __dispatch_queue;
	char __nameBuffer[160];

}
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

