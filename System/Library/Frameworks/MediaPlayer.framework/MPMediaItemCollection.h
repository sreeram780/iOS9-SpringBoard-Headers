/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSArray, MPMediaQuery, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {

	unsigned long long _containedMediaTypes;
	BOOL _initializedContainedMediaTypes;
	NSArray* _items;
	unsigned long long _itemsCount;
	MPMediaQuery* _itemsQuery;
	MPMediaItem* _representativeItem;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long mediaTypes; 
@property (nonatomic,readonly) long long groupingType; 
+(void)registerSupportedCustomProperties;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)collectionWithItems:(id)arg1 ;
+(id)sortTitlePropertyForGroupingType:(long long)arg1 ;
+(id)representativePersistentIDPropertyForGroupingType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)MPU_contentItemIdentifierCollection;
-(BOOL)MPSD_hasDownloadingItem;
-(BOOL)MPSD_hasDownloadableItem;
-(id)artworkCatalog;
-(id)albumArtistArtworkCatalog;
-(id)artistArtworkCatalog;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)multiverseIdentifier;
-(long long)groupingType;
-(id)initWithItemsQuery:(id)arg1 ;
-(id)itemsQuery;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)mediaTypes;
-(MPMediaItem *)representativeItem;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

