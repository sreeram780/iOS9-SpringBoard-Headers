/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <libobjc.A.dylib/ABDateFieldDelegate.h>

@class ABDateField, NSDate;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {

	ABDateField* _dateField;

}

@property (nonatomic,readonly) NSDate * date; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(BOOL)dateFieldShouldClear:(id)arg1 ;
-(void)dateFieldDateDidChange:(id)arg1 ;
-(BOOL)dateFieldShouldBeginEditing:(id)arg1 ;
-(void)dateFieldDidBeginEditing:(id)arg1 ;
-(BOOL)dateFieldShouldEndEditing:(id)arg1 ;
-(void)dateFieldDidEndEditing:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(id)viewForFirstResponder;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(void)setUpdateDelegate:(id)arg1 ;
-(BOOL)dateFieldShouldReturn:(id)arg1 ;
-(void)dealloc;
-(void)reload;
-(NSDate *)date;
@end

