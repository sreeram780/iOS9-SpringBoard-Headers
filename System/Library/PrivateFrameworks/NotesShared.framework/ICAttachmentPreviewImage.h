/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>

@class NSDate, NSSet, NSData;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject {

	unsigned long long _imageID;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) BOOL versionOutOfDate; 
@property (nonatomic,retain) NSDate * modifiedDate; 
@property (nonatomic,retain) NSSet * attachments; 
@property (assign,nonatomic) BOOL scaleWhenDrawing; 
@property (nonatomic,retain) NSData * metadata; 
+(id)recordType;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)imageCache;
+(id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 ;
+(void)purgeAllPreviewImages;
+(UIImage*)orientedImage:(UIImage*)arg1 withTransform:(CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(CGAffineTransform)arg4 ;
+(id)previewImageDirectoryURL;
+(id)fileQueue;
+(void)waitUntilFileAccessIsFinished;
-(id)recordZoneID;
-(void)deleteFromLocalDatabase;
-(BOOL)needsInitialFetchFromCloud;
-(BOOL)supportsDeletionByTTL;
-(id)threadUnsafeNewlyCreatedRecord;
-(BOOL)needsToBeFetchedFromCloud;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)isInICloudAccount;
-(void)resetUniqueIdentifier;
-(void)mergeDataFromRecord:(id)arg1 newPreviewImage:(BOOL)arg2 ;
-(BOOL)resolveReference:(id)arg1 forKey:(id)arg2 ;
-(CGSize)size;
-(UIImage*)image;
-(id)loggingDescriptionValues;
-(void)setImage:(UIImage*)arg1 withScale:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateImage;
-(id)previewImageURL;
-(UIImage*)orientedImage;
-(id)orientedImageID;
-(void)invalidateOrientedImage;
-(id)temporaryPreviewImageURL;
-(void)setCachedOrientedImage:(UIImage*)arg1 ;
-(id)orientedPreviewImageURLCreateIfNeeded:(BOOL)arg1 ;
-(void)setCachedImage:(UIImage*)arg1 ;
-(UIImage*)cachedOrientedImage;
-(long long)previewImageOrientation;
-(CGAffineTransform)orientedImageTransform;
-(UIImage*)cachedImage;
-(id)oldPreviewImageURL;
-(id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 ;
-(BOOL)makeSurePreviewImageDirectoryExists:(id*)arg1 ;
-(UIImage*)orientedImageWithBackground:(int)arg1 ;
-(BOOL)isSketch;
-(UIImage*)imageWithBackground:(int)arg1 ;
-(id)orientedPreviewImageURL;
-(BOOL)shouldSyncToCloud;
-(void)prepareForDeletion;
@end

