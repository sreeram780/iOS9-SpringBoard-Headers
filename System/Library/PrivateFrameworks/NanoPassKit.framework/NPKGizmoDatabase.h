/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoPassKit/NanoPassKit-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray, NSArray, NSData, NSDictionary;

@interface NPKGizmoDatabase : NSObject {

	sqlite3Ref _database;
	sqlite3_stmtRef _deleteStatement;
	sqlite3_stmtRef _insertStatement;
	sqlite3_stmtRef _insertDiffStatement;
	sqlite3_stmtRef _selectPassDataStatement;
	sqlite3_stmtRef _selectPassDiffStatement;
	sqlite3_stmtRef _updateDeletePendingStatment;
	sqlite3_stmtRef _selectDeletePendingStatement;
	sqlite3_stmtRef _updatePreferredAIDStatement;
	sqlite3_stmtRef _selectPreferredAIDStatement;
	NSObject*<OS_dispatch_queue> _dbQueue;
	BOOL _isInTransaction;
	NSMutableDictionary* _manifest;
	NSMutableArray* _passDescriptions;
	NSArray* _libraryHashes;
	int _externallyChangedBroadcasts;
	BOOL _sendingLocalNotifyDatabaseChanged;
	BOOL _needsMoreLocalNotifyDatabaseChanged;
	BOOL _passDBIsAvailable;

}

@property (readonly) NSArray * passDescriptions; 
@property (assign,nonatomic) BOOL passDBIsAvailable;                            //@synthesize passDBIsAvailable=_passDBIsAvailable - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPasses; 
@property (readonly) NSData * libraryHash; 
@property (readonly) NSDictionary * manifestHashes; 
@property (readonly) sqlite3Ref database; 
@property (readonly) sqlite3_stmtRef deleteStatement; 
@property (readonly) sqlite3_stmtRef insertStatement; 
@property (readonly) sqlite3_stmtRef selectPassDataStatement; 
@property (readonly) sqlite3_stmtRef selectPassDiffStatement; 
@property (readonly) sqlite3_stmtRef insertDiffStatement; 
@property (readonly) sqlite3_stmtRef updateDeletePendingStatement; 
@property (readonly) sqlite3_stmtRef updatePreferredAIDStatement; 
@property (readonly) sqlite3_stmtRef selectPreferredAIDStatement; 
+(id)sharedDatabase;
+(id)_migrationDelegateQueue;
+(id)_migrationDataSource;
+(unsigned long long)latestWatchOSMajorVersion;
+(long long)maxDatabaseVersion;
+(void)setMigrationDataSource:(id)arg1 ;
-(sqlite3_stmtRef)insertStatement;
-(void)dealloc;
-(id)init;
-(BOOL)_executeSQL:(id)arg1 ;
-(NSArray *)passDescriptions;
-(id)preferredPaymentApplicationForPaymentPass:(id)arg1 ;
-(NSDictionary *)manifestHashes;
-(NSData *)libraryHash;
-(void)_handleHasMigrationDataSource;
-(void)setPassDBIsAvailable:(BOOL)arg1 ;
-(BOOL)_preconditionsMetForDatabaseOpen;
-(void)_enumerateAllPassesForMigration:(/*^block*/id)arg1 ;
-(BOOL)_updateNFCPayloadDuringMigration:(id)arg1 ;
-(BOOL)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1 ;
-(BOOL)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1 ;
-(BOOL)_updateIngestedDatesDuringMigration:(id)arg1 ;
-(BOOL)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1 ;
-(BOOL)_updateHasUserSelectablePaymentApplications:(id)arg1 ;
-(BOOL)_updateEncodedPaymentPassDuringMigration:(id)arg1 ;
-(BOOL)_updateHasStoredValueDuringMigration:(id)arg1 ;
-(BOOL)_updateSettingsDuringMigration:(id)arg1 ;
-(BOOL)_updateCompleteHashesDuringMigration:(id)arg1 ;
-(BOOL)_migrateDatabase:(/*^block*/id)arg1 ;
-(void)_notifyDatabaseChangedExternally;
-(void)_notifyForFirstUnlock;
-(id)_decodeObjectOfClass:(Class)arg1 fromStatment:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)_loadInitialManifestLocked;
-(void)_savePassLocked:(id)arg1 wasUpdate:(BOOL*)arg2 ;
-(id)_libraryHashLockedForWatchOSMajorVersion:(unsigned long long)arg1 ;
-(void)_notifyDatabaseChangedWithNoop:(BOOL)arg1 ;
-(void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(BOOL)_removePassWithUniqueIDLocked:(id)arg1 ;
-(void)_performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_notifyDatabaseChangedWithNoop:(BOOL)arg1 firstUnlock:(BOOL)arg2 ;
-(BOOL)_passDBIsAvailableLocked;
-(id)_passForUniqueIDLocked:(id)arg1 ;
-(id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id*)arg2 ;
-(BOOL)_getDeletePendingForUniqueID:(id)arg1 ;
-(sqlite3_stmtRef)deleteStatement;
-(void)_executeSQLQuery:(id)arg1 processResultsBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)selectPassDataStatement;
-(sqlite3_stmtRef)selectPassDiffStatement;
-(sqlite3_stmtRef)insertDiffStatement;
-(id)_diffForUniqueIDLocked:(id)arg1 ;
-(sqlite3_stmtRef)updateDeletePendingStatement;
-(sqlite3_stmtRef)selectDeletePendingStatement;
-(sqlite3_stmtRef)updatePreferredAIDStatement;
-(sqlite3_stmtRef)selectPreferredAIDStatement;
-(id)libraryHashForWatchOSMajorVersion:(unsigned long long)arg1 ;
-(id)manifestHashesForWatchOSMajorVersion:(unsigned long long)arg1 ;
-(void)enumerateAllPassesAndDescriptionsWithBlock:(/*^block*/id)arg1 ;
-(long long)_databaseVersionExists:(BOOL*)arg1 valid:(BOOL*)arg2 ;
-(void)_updateDatabaseVersionRow:(long long)arg1 ;
-(void)_insertDatabaseVersionRow:(long long)arg1 ;
-(void)_attemptDatabaseOpen;
-(id)savePass:(id)arg1 ;
-(void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(id)rebuildDatabaseWithPasses:(id)arg1 ;
-(BOOL)passDBIsAvailable;
-(unsigned long long)numberOfPasses;
-(id)passForUniqueID:(id)arg1 ;
-(id)diffForUniqueID:(id)arg1 ;
-(void)setDeletePending:(BOOL)arg1 forUniqueID:(id)arg2 ;
-(void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2 ;
-(void)enumerateAllPassesWithBlock:(/*^block*/id)arg1 ;
-(void)_handleDatabaseChangedExternally;
-(void)_handleFirstUnlock;
-(id)removePassWithUniqueID:(id)arg1 ;
-(sqlite3Ref)database;
@end

