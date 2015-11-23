/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, UIImage;

@interface WallpaperMotionItem : NSObject {

	NSString* _motionKey;
	NSString* _videoPath;
	NSString* _imagePath;
	NSNumber* _stillPositionInVideo;
	NSString* _thumbnailPath;
	UIImage* _cachedThumbnailImage;

}

@property (nonatomic,retain) NSString * motionKey;                         //@synthesize motionKey=_motionKey - In the implementation block
@property (nonatomic,retain) NSString * videoPath;                         //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,retain) NSString * imagePath;                         //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,retain) NSNumber * stillPositionInVideo;              //@synthesize stillPositionInVideo=_stillPositionInVideo - In the implementation block
@property (nonatomic,retain) NSString * thumbnailPath;                     //@synthesize thumbnailPath=_thumbnailPath - In the implementation block
@property (nonatomic,retain) UIImage * cachedThumbnailImage;               //@synthesize cachedThumbnailImage=_cachedThumbnailImage - In the implementation block
-(NSString *)imagePath;
-(NSString *)videoPath;
-(void)setVideoPath:(NSString *)arg1 ;
-(NSString *)thumbnailPath;
-(UIImage *)cachedThumbnailImage;
-(NSString *)motionKey;
-(void)setMotionKey:(NSString *)arg1 ;
-(NSNumber *)stillPositionInVideo;
-(void)setStillPositionInVideo:(NSNumber *)arg1 ;
-(void)setThumbnailPath:(NSString *)arg1 ;
-(void)setCachedThumbnailImage:(UIImage *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
@end

