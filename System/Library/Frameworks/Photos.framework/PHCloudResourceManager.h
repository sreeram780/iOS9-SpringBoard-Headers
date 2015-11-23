/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSObject;

@interface PHCloudResourceManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _requestsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _currentRequestID;
	int _notifyToken;

}
+(id)defaultManager;
-(void)_updateCloudResourceDownloadStatesOnStatusDidChangeNotification;
-(void)_updateCloudResourceDownloadStatesOnConnectionLostNotification:(id)arg1 ;
-(void)_updateCloudResourceDownloadStatesForConnectionLost:(BOOL)arg1 ;
-(void)_synchronized:(/*^block*/id)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 forAssetWithObjectID:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(int)arg1 ;
@end

