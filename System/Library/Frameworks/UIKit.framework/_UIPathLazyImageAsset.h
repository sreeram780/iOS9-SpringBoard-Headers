/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	BOOL _imagesHaveBeenLoaded;
	BOOL _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) BOOL haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)setImagePaths:(NSArray *)arg1 ;
-(void)setHaveCGCacheImages:(BOOL)arg1 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(BOOL)haveCGCacheImages;
@end

