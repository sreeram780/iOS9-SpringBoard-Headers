/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
-(void)performDefaultAction;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)setLabelTextAttributes:(id)arg1 ;
-(double)bottomBaselineConstant;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UITextView *)textView;
-(id)valueView;
-(id)labelView;
-(UILabel *)labelLabel;
-(BOOL)shouldPerformDefaultAction;
@end

