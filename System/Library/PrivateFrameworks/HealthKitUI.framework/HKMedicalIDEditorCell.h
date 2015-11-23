/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HKMedicalIDEditorCellEditDelegate;
@class UIView, UILabel, HKCaretOptionalTextField, NSString;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {

	UIView* _verticalSeparatorView;
	UIView* _horizontalSeparatorView;
	double _minimumLabelWidth;
	id<HKMedicalIDEditorCellEditDelegate> _editDelegate;
	UILabel* _labelLabel;
	HKCaretOptionalTextField* _inputTextField;

}

@property (assign,nonatomic) double minimumLabelWidth;                                               //@synthesize minimumLabelWidth=_minimumLabelWidth - In the implementation block
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;                                                 //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) HKCaretOptionalTextField * inputTextField;                            //@synthesize inputTextField=_inputTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(void)setEditDelegate:(id<HKMedicalIDEditorCellEditDelegate>)arg1 ;
-(id<HKMedicalIDEditorCellEditDelegate>)editDelegate;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)beginEditing;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)commitEditing;
-(id)formattedValue;
-(void)updateValueLabel;
-(HKCaretOptionalTextField *)inputTextField;
-(void)valueDidChange;
-(void)setMinimumLabelWidth:(double)arg1 ;
-(double)minimumLabelWidth;
-(id)shortenedFormattedValue;
-(void)_localeDidChange:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UILabel *)labelLabel;
@end

