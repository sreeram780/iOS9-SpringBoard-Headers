/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _clientCacheIdentifier;
	BOOL _hasPreparedForMingling;
	unsigned long long _countOfNotifiedBatchesInPullQueue;

}

@property (retain) id<CPLMinglePulledChangesTaskDelegate> delegate; 
+(BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL*)arg3 error:(id*)arg4 ;
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_taskDidFinishWithError:(id)arg1 ;
-(void)_processNextBatch;
-(void)_launch;
-(id)taskIdentifier;
@end

