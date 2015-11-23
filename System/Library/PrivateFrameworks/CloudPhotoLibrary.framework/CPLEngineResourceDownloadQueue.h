/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, CPLPlatformObject;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _downloadQueue;
	NSMutableArray* _highPriorityTasksQueue;
	NSMutableArray* _highPriorityActiveTasks;
	NSMutableArray* _highPriorityActiveTaskGroups;
	NSMutableArray* _lowPriorityTasksQueue;
	NSMutableArray* _lowPriorityActiveTasks;
	NSMutableArray* _lowPriorityActiveTaskGroups;
	NSMutableArray* _backgroundActiveTasks;
	unsigned long long _totalClientRequests;
	unsigned long long _totalClientRequestErrors;
	unsigned long long _totalPutInBackground;
	BOOL _shouldRequestABackgroundDownloadSyncPhase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_failedTaskWithCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 background:(BOOL)arg4 backgroundTaskIdentifier:(unsigned long long)arg5 didStartHandler:(/*^block*/id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_downloadTaskDidFail:(id)arg1 withError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_downloadTaskDidSucceed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_resourceStorageCopyTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_realDownloadTaskForCloudResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)dequeueBackgroundDownloadTasks:(unsigned long long)arg1 forResourceType:(unsigned long long)arg2 eachWithCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)dequeueNextBackgroundDownloadTasks:(unsigned long long)arg1 resourceType:(unsigned long long)arg2 localResources:(id*)arg3 taskIdentifiers:(id*)arg4 error:(id*)arg5 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_enqueueDownloadTasks:(id)arg1 ;
-(void)_enqueueDownloadTask:(id)arg1 ;
-(BOOL)_cancelDownloadTask:(id)arg1 ;
-(id)_finishDownloadTask:(id)arg1 inError:(id)arg2 ;
-(void)_reallyDispatchDownloadTasks:(id)arg1 lowPriorityTaskGroups:(id)arg2 highPriorityTaskGroups:(id)arg3 ;
-(id)_transport:(id)arg1 setupTransportTaskIfNeededForTask:(id)arg2 ;
-(unsigned long long)_availableSlotsForDownloadTaskGroupsOfHighPriority:(BOOL)arg1 ;
-(BOOL)_deferOneLowPriorityActiveTaskGroup;
-(void)_dequeueTasks:(id*)arg1 taskGroups:(id*)arg2 maxTaskGroupCount:(unsigned long long)arg3 ofHighPriority:(BOOL)arg4 ;
-(BOOL)_hasActiveForegroundTasks;
-(void)_addTask:(id)arg1 toPrioritizedQueue:(id)arg2 ;
-(void)_processQueuedDownloadTasks;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)dequeueNextBackgroundDownloadTask:(id*)arg1 resourceType:(unsigned long long)arg2 taskIdentifier:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 didStartHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)dequeueBackgroundDownloadTaskForResourceType:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)launchDownloadTasks:(id)arg1 ;
-(void)_reallyDispatchDownloadTask:(id)arg1 ;
@end

