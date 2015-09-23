//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SBMotionGestureObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBNotificationRowActionFactory;

@interface SBNCTableViewController : UITableViewController <SBMotionGestureObserver>
{
    id <SBNCTableViewControllerDelegate> _delegate;
    NSMutableArray *_orderedSections;
    NSMutableDictionary *_sectionIDsToRows;
    NSMutableDictionary *_reusableViewIDsToUnregisteredCellClassNames;
    NSMutableDictionary *_reusableViewIDsToUnregisteredHeaderClassNames;
    _Bool _tableViewNeedsReload;
    _Bool _animationsEnabled;
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int decidesHighlight:1;
        unsigned int interestedInSelection:1;
        unsigned int suppliesLayoutMode:1;
    } _notificationCenterTableViewControllerDelegateFlags;
    SBNotificationRowActionFactory *_cellButtonFactory;
    _Bool _usesTableViewSeparators;
    _Bool _canDismissBulletins;
}

@property(nonatomic) _Bool canDismissBulletins; // @synthesize canDismissBulletins=_canDismissBulletins;
@property(nonatomic) _Bool usesTableViewSeparators; // @synthesize usesTableViewSeparators=_usesTableViewSeparators;
@property(nonatomic) id <SBNCTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasFirstBulletinInSectionWithRaiseAction;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_selectAction:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)hasContent;
- (void)invalidateCachedLayoutData;
- (void)invalidateSectionAndRowViewHeights:(CDUnknownBlockType)arg1;
- (id)viewForRow:(id)arg1 inSection:(id)arg2;
- (id)indexPathForRow:(id)arg1 inSection:(id)arg2;
- (unsigned long long)indexOfSection:(id)arg1;
- (void)reloadRows:(id)arg1 inSection:(id)arg2;
- (void)replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3;
- (void)removeRow:(id)arg1 inSection:(id)arg2;
- (void)addRow:(id)arg1 inSection:(id)arg2;
- (void)insertRow:(id)arg1 beforeRow:(id)arg2 inSection:(id)arg3;
- (void)replaceWithSection:(id)arg1 section:(id)arg2;
- (void)reloadSections:(id)arg1 withRowPopulator:(CDUnknownBlockType)arg2;
- (void)reorderSections:(id)arg1;
- (void)moveSection:(id)arg1 beforeSection:(id)arg2;
- (void)removeSection:(id)arg1;
- (void)insertSection:(id)arg1 beforeSection:(id)arg2;
- (void)_performReplacementOperation:(id)arg1;
- (void)_performMoveOperation:(id)arg1;
- (void)_performRemovalOperation:(id)arg1;
- (void)_performInsertionOperation:(id)arg1;
- (void)performOperationsWithoutAnimation:(CDUnknownBlockType)arg1;
- (_Bool)_replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3 dryRun:(_Bool)arg4;
- (_Bool)_removeRow:(id)arg1 fromSection:(id)arg2 dryRun:(_Bool)arg3;
- (_Bool)_insertRow:(id)arg1 atIndex:(unsigned long long)arg2 inSection:(id)arg3 dryRun:(_Bool)arg4;
- (void)removeChildRowIfPossible:(id)arg1;
- (void)addChildRowIfPossible:(id)arg1;
- (_Bool)_replaceWithSection:(id)arg1 section:(id)arg2 dryRun:(_Bool)arg3;
- (_Bool)_moveSection:(id)arg1 toIndex:(unsigned long long)arg2 dryRun:(_Bool)arg3;
- (_Bool)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 dryRun:(_Bool)arg3;
- (_Bool)_removeSection:(id)arg1 dryRun:(_Bool)arg2;
- (long long)_sectionLocationAtIndexPath:(id)arg1;
- (id)_representedBulletinAtIndexPath:(id)arg1;
- (id)_rowInfoAtIndexPath:(id)arg1;
- (id)_sectionInfoAtIndexPath:(id)arg1;
- (id)rowsInSectionWithIdentifier:(id)arg1;
- (id)orderedSections;
- (void)_updateReusableView:(id)arg1 forInterfaceItemInfo:(id)arg2 withLayoutMode:(long long)arg3;
- (long long)_layoutMode;
- (void)_updateReusableViews;
@property(nonatomic) struct CGRect tableViewFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)invalidateData;
- (void)_reloadOrInvalidateTableViewData;
- (void)reloadTableViewDataIfNecessary;
- (void)_reloadTableViewData;
- (void)setTableViewNeedsReload;
- (id)_viewIfLoaded;
- (void)viewDidLoad;
- (void)_updateEnhancedContrastSettings:(id)arg1;
- (void)_registerOrQueueReusableViewClassForInfo:(id)arg1;
- (void)_registerOrQueueHeaderClassForInfo:(id)arg1;
- (void)_registerOrQueueCellClassForInfo:(id)arg1;
- (void)_registerOrQueueReusableClass:(Class)arg1 forIdentifier:(id)arg2 registerBlock:(CDUnknownBlockType)arg3 queueBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

