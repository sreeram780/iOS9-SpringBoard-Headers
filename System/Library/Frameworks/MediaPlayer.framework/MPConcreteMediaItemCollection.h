/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPCacheableConcreteMediaEntity.h>

@class MPMediaQuery, MPMediaItem, MPConcreteMediaEntityPropertiesCache;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCoding, NSCopying, MPCacheableConcreteMediaEntity> {

	long long _identifier;
	MPMediaQuery* _itemsQuery;
	long long _grouping;
	MPMediaItem* _representativeItem;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
-(id)mediaLibrary;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(long long)groupingType;
-(id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3 ;
-(id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 ;
-(void)invalidateCachedProperties;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)itemsQuery;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6 ;
-(unsigned long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)representativeItem;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
@end
