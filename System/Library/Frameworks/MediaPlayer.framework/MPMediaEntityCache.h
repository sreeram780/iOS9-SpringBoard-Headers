/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPMediaEntityCache : NSObject {

	id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
	BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
	opaque_pthread_rwlock_t _rwlock;
	NSObject*<OS_dispatch_queue> _queue;
	CFDictionaryRef _concreteEntitiesByDataProviderEntityClass;
	NSMutableArray* _entityTemporaryReferences;

}
-(id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(/*^block*/id)arg2 ;
-(void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 ;
-(id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(/*^block*/id)arg3 ;
-(id)initWithMediaLibraryDataProvider:(id)arg1 ;
-(void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(BOOL)arg3 ;
-(map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > >*)_entityMapForDataProviderEntityClass:(Class)arg1 ;
-(void)_performWithSharedAccess:(/*^block*/id)arg1 ;
-(id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(/*^block*/id)arg4 ;
-(void)_performWithExclusiveAccess:(/*^block*/id)arg1 ;
-(void)_clearSomeGlobalEntityTemporaryReferences;
-(id)itemWithIdentifier:(long long)arg1 ;
-(id)init;
@end

