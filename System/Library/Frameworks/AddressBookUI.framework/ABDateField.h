/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABUILabelWithPlaceholder.h>

@protocol ABDateFieldDelegate, ABDatePickerPresentationDelegate;
@class UIButton, NSDate, UIDatePicker;

@interface ABDateField : ABUILabelWithPlaceholder {

	UIButton* _clearButton;
	BOOL _isClearButtonEnabled;
	NSDate* _date;
	UIDatePicker* _datePicker;
	CGSize _datePickerSize;
	BOOL _usesDatePickerAsInputView;
	BOOL _isFirstResponder;
	BOOL _inBecomeFirstResponder;
	BOOL _editable;
	id<ABDateFieldDelegate> _delegate;
	id<ABDatePickerPresentationDelegate> _presentationDelegate;

}

@property (nonatomic,retain) NSDate * date;                                                          //@synthesize date=_date - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                        //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) CGSize datePickerSize;                                                  //@synthesize datePickerSize=_datePickerSize - In the implementation block
@property (assign,nonatomic) id<ABDateFieldDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<ABDatePickerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)_updateLabelText;
-(void)_dettachFromDatePicker:(id)arg1 ;
-(double)_extraWidthForClearButton;
-(CGRect)_clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_contentRectForBounds:(CGRect)arg1 isClearButtonPresent:(BOOL)arg2 ;
-(void)_clearButtonPressed:(id)arg1 ;
-(BOOL)_shouldEnableClearButton;
-(void)_setClearButtonEnabled:(BOOL)arg1 ;
-(void)_setDate:(id)arg1 andInformDelegate:(BOOL)arg2 ;
-(void)_updateClearButton;
-(void)datePickerDateDidChange:(id)arg1 ;
-(void)_attachToDatePicker:(id)arg1 ;
-(CGSize)datePickerSize;
-(void)setDatePickerSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<ABDateFieldDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ABDateFieldDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSDate *)date;
-(BOOL)isEditable;
-(BOOL)canBecomeFirstResponder;
-(void)endEditing;
-(BOOL)canResignFirstResponder;
-(id)inputView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)_clearButton;
-(CGSize)_clearButtonSize;
-(void)setPresentationDelegate:(id<ABDatePickerPresentationDelegate>)arg1 ;
-(id<ABDatePickerPresentationDelegate>)presentationDelegate;
@end

