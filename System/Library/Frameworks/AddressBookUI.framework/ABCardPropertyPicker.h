/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/ABStyleProviding.h>

@class UITableView, NSArray, NSString;

@interface ABCardPropertyPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABStyleProviding> {

	UITableView* _tableView;
	NSArray* _allProperties;
	NSArray* _policies;
	id _delegate;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)propertyIsAllowed:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 policies:(id)arg2 ;
-(void)deselectAllRowsWithAnimation:(BOOL)arg1 ;
-(id)styleProvider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setProperties:(CFArrayRef)arg1 ;
@end

