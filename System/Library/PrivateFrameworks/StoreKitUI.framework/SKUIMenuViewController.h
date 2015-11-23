/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SKUIMenuViewControllerDelegate;
@class UIColor, NSArray;

@interface SKUIMenuViewController : UITableViewController {

	UIColor* _borderColor;
	id<SKUIMenuViewControllerDelegate> _delegate;
	long long _indexOfCheckedTitle;
	NSArray* _menuTitles;
	NSArray* _menuImages;
	long long _menuStyle;

}

@property (nonatomic,readonly) NSArray * menuTitles;                                          //@synthesize menuTitles=_menuTitles - In the implementation block
@property (nonatomic,readonly) NSArray * menuImages;                                          //@synthesize menuImages=_menuImages - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long indexOfCheckedTitle;                                   //@synthesize indexOfCheckedTitle=_indexOfCheckedTitle - In the implementation block
@property (assign,nonatomic) long long menuStyle;                                             //@synthesize menuStyle=_menuStyle - In the implementation block
-(void)setDelegate:(id<SKUIMenuViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SKUIMenuViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)setIndexOfCheckedTitle:(long long)arg1 ;
-(NSArray *)menuTitles;
-(void)setMenuStyle:(long long)arg1 ;
-(id)initWithMenuTitles:(id)arg1 images:(id)arg2 ;
-(void)_reloadViewStyling;
-(NSArray *)menuImages;
-(long long)indexOfCheckedTitle;
-(long long)menuStyle;
@end

