/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PTSRowObserver.h>

@class NSIndexPath, PTSChoiceRow, NSString;

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTSChoiceRow* _row;

}

@property (nonatomic,retain) PTSChoiceRow * row;                    //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PTSChoiceRow *)row;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setRow:(PTSChoiceRow *)arg1 ;
-(id)_indexPathForValue:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
-(void)row:(id)arg1 didChangeValue:(id)arg2 ;
@end

