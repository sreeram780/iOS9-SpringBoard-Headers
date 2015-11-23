/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class CNPropertyGroupAlertItem, NSString;

@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>

@property (nonatomic,readonly) CNPropertyGroupAlertItem * alertItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
-(void)performDefaultAction;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(CNPropertyGroupAlertItem *)alertItem;
-(id)_correspondingAlertItemOfKind:(long long)arg1 ;
-(BOOL)shouldPerformDefaultAction;
@end

