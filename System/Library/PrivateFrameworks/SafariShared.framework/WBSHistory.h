/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryStoreDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSCountedSet, WBSHistorySQLiteStore, NSArray, NSData, NSString;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {

	NSObject*<OS_dispatch_queue> _entriesByURLStringAccessQueue;
	NSMutableDictionary* _entriesByURLString;
	NSCountedSet* _stringsForUserTypedDomainExpansion;
	unsigned long long _historyAgeLimitInDays;
	BOOL _hasStartedLoadingHistory;
	NSObject*<OS_dispatch_queue> _waitUntilHistoryHasLoadedQueue;
	WBSHistorySQLiteStore* _historyStore;

}

@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) BOOL hasAnyHistoryItems; 
@property (nonatomic,readonly) unsigned long long numberOfHistoryItems; 
@property (nonatomic,readonly) unsigned long long numberOfHistoryItemsOnHistoryQueue; 
@property (nonatomic,readonly) unsigned long long historyAgeLimitInDays;                           //@synthesize historyAgeLimitInDays=_historyAgeLimitInDays - In the implementation block
@property (nonatomic,copy) NSData * pushThrottlerData; 
@property (nonatomic,copy) NSData * fetchThrottlerData; 
@property (nonatomic,copy) NSData * syncCircleSizeRetrievalThrottlerData; 
@property (assign,nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle; 
@property (assign,nonatomic) BOOL pushNotificationsAreInitialized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)existingSharedHistory;
+(id)historyDatabaseURL;
+(id)historyPropertyListURL;
+(id)historyDatabaseWriteAheadLogURL;
+(void)clearExistingSharedHistory;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)clearHistory;
-(void)setServerChangeTokenData:(id)arg1 ;
-(void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 ;
-(BOOL)pushNotificationsAreInitialized;
-(void)setPushNotificationsAreInitialized:(BOOL)arg1 ;
-(void)performBlockAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(NSData *)pushThrottlerData;
-(NSData *)fetchThrottlerData;
-(NSData *)syncCircleSizeRetrievalThrottlerData;
-(void)setPushThrottlerData:(NSData *)arg1 ;
-(void)setFetchThrottlerData:(NSData *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlerData:(NSData *)arg1 ;
-(unsigned long long)cachedNumberOfDevicesInSyncCircle;
-(void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replayAndAddTombstone:(id)arg1 ;
-(void)getAllTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4 ;
-(void)updateTitle:(id)arg1 forVisit:(id)arg2 ;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(BOOL)arg4 wasFailure:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 origin:(long long)arg7 ;
-(void)waitUntilHistoryHasLoaded;
-(void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitUntilHistoryHasLoadedMainThread;
-(id)_removeItemForURLString:(id)arg1 ;
-(void)_dispatchHistoryItemsRemoved:(id)arg1 ;
-(id)itemForURLString:(id)arg1 ;
-(void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)_removeAllVisitedLinks;
-(unsigned long long)numberOfHistoryItems;
-(unsigned long long)numberOfHistoryItemsOnHistoryQueue;
-(void)_loadHistoryAsynchronouslyIfNeeded;
-(Class)_historyItemClass;
-(void)_dispatchHistoryItemWillChange:(id)arg1 ;
-(void)_dispatchHistoryVisitAdded:(id)arg1 ;
-(void)_dispatchHistoryItemsAdded:(id)arg1 ;
-(void)_dispatchHistoryItemDidChange:(id)arg1 ;
-(BOOL)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2 ;
-(void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchHistoryCleared:(id)arg1 ;
-(void)performMaintenance;
-(void)_loadHistory;
-(id)_createHistoryStore;
-(void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(BOOL)arg2 ;
-(void)_dispatchHistoryItemsLoaded:(id)arg1 ;
-(void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1 ;
-(void)_dispatchHistoryLoaded;
-(void)_sendNotification:(id)arg1 withItems:(id)arg2 ;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(BOOL)historyStoreShouldRemoveItemsWithURLStringsThatAreNotValidURLs:(id)arg1 ;
-(void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4 ;
-(void)historyLoaderDidFinishLoading:(id)arg1 ;
-(void)removeItemsInResponseToUserAction:(id)arg1 ;
-(void)_removeHistoryItemsInResponseToUserAction:(id)arg1 ;
-(id)itemForURL:(id)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2 ;
-(BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)arg1 ;
-(BOOL)hasAnyHistoryItems;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(double)_ageLimitDay;
-(void)savePendingChangesBeforeTerminationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)historyStore;
-(unsigned long long)historyAgeLimitInDays;
-(NSArray *)allItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
@end

