/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManager.h>

@interface PHCachingImageManager : PHImageManager {

	BOOL _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) BOOL allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
-(void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(id)_highPriorityRequestWaitGroup;
-(BOOL)canAvoidTouchingAssetsWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 options:(id)arg3 outBestFormat:(int*)arg4 outBestFormatIsTable:(BOOL*)arg5 outDegradedFormat:(int*)arg6 outDegradedFormatIsTable:(BOOL*)arg7 ;
-(id)approximateThumbnailIndexesForAssets:(id)arg1 ;
-(id)_fireCloudDownloadOfImageForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)allowsCachingHighQualityImages;
-(void)stopCachingImagesForAllAssets;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1 ;
-(id)init;
-(id)description;
@end

