/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIColor;

@interface ASSettingsCurrentTimeCell : PSTableCell {

	BOOL _cellFocusColor;
	UIColor* _oldTextColor;

}

@property (nonatomic,retain) UIColor * oldTextColor;              //@synthesize oldTextColor=_oldTextColor - In the implementation block
@property (assign,nonatomic) BOOL cellFocusColor;                 //@synthesize cellFocusColor=_cellFocusColor - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)setCellFocusColor:(BOOL)arg1 ;
-(UIColor *)oldTextColor;
-(void)setOldTextColor:(UIColor *)arg1 ;
-(BOOL)cellFocusColor;
@end

