/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSManagedObjectContext, NSString, NSArray;

@interface NSFetchedResultsController : NSObject {

	NSFetchRequest* _fetchRequest;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _sectionNameKeyPath;
	NSString* _sectionNameKey;
	NSString* _cacheName;
	void* _cache;
	struct {
		unsigned _sendObjectChangeNotifications : 1;
		unsigned _sendSectionChangeNotifications : 1;
		unsigned _sendDidChangeContentNotifications : 1;
		unsigned _sendWillChangeContentNotifications : 1;
		unsigned _sendSectionIndexTitleForSectionName : 1;
		unsigned _changedResultsSinceLastSave : 1;
		unsigned _hasMutableFetchedResults : 1;
		unsigned _hasBatchedArrayResults : 1;
		unsigned _hasSections : 1;
		unsigned _usesNonpersistedProperties : 1;
		unsigned _includesSubentities : 1;
		unsigned _reservedFlags : 21;
	}  _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * sectionNameKeyPath;                              //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (nonatomic,readonly) NSString * cacheName;                                       //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) id<NSFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sections; 
+(id)_CoreDataSectionCachesPath;
+(unsigned long long)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(unsigned long long)arg3 highIdx:(unsigned long long)arg4 sortDescriptors:(id)arg5 ;
+(void)deleteCacheWithName:(id)arg1 ;
+(void)initialize;
-(BOOL)_keyPathContainsNonPersistedProperties:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_managedObjectContextDidChange:(id)arg1 ;
-(BOOL)_restoreCachedSectionInfo;
-(BOOL)_computeSectionInfo:(id)arg1 error:(id*)arg2 ;
-(id)_sectionNameForObject:(id)arg1 ;
-(id)_sectionCachePath;
-(BOOL)_computeSectionInfoWithGroupBy:(id)arg1 error:(id*)arg2 ;
-(id)_resolveSectionIndexTitleForSectionName:(id)arg1 ;
-(void)_makeMutableFetchedObjects;
-(BOOL)_objectInResults:(id)arg1 ;
-(unsigned long long)_indexOfFetchedID:(id)arg1 ;
-(id)_createNewSectionForObject:(id)arg1 ;
-(void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateSectionOffsetsStartingAtSection:(id)arg1 ;
-(id)_indexPathForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_sectionNumberForIndex:(unsigned long long)arg1 ;
-(void)_removeObjectInFetchedObjectsAtIndex:(unsigned long long)arg1 ;
-(BOOL)_postprocessDeletedObjects:(id)arg1 ;
-(BOOL)_postprocessInsertedObjects:(id)arg1 ;
-(BOOL)_hasFetchedObjects;
-(id)_fetchedObjectsArrayOfObjectIDs;
-(void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3 ;
-(void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3 ;
-(void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(BOOL)arg7 ;
-(BOOL)_postprocessUpdatedObjects:(id)arg1 ;
-(void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long*)arg2 ;
-(void)_updateCachedStoreInfo;
-(BOOL)_didUseCachedSectionInfo;
-(BOOL)_didUpdateOnlyStoreInfo;
-(BOOL)_didFailPostprocessing;
-(BOOL)_didUseGroupBy;
-(void)_dumpSectionInfo;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(BOOL)performFetch:(id*)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(id)sectionIndexTitleForSectionName:(id)arg1 ;
-(long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(NSString *)sectionNameKeyPath;
-(NSString *)cacheName;
-(NSArray *)fetchedObjects;
-(void)setDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
-(NSManagedObjectContext *)managedObjectContext;
-(NSFetchRequest *)fetchRequest;
@end

