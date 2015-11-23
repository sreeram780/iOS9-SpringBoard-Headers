/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation {

	NSURL* _certificateUrl;
	NSURL* _keyUrl;
	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,retain) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                                              //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                                      //@synthesize certificateUrl=_certificateUrl - In the implementation block
-(void)dealloc;
-(void)run;
-(id)_getURIWithError:(id*)arg1 ;
-(id)_getAppCertWithError:(id*)arg1 ;
-(id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3 ;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(NSURL *)keyURL;
-(void)setKeyURL:(NSURL *)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(void)setLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
@end

