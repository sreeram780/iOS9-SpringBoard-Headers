/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSThread, NSObject;

@interface ICThreadBlockDispatcher : NSObject {

	NSThread* _creationThread;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (__weak) NSThread * creationThread;                                         //@synthesize creationThread=_creationThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performBlockAndWaitUntilDone:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)setCreationThread:(NSThread *)arg1 ;
-(BOOL)currentIsCreationThread;
-(NSThread *)creationThread;
-(void)assertIsValidCallingThread;
-(void)useDispatchQueueOnly;
-(void)performBlockAndWaitUntilFinishedWithRunLoopProcessingTime:(double)arg1 block:(/*^block*/id)arg2 ;
@end

