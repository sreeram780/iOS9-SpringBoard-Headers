/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIControl;

@interface PSControlTableCell : PSTableCell {

	UIControl* _control;

}

@property (nonatomic,retain) UIControl * control; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)dealloc;
-(id)newControl;
-(void)controlChanged:(id)arg1 ;
-(id)controlValue;
-(id)valueLabel;
-(UIControl *)control;
-(void)setControl:(UIControl *)arg1 ;
@end

