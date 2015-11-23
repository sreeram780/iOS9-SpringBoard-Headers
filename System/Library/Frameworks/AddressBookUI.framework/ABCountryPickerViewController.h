/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UITableView, UILocalizedIndexedCollation, NSArray, NSDictionary, UISearchBar, UISearchDisplayController, NSString, NSIndexPath;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate> {

	UITableView* _tableView;
	UILocalizedIndexedCollation* _collation;
	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	NSDictionary* _indexToSections;
	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	NSArray* _filteredCountries;
	NSString* _selectedCountryCode;
	NSIndexPath* _selectedIndexPath;
	NSArray* _allCountries;

}

@property (nonatomic,retain) NSString * selectedCountryCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadCountryCodes;
-(void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2 ;
-(void)configureSections;
-(NSString *)selectedCountryCode;
-(void)setSelectedCountryCode:(NSString *)arg1 ;
-(void)scrollToSearchFieldAnimated:(BOOL)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
@end

