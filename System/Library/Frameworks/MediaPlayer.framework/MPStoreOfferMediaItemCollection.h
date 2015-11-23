/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@class MPStoreCompletionOfferResponse, NSArray, MPMediaQuery, MPMediaItemCollection, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {

	MPStoreCompletionOfferResponse* _storeOfferResponse;
	NSArray* _unmergedStoreMediaItems;
	MPMediaQuery* _localItemsQuery;
	MPMediaItemCollection* _localCollection;
	BOOL _hasHiddenRestrictedContent;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _collectionContentRating;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * itemsByRemovingStoreOffers; 
@property (nonatomic,readonly) NSArray * itemsByRemovingLocalItems; 
@property (nonatomic,readonly) BOOL isCollectionOfferPresentable; 
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 ;
+(long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1 ;
+(id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)defaultPropertyValues;
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(NSArray *)itemsByRemovingLocalItems;
-(long long)preferredStoreOfferVariant;
-(id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(BOOL)isDownloadable;
-(NSArray *)itemsByRemovingStoreOffers;
-(BOOL)hasDownloadableStoreOfferItemsForVariant:(long long)arg1 ;
-(BOOL)hasPurchasableStoreOfferItemsForVariant:(long long)arg1 ;
-(void)_loadLocalCollection;
-(BOOL)_checkIsUsableOffer;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4 ;
-(BOOL)_hasRestrictedContent;
-(BOOL)isCheaperToPurchaseIndividualItems;
-(long long)countOfItemsByRemovingLocalItems;
-(BOOL)isCollectionOfferPresentable;
-(unsigned long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
@end

