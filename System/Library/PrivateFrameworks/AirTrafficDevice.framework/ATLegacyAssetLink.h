/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, ATLegacyAssetLinkProgressDelegate;
@class NSMutableSet, NSMutableDictionary, ATLegacyMessageLink, NSMutableArray, NSObject, NSArray, NSString;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSMutableSet* _unqueuedAssets;
	NSMutableDictionary* _enqueuedAssetsByDataClass;
	ATLegacyMessageLink* _messageLink;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _readyDataClasses;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _supportedDataClasses;
	id<ATLegacyAssetLinkProgressDelegate> _progressDelegate;

}

@property (nonatomic,copy) NSArray * supportedDataClasses;                                               //@synthesize supportedDataClasses=_supportedDataClasses - In the implementation block
@property (nonatomic,copy) NSArray * readyDataClasses; 
@property (assign,nonatomic,__weak) id<ATLegacyAssetLinkProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                                                  //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(void)close;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(BOOL)linkIsReady;
-(id)initWithMessageLink:(id)arg1 ;
-(void)_handleFileCompleteMessage:(id)arg1 ;
-(void)_handleFileErrorMessage:(id)arg1 ;
-(void)_handleFileProgressMessage:(id)arg1 ;
-(void)_enqueueAndRequestAssets;
-(NSArray *)supportedDataClasses;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(id)_assetsForDataClass:(id)arg1 identifier:(id)arg2 ;
-(id)_assetManifestForDataclasses:(id)arg1 ;
-(void)setReadyDataClasses:(NSArray *)arg1 ;
-(NSArray *)readyDataClasses;
-(void)setSupportedDataClasses:(NSArray *)arg1 ;
-(BOOL)open;
-(BOOL)isOpen;
-(id<ATLegacyAssetLinkProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<ATLegacyAssetLinkProgressDelegate>)arg1 ;
@end

