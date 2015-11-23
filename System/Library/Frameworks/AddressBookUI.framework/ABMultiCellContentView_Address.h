/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView_DisplayAlternate.h>

@class NSArray, NSMutableArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {

	NSArray* _lineInfos;
	NSMutableArray* _lineSubviews;
	NSRange _streetRange;
	unsigned long long _entryFieldIndexOfFirstStreetField;
	NSMutableArray* _verticalDividers;

}
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2 ;
+(id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2 ;
+(long long)calculateStreetRowsForText:(id)arg1 ;
+(unsigned long long)rowsForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setPropertyGroupInfo:(id)arg1 ;
-(long long)tagForPropertyKey:(id)arg1 ;
-(void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)propertyKeyForTag:(long long)arg1 ;
-(unsigned long long)lineIndexOfStreetField:(id)arg1 ;
-(id)streetFieldAtLineIndex:(unsigned long long)arg1 ;
-(void)addStreetFieldAnimated:(BOOL)arg1 ;
-(void)removeStreetFieldAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)pickerView;
-(void)dealloc;
-(void)reload;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
@end

