/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	UIImage* _photo;

}
-(void)main;
-(void)setPhoto:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_photoUploadWithResponseDictionary:(id)arg1 ;
@end

