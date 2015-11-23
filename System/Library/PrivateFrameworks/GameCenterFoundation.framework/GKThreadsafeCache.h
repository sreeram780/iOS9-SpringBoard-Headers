/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, GKLinkedList, NSObject, NSString;

@interface GKThreadsafeCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	NSMutableDictionary* _missingEntryQueues;
	GKLinkedList* _cacheList;
	unsigned long long _maxCount;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                      //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                              //@synthesize cacheList=_cacheList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * missingEntryQueues;              //@synthesize missingEntryQueues=_missingEntryQueues - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxCount:(unsigned long long)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)internalObjectForKey:(id)arg1 ;
-(void)internalSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)objectForKey:(id)arg1 withMissingHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)missingEntryQueues;
-(void)setMissingEntryQueues:(NSMutableDictionary *)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)maxCount;
@end

