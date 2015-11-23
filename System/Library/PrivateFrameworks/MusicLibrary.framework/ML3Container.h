/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSString, NSArray;

@interface ML3Container : ML3Entity

@property (readonly) ML3Predicate * staticPredicate; 
@property (readonly) ML3Predicate * dynamicPredicate; 
@property (getter=isLimitedByCount,readonly) BOOL limitedByCount; 
@property (getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending; 
@property (copy,readonly) NSString * limitingProperty; 
@property (copy,readonly) NSArray * limitOrderingTerms; 
@property (readonly) long long limitValue; 
@property (copy,readonly) NSArray * cloudDisplayOrderingTerms; 
@property (copy,readonly) NSArray * displayOrderingTerms; 
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(int)protocolSortTypeFromTrackOrder:(unsigned)arg1 ;
+(unsigned)trackOrderFromProtocolSortType:(int)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(void)initialize;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(id)foreignColumnForProperty:(id)arg1 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg1 ;
+(id)extraTablesToDelete;
+(id)defaultFilterPredicates;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(void)populateDynamicContainersInLibrary:(id)arg1 ;
+(void)populateStaticItemsOfDynamicContainersInLibrary:(id)arg1 ;
+(void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1 ;
+(BOOL)hasCriterionInCriteriaList:(SearchCriteriaListRef)arg1 forITDBTrackField:(int)arg2 ;
+(id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3 ;
+(id)predicateForCriteriaList:(SearchCriteriaListRef)arg1 dynamicCriteria:(BOOL)arg2 parentMatchedAny:(BOOL)arg3 ;
+(void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned)arg3 limited:(BOOL)arg4 trackOrder:(unsigned)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8 ;
+(void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3 ;
+(void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3 usingConnection:(id)arg4 ;
+(BOOL)createMissingBuiltInSmartPlaylists:(id)arg1 ;
+(id)__mediaTypesForTracksWithDatabaseConnection:(id)arg1 tracksPersistentIDsEnumerationBlock:(/*^block*/id)arg2 ;
+(void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(/*^block*/id)arg3 ;
+(void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 ;
+(id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 ;
+(void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3 ;
+(void)reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 connection:(id)arg2 ;
+(void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3 ;
+(id)_mediaTypesForTracksWithSwappedPersistentIDsInArray:(id)arg1 connection:(id)arg2 ;
+(id)_mediaTypesForTracksWithSwappedPersistentIDs:(const long long*)arg1 count:(int)arg2 connection:(id)arg3 ;
+(BOOL)smartCriteriaCanBeEvaluated:(id)arg1 ;
+(BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1 ;
+(id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 ;
+(void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2 ;
+(void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(BOOL)arg2 ;
+(void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 ;
-(id)_criteriaListDescription:(SearchCriteriaListRef)arg1 level:(long long)arg2 ;
-(id)_stringForCriterionMatchKey:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForCriterionMatchType:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForCriterionBuffer:(SCD_Struct_ML10*)arg1 ;
-(id)_addUnitesForCriterionInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_booleanStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForTrackFieldMediaKind:(long long)arg1 ;
-(id)_stringForTrackFieldCloudStatus:(long long)arg1 ;
-(id)_convertNumericValueFromCriterionMatchKey:(unsigned)arg1 criteriaValue:(long long)arg2 ;
-(id)_formatTime:(long long)arg1 ;
-(id)_stringStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_numericStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_nonzeroStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_dateStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)criteriaListDescription;
-(id)multiverseIdentifier;
-(id)protocolItem;
-(void)setValues:(id)arg1 forProperties:(id)arg2 async:(BOOL)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(BOOL)addTrackWithPersistentID:(long long)arg1 ;
-(BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)removeTracksWithPersistentIDs:(const long long*)arg1 atFilteredIndexes:(id)arg2 ;
-(BOOL)removeAllTracks;
-(BOOL)removeFirstTrack;
-(BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(BOOL)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(void)_setContainerSeedItemPersistentIDValue:(id)arg1 ;
-(SearchCriteriaListRef)importedCriteriaList;
-(BOOL)isEvaluationOrderingDescending;
-(BOOL)isLimitOrderingDescending;
-(NSArray *)limitOrderingTerms;
-(id)evaluationOrderingTerms;
-(ML3Predicate *)staticPredicate;
-(id)populateSQLWithStaticTrackPersistentID:(id)arg1 ;
-(id)populateStatementParametersWithStaticTrackPersistentID:(id)arg1 ;
-(BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3 ;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 mediaTypesToRemove:(id)arg3 mediaTypesToAdd:(id)arg4 size:(int)arg5 notify:(BOOL)arg6 ;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 size:(int)arg3 notify:(BOOL)arg4 ;
-(BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 ;
-(void)_accessCurrentSwappedPersisentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 mediaTypesToRemove:(id)arg2 mediaTypesToAdd:(id)arg3 size:(int)arg4 notify:(BOOL)arg5 ;
-(BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(/*^block*/id)arg3 ;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 size:(int)arg3 ;
-(ML3Predicate *)dynamicPredicate;
-(BOOL)isLimitedByCount;
-(NSString *)limitingProperty;
-(NSArray *)cloudDisplayOrderingTerms;
-(NSArray *)displayOrderingTerms;
-(BOOL)removeTracksAtIndexes:(id)arg1 ;
-(BOOL)setTracksWithSwappedPersistentIDData:(id)arg1 ;
-(id)trackPersistentIds;
-(id)childPlaylistPersistentIds;
-(BOOL)isBuiltInSmartPlaylist;
-(long long)limitValue;
@end

