/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField, UIView, NSAttributedString, NSString, UIControl;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) UIControl * textField;                                //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate; 
@property (nonatomic,copy) NSString * value; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(UIControl *)textField;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end

