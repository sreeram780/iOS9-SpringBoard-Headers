/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue;
@class PFUbiquityLocation, NSString, NSURL, NSObject, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSDictionary;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _localPeerID;
	NSString* _storeName;
	NSURL* _presentedItemURL;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _scheduledProcessingBlock;
	NSMutableArray* _pendingURLs;
	int _pendingURLsLock;
	NSMutableDictionary* _locationToSafeSaveFile;
	NSMutableDictionary* _locationToStatus;

}

@property (readonly) PFUbiquityLocation * ubiquityRootLocation;                    //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (readonly) NSString * localPeerID;                                       //@synthesize localPeerID=_localPeerID - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL; 
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (nonatomic,readonly) NSDictionary * locationToStatus;                    //@synthesize locationToStatus=_locationToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * locationToSafeSaveFile;              //@synthesize locationToSafeSaveFile=_locationToSafeSaveFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(int)usesCloudDocsFramework;
+(void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)sharedPrivateOperationQueue;
+(id)cloudDocsRootFolder;
+(void)registerInitialSyncHandlerForURL:(id)arg1 andContainerID:(id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
+(void)initialize;
-(id)copyStatusDictionary;
-(NSString *)localPeerID;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)logWasExported:(id)arg1 ;
-(void)logWasImported:(id)arg1 ;
-(void)logImportWasCancelled:(id)arg1 ;
-(void)logsWereScheduled:(id)arg1 ;
-(void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1 ;
-(void)printStatus:(id)arg1 ;
-(void)processPendingURLs;
-(BOOL)isiCloudExtension:(id)arg1 ;
-(id)retainedStatusForLocation:(id)arg1 ;
-(id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(id)arg4 ;
-(void)exporterDidMoveLog:(id)arg1 ;
-(void)registerSafeSaveFile:(id)arg1 ;
-(void)unregisterSafeSaveFile:(id)arg1 ;
-(NSDictionary *)locationToStatus;
-(NSDictionary *)locationToSafeSaveFile;
-(void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
@end

