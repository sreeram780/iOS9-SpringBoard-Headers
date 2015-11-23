/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABAbstractViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABMembersControllerDelegate.h>
#import <libobjc.A.dylib/ABViewControllerBannerViewProtocol.h>
#import <libobjc.A.dylib/ABPersonEditDelegate.h>

@class ABMembersController, _UIAccessDeniedView, CNContact, NSString;

@interface ABMembersViewController : ABAbstractViewController <CNContactViewControllerAddContactPresenter, ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {

	ABMembersController* _membersController;
	int _insertionProperty;
	id _insertionValue;
	id _insertionLabel;
	int _rightButtonBehavior;
	int _leftButtonBehavior;
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;
	_UIAccessDeniedView* _accessDeniedView;

}

@property (readonly) BOOL allowsCancel; 
@property (readonly) BOOL allowsCardEditing; 
@property (readonly) BOOL shouldShowGroups; 
@property (readonly) CNContact * unsavedContact; 
@property (readonly) BOOL isSearchingWithNoContactSelected; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshEverythingNow;
-(int)abViewControllerType;
-(void)modelDatabaseChange:(id)arg1 ;
-(BOOL)shouldShowGroups;
-(void)membersControllerWillStartSearching:(id)arg1 ;
-(void)membersControllerDidEndServerSearch:(id)arg1 ;
-(void)membersControllerWillEndSearching:(id)arg1 ;
-(void)membersControllerDidEndSearching:(id)arg1 ;
-(BOOL)selectAndScrollMemberVisible:(void*)arg1 ;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 ;
-(void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2 ;
-(void)personWasSelected:(void*)arg1 ;
-(BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(BOOL)allowsShowingPersonsCards;
-(void)scrollMemberToTop:(void*)arg1 ;
-(void)resetStateForDisplayedFilterChange;
-(void)cancelSearching:(id)arg1 ;
-(void)setBannerTitle:(id)arg1 value:(id)arg2 ;
-(void)_applicationEnteringForeground;
-(void)_applicationEnteringBackground;
-(void)_updateForModel;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)startRefreshingAccount;
-(void)cancelRefreshingAccount;
-(BOOL)allowsCancel;
-(BOOL)allowsCardEditing;
-(void)presentGroupsViewController;
-(void)addPerson:(id)arg1 ;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)membersController;
-(void)addPersonWithContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)addContactPresenter;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4 ;
-(void)resetInsertionData;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3 ;
-(void)reallyHandleExternalChangeOnPersonViewControllers;
-(void)handleExternalChangeOnPersonViewControllers;
-(void)personWasDeleted;
-(void)nameUpdatedForPerson:(void*)arg1 ;
-(void)linksUpdatedForPerson:(void*)arg1 ;
-(void)preferredPersonDidChangeToPerson:(void*)arg1 ;
-(void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3 ;
-(BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3 ;
-(BOOL)isSearchingWithNoContactSelected;
-(BOOL)isNavigationButtonEnabled:(int)arg1 ;
-(CNContact *)unsavedContact;
-(id)indexPathForMember:(void*)arg1 ;
-(BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3 ;
-(void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1 ;
-(void)model:(id)arg1 localChangeWithInfo:(CFDictionaryRef)arg2 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)loadState;
-(void)updateTitle;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)tableView;
-(id)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(id)defaultPNGName;
-(BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateView;
-(id)initWithModel:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end

