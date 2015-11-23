/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {

	NSNumber* _accountID;
	NSNumber* _originalPurchaserAccountID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _cloudMatchStatus;
	BOOL _isRestore;
	NSMutableDictionary* _properties;

}

@property (nonatomic,copy) NSString * bundleID;                                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * cloudItemID; 
@property (nonatomic,retain) NSNumber * cloudMatchStatus; 
@property (nonatomic,copy) NSString * downloadKind; 
@property (nonatomic,copy) NSString * podcastEpisodeGUID; 
@property (assign,getter=isRestoreDownload,nonatomic) BOOL restoreDownload;              //@synthesize isRestore=_isRestore - In the implementation block
@property (nonatomic,copy) NSString * storeAccountAppleID; 
@property (nonatomic,retain) NSNumber * storeAccountID; 
@property (nonatomic,retain) NSNumber * storeOriginalPurchaserAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,retain) NSNumber * storeItemID; 
@property (nonatomic,copy) NSString * storeSoftwareVersionID; 
@property (assign,getter=isDRMFree,nonatomic) BOOL DRMFree; 
@property (nonatomic,copy) NSString * storeFlavor; 
@property (nonatomic,copy) NSString * videoDimensions; 
-(NSString *)bundleID;
-(NSNumber *)storeItemID;
-(NSNumber *)storeAccountID;
-(void)dealloc;
-(id)init;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)videoDimensions;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(id)initWithRestoreDownload:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(NSString *)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(id)_initSSRestoreContentItem;
-(void)setValue:(id)arg1 forAssetProperty:(id)arg2 ;
-(id)_restoreKeyForAssetProperty:(id)arg1 ;
-(id)_restoreKeyForDownloadProperty:(id)arg1 ;
-(void)setStoreAccountAppleID:(NSString *)arg1 ;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(void)setCloudMatchStatus:(NSNumber *)arg1 ;
-(NSNumber *)cloudItemID;
-(NSNumber *)cloudMatchStatus;
-(id)copyRestoreDictionary;
-(NSString *)downloadKind;
-(BOOL)isDRMFree;
-(void)setCloudItemID:(NSNumber *)arg1 ;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)setDRMFree:(BOOL)arg1 ;
-(void)setStoreOriginalPurchaserAccountID:(NSNumber *)arg1 ;
-(void)setStoreFlavor:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setStoreSoftwareVersionID:(NSString *)arg1 ;
-(void)setVideoDimensions:(NSString *)arg1 ;
-(NSString *)storeAccountAppleID;
-(NSString *)storeFlavor;
-(NSNumber *)storeOriginalPurchaserAccountID;
-(NSString *)storeSoftwareVersionID;
-(BOOL)isRestoreDownload;
-(void)setRestoreDownload:(BOOL)arg1 ;
-(NSString *)storeFrontID;
@end

