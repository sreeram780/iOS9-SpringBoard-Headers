/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MCDPCContainerDelegate.h>

@protocol OS_dispatch_queue;
@class UITableView, UIView, MCDPCContainer, NSIndexPath, UIActivityIndicatorView, _UIFilteredDataSource, NSObject, _MCDBrowsableContentTableViewPreloader, AVExternalDevice, NSString;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate> {

	UITableView* _tableView;
	UIView* _nowPlayingButton;
	MCDPCContainer* _container;
	long long _count;
	NSIndexPath* _selectedNextIndexPath;
	UIActivityIndicatorView* _activityIndicator;
	_UIFilteredDataSource* _dataSource;
	BOOL _shouldReloadOnAppear;
	NSIndexPath* _reselectIndexPath;
	NSObject*<OS_dispatch_queue> _serialQueue;
	_MCDBrowsableContentTableViewPreloader* _selectionPreloader;
	AVExternalDevice* _externalDevice;
	BOOL _limited;
	BOOL _hasCarScreen;
	BOOL _visible;

}

@property (nonatomic,readonly) MCDPCContainer * container;               //@synthesize container=_container - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_limitedUIChanged:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(MCDPCContainer *)container;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(BOOL)isVisible;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_nowPlayingDidChange:(id)arg1 ;
-(void)_clearTableViewSelectionAnimated:(BOOL)arg1 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)showActivity:(BOOL)arg1 inCell:(id)arg2 ;
-(void)_clearLoadingActivity;
-(void)_displayLoadingActivity;
-(void)reloadTable;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(void)containerDidInvalidateRootItem:(id)arg1 ;
-(void)container:(id)arg1 didInvalidateIndicies:(id)arg2 ;
-(void)containerDidChangeCount:(id)arg1 ;
@end

