/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject {

	ASAsset* _updateAsset;

}

@property (nonatomic,retain) ASAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(BOOL)cancel:(id*)arg1 ;
-(ASAsset *)updateAsset;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(ASAsset *)arg1 ;
-(id)initWithUpdateAsset:(id)arg1 ;
@end

