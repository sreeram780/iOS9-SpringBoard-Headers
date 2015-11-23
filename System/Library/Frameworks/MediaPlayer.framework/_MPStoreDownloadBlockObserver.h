/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {

	/*^block*/id _didFinishDownloadHandler;
	/*^block*/id _didFinishPurchaseHandler;
	MPStoreDownload* _download;

}

@property (nonatomic,copy) id didFinishDownloadHandler;                 //@synthesize didFinishDownloadHandler=_didFinishDownloadHandler - In the implementation block
@property (nonatomic,copy) id didFinishPurchaseHandler;                 //@synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler - In the implementation block
@property (nonatomic,readonly) MPStoreDownload * download;              //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPStoreDownload *)download;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(id)initWithDownload:(id)arg1 ;
-(void)setDidFinishDownloadHandler:(id)arg1 ;
-(void)setDidFinishPurchaseHandler:(id)arg1 ;
-(id)didFinishDownloadHandler;
-(id)didFinishPurchaseHandler;
@end

