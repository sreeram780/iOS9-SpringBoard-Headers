/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SUMenuViewControllerDelegate;
@class UITableView, NSString;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {

	id<SUMenuViewControllerDelegate> _delegate;
	long long _selectedIndex;
	UITableView* _tableView;

}

@property (assign,nonatomic) id<SUMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SUMenuViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(id<SUMenuViewControllerDelegate>)delegate;
-(void)loadView;
-(id)_tableView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(BOOL)_sendDidCancel;
-(long long)numberOfMenuItems;
-(CGSize)maximumViewSize;
-(CGSize)minimumViewSize;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

