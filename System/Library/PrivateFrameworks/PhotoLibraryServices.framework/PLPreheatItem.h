/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSObject;

@interface PLPreheatItem : NSObject {

	int _format;
	long long _imageType;
	CGSize _optimalSourcePixelSize;
	NSString* _assetUUID;
	BOOL _CPLPrefetching;
	NSObject*<OS_dispatch_queue> _CPLPrefetchingIsolationQueue;
	NSString* _CPLPrefetchingDoneToken;
	int _CPLNotifyRegistrationToken;
	BOOL _CPLPrefetchingCancelled;
	NSObject*<OS_dispatch_group> _CPLPrefetchingWaitGroup;
	int _prefetchCount;
	BOOL _didCompleteCPLPrefetchingWithSuccessOrError;
	BOOL _CPLPrefetchingWasCancelled;
	int _bestFormat;
	NSString* _virtualCPLTaskIdentifier;

}

@property (nonatomic,readonly) int format;                                                               //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) int bestFormat;                                                             //@synthesize bestFormat=_bestFormat - In the implementation block
@property (nonatomic,readonly) long long imageType;                                                      //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) CGSize optimalSourcePixelSize;                                            //@synthesize optimalSourcePixelSize=_optimalSourcePixelSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetUUID;                                                //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) BOOL CPLPrefetching;                                                      //@synthesize CPLPrefetching=_CPLPrefetching - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_group> CPLPrefetchingWaitGroup;              //@synthesize CPLPrefetchingWaitGroup=_CPLPrefetchingWaitGroup - In the implementation block
@property (retain) NSString * virtualCPLTaskIdentifier;                                                  //@synthesize virtualCPLTaskIdentifier=_virtualCPLTaskIdentifier - In the implementation block
@property (assign) BOOL didCompleteCPLPrefetchingWithSuccessOrError;                                     //@synthesize didCompleteCPLPrefetchingWithSuccessOrError=_didCompleteCPLPrefetchingWithSuccessOrError - In the implementation block
@property (assign) BOOL CPLPrefetchingWasCancelled;                                                      //@synthesize CPLPrefetchingWasCancelled=_CPLPrefetchingWasCancelled - In the implementation block
-(int)format;
-(void)dealloc;
-(id)description;
-(BOOL)isCancelled;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)assetUUID;
-(CGSize)optimalSourcePixelSize;
-(id)cachedImage:(BOOL*)arg1 ;
-(id)cachedImageIfAvailable:(BOOL*)arg1 ;
-(BOOL)addImageHandler:(/*^block*/id)arg1 ;
-(void)cancelPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)virtualCPLTaskIdentifier;
-(void)setVirtualCPLTaskIdentifier:(NSString *)arg1 ;
-(BOOL)CPLPrefetching;
-(id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(int)arg2 ;
-(long long)incrementPrefetchCount;
-(long long)decrementPrefetchCount;
-(void)resetPrefetchCount;
-(BOOL)hasPrefetchCount;
-(int)bestFormat;
-(void)setBestFormat:(int)arg1 ;
-(long long)imageType;
-(NSObject*<OS_dispatch_group>)CPLPrefetchingWaitGroup;
-(BOOL)didCompleteCPLPrefetchingWithSuccessOrError;
-(void)setDidCompleteCPLPrefetchingWithSuccessOrError:(BOOL)arg1 ;
-(BOOL)CPLPrefetchingWasCancelled;
-(void)setCPLPrefetchingWasCancelled:(BOOL)arg1 ;
@end

