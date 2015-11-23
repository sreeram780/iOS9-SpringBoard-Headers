/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class ICFolder, ICAccountProxy, NSString, NSSet;

@interface ICAccount : ICNoteContainer <ICCloudObject> {

	BOOL _didAddObservers;
	BOOL _didAddTrashObservers;
	ICFolder* _defaultFolder;
	ICFolder* _trashFolder;
	ICAccountProxy* _accountProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,retain) NSSet * folders; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) NSSet * serverChangeTokens; 
@property (nonatomic,retain) NSSet * deviceMigrationStates; 
@property (nonatomic,retain) NSSet * legacyTombstones; 
@property (assign,nonatomic) int accountType; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (assign,nonatomic) BOOL didFinishMigration; 
@property (assign,nonatomic) BOOL didMigrateOnMac; 
@property (nonatomic,retain) NSString * userRecordName; 
@property (nonatomic,retain) ICAccountProxy * accountProxy;              //@synthesize accountProxy=_accountProxy - In the implementation block
@property (assign,nonatomic) BOOL didAddObservers;                       //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,nonatomic) BOOL didAddTrashObservers;                  //@synthesize didAddTrashObservers=_didAddTrashObservers - In the implementation block
@property (nonatomic,retain) NSSet * ownerInverse; 
@property (nonatomic,retain) ICFolder * defaultFolder;                   //@synthesize defaultFolder=_defaultFolder - In the implementation block
@property (nonatomic,retain) ICFolder * trashFolder;                     //@synthesize trashFolder=_trashFolder - In the implementation block
+(id)recordType;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3 ;
+(id)keyPathsForValuesAffectingLocalizedName;
-(id)recordName;
-(id)recordZoneID;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(id)threadUnsafeNewlyCreatedRecord;
-(BOOL)needsToBeFetchedFromCloud;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)isInICloudAccount;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)localizedName;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)loggingIdentifier;
-(id)loggingDescriptionValues;
-(id)folderWithIdentifier:(id)arg1 ;
-(id)visibleNotes;
-(id)predicateForVisibleAttachments;
-(void)createStandardFolders;
-(void)removeAllObserversIfNecessary;
-(BOOL)hasAnyCustomFolders;
-(unsigned long long)visibleNotesIncludingTrashCount;
-(id)predicateForVisibleNotes;
-(id)titleForNavigationBar;
-(ICFolder *)defaultFolder;
-(ICFolder *)trashFolder;
-(id)visibleFolders;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)visibleNoteContainerChildren;
-(BOOL)supportsLegacyTombstones;
-(id)visibleFoldersWithParent:(id)arg1 ;
-(id)reservedAccountFolderTitles;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(BOOL)didAddTrashObservers;
-(void)setDidAddTrashObservers:(BOOL)arg1 ;
-(void)noteWillBeDeletedOrUndeleted:(id)arg1 ;
-(void)removeTrashObserversIfNecessary;
-(id)defaultFolderIdentifier;
-(id)trashFolderIdentifier;
-(void)addTrashObserversIfNecessary;
-(id)standardFolderIdentifierWithPrefix:(id)arg1 ;
-(id)allItemsFolderLocalizedTitle;
-(ICAccountProxy *)accountProxy;
-(id)predicateForVisibleNotesIncludingTrash;
-(void)updateAccountNameForAccountListSorting;
-(BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg1 ;
-(id)visibleNoteContainers;
-(id)allChildObjects;
-(BOOL)didAddObservers;
-(void)setDidAddObservers:(BOOL)arg1 ;
-(void)setDefaultFolder:(ICFolder *)arg1 ;
-(void)setTrashFolder:(ICFolder *)arg1 ;
-(void)setAccountProxy:(ICAccountProxy *)arg1 ;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(BOOL)isLeaf;
-(BOOL)isDeletable;
-(id)accountName;
-(void)setAccountType:(int)arg1 ;
@end

