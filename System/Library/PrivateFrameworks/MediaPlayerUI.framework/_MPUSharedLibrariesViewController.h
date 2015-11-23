/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class MPMediaLibrary, NSArray;

@interface _MPUSharedLibrariesViewController : UITableViewController {

	MPMediaLibrary* _connectingMediaLibrary;
	NSArray* _sharedMediaLibraries;
	BOOL _showsLocalLibrary;

}

@property (assign,nonatomic) BOOL showsLocalLibrary;              //@synthesize showsLocalLibrary=_showsLocalLibrary - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setShowsLocalLibrary:(BOOL)arg1 ;
-(void)_cancelConnectionAndDismiss;
-(BOOL)showsLocalLibrary;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1 ;
-(id)_sharedMediaLibraries;
-(void)_updateConnectionProgressForCell:(id)arg1 ;
-(void)_reloadSharedLibraries;
-(void)_updateNavigationPrompt;
-(void)_updateConnectionProgress;
@end

