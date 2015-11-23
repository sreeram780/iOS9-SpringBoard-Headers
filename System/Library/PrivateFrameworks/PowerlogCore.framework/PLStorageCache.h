/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface PLStorageCache : NSObject {

	long long _lastEntryCacheSize;
	long long _stagingEntryCacheSize;
	NSMutableDictionary* _lastEntryCache;
	NSMutableDictionary* _stagingEntryCache;
	NSMutableDictionary* _stagingAggregateEntryCache;
	NSDate* _lastCacheFlushDate;
	NSMutableDictionary* _countWarnings;
	NSMutableDictionary* _countSafetyDrop;

}

@property (assign) long long lastEntryCacheSize;                                  //@synthesize lastEntryCacheSize=_lastEntryCacheSize - In the implementation block
@property (assign) long long stagingEntryCacheSize;                               //@synthesize stagingEntryCacheSize=_stagingEntryCacheSize - In the implementation block
@property (retain) NSMutableDictionary * lastEntryCache;                          //@synthesize lastEntryCache=_lastEntryCache - In the implementation block
@property (retain) NSMutableDictionary * stagingEntryCache;                       //@synthesize stagingEntryCache=_stagingEntryCache - In the implementation block
@property (retain) NSMutableDictionary * stagingAggregateEntryCache;              //@synthesize stagingAggregateEntryCache=_stagingAggregateEntryCache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheFlushDate;                         //@synthesize lastCacheFlushDate=_lastCacheFlushDate - In the implementation block
@property (retain) NSMutableDictionary * countWarnings;                           //@synthesize countWarnings=_countWarnings - In the implementation block
@property (retain) NSMutableDictionary * countSafetyDrop;                         //@synthesize countSafetyDrop=_countSafetyDrop - In the implementation block
+(void)syncAndDispatchForEntryCache:(id)arg1 forEntryKey:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)sharedStorageCache;
-(id)init;
-(long long)stagingEntryCacheSize;
-(NSMutableDictionary *)stagingEntryCache;
-(void)logSizeOfEntryCache:(id)arg1 ;
-(long long)lastEntryCacheSize;
-(NSMutableDictionary *)lastEntryCache;
-(void)dumpEntryCache:(id)arg1 ;
-(id)lastEntryCacheForEntryKey:(id)arg1 ;
-(id)stagingEntryCacheForEntryKey:(id)arg1 withID:(long long)arg2 ;
-(void)setLastEntryCacheSize:(long long)arg1 ;
-(id)lastEntryCacheForEntryKey:(id)arg1 withSubEntryKey:(id)arg2 ;
-(void)enumerateEntryCache:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateStagingEntryCacheForEntryKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(long long)entryIDForNewEntry:(id)arg1 ;
-(void)insertIntoStagingEntryCache:(id)arg1 ;
-(void)addToLastEntryCache:(id)arg1 ;
-(void)addToLastEntryCacheSubKey:(id)arg1 ;
-(void)setStagingEntryCacheSize:(long long)arg1 ;
-(int)limitOfType:(id)arg1 forEntryKey:(id)arg2 ;
-(NSDate *)lastCacheFlushDate;
-(NSMutableDictionary *)countWarnings;
-(NSMutableDictionary *)countSafetyDrop;
-(void)setNextEntryIDForEntryKey:(id)arg1 toEntryID:(long long)arg2 ;
-(void)setLastCacheFlushDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)stagingAggregateEntryCache;
-(void)logSizeOfLastEntryCache;
-(void)logFullLastEntryCacheForEntryKey:(id)arg1 ;
-(void)logStagingEntryCacheForEntryKey:(id)arg1 ;
-(void)dumpLastEntryCache;
-(id)cachedEntryForEntryKey:(id)arg1 withEntryID:(long long)arg2 ;
-(void)clearLastEntryCacheForEntryKey:(id)arg1 ;
-(void)lastEntryCachePruneToDate:(id)arg1 ;
-(id)stagingEntryCacheIDsForEntryKey:(id)arg1 ;
-(long long)stagingEntryCacheSizeForEntryKey:(id)arg1 ;
-(id)stagingEntryCacheForEntryKey:(id)arg1 ;
-(id)stagingEntryCacheForEntryKey:(id)arg1 withIDLessThan:(long long)arg2 ;
-(id)stagingEntryCacheForEntryKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(BOOL)arg3 ;
-(long long)addToStagingEntryCache:(id)arg1 ;
-(void)updateStagingEntryCacheWithEntry:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)flushStagingEntryCacheToDatabase;
-(void)enumerateStagingEntryCacheWithBlock:(/*^block*/id)arg1 ;
-(void)flushStagingAggregateEntryCacheToDatabase;
-(void)addToStagingAggregateEntryCache:(id)arg1 ;
-(void)setLastEntryCache:(NSMutableDictionary *)arg1 ;
-(void)setStagingEntryCache:(NSMutableDictionary *)arg1 ;
-(void)setStagingAggregateEntryCache:(NSMutableDictionary *)arg1 ;
-(void)setCountWarnings:(NSMutableDictionary *)arg1 ;
-(void)setCountSafetyDrop:(NSMutableDictionary *)arg1 ;
-(void)logSizeOfStagingEntryCache;
-(void)dumpStagingEntryCache;
@end

