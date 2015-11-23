/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, NSMutableOrderedSet, NSString, UIImage, NSDictionary, NSURL;


@protocol PLAlbumProtocol <PLAssetContainer>
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@optional
-(id)filteredIndexesForPredicate:(id)arg1;
-(void)setUINotificationsEnabled:(BOOL)arg1;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1;
-(NSString *)name;

@required
-(UIImage *)posterImage;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1;
-(void)batchFetchAssets:(id)arg1;
-(int)kindValue;
-(NSMutableOrderedSet *)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(id)arg1;
-(NSString *)importSessionID;
-(void)setImportSessionID:(id)arg1;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1;
-(NSNumber *)kind;

@end

