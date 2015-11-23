/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _fencePointerToTraceMap;
	NSMapTable* _fencePointerToTriggerPortMap;
	NSMapTable* _fencePointerToCAPortMap;
	NSHashTable* _reportableFencePointers;
	NSMapTable* _triggerPortToFencePointersMap;
	NSMapTable* _triggerPortToDeathWatcherMap;
	NSHashTable* _validDeathWatchersTable;
	unsigned long long _encodeCount;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)addFence:(id)arg1 ;
-(void)removeFencePointer:(void*)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
@end

