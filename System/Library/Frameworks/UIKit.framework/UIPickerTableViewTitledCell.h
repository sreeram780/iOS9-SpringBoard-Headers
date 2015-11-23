/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPickerTableViewCell.h>

@class UILabel, UIColor, NSString, NSAttributedString;

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {

	UILabel* _titleLabel;
	BOOL _isAttributed;
	BOOL _usesModernStyle;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) UILabel * _titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) BOOL _isAttributed;                              //@synthesize isAttributed=_isAttributed - In the implementation block
-(BOOL)_canBeReusedInPickerView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)prepareForReuse;
-(UILabel *)_titleLabel;
-(NSAttributedString *)attributedTitle;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(BOOL)_isAttributed;
@end

