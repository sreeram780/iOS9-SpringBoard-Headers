/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABAbstractViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UIRefreshControl, ABAccountsAndGroupDataSource, ABPeoplePickerNavigationController, NSString;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {

	UIRefreshControl* _refreshControl;
	ABAccountsAndGroupDataSource* _dataSource;
	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	BOOL _showsRefreshButton;
	ABPeoplePickerNavigationController* _peoplePickerNavigationController;

}

@property (nonatomic,readonly) ABAccountsAndGroupDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPeoplePickerNavigationController * peoplePickerNavigationController;              //@synthesize peoplePickerNavigationController=_peoplePickerNavigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ABPeoplePickerNavigationController *)peoplePickerNavigationController;
-(BOOL)hidesSearchableSources;
-(BOOL)hidesGlobalGroupWrapper;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)setHidesGlobalGroupWrapper:(BOOL)arg1 ;
-(void)updateRefreshButton;
-(void)refreshEverythingNow;
-(void)_updateDisplayedContactsFilterFromSelection;
-(int)abViewControllerType;
-(void)modelDatabaseChange:(id)arg1 ;
-(void)setPeoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(ABAccountsAndGroupDataSource *)dataSource;
-(void)applicationDidResume;
-(void)loadView;
-(id)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)setModel:(id)arg1 ;
@end

