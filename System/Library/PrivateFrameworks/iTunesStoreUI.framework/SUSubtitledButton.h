/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, NSString, UIColor;

@interface SUSubtitledButton : UIButton {

	CFDictionaryRef _subtitleContentLookup;
	UILabel* _subtitleView;

}

@property (nonatomic,retain,readonly) NSString * currentSubtitle; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleColor; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleShadowColor; 
@property (nonatomic,retain,readonly) UILabel * subtitleLabel; 
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)subtitleLabel;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSString *)currentSubtitle;
-(void)_setupSubtitleView;
-(UIColor *)currentSubtitleShadowColor;
-(UIColor *)currentSubtitleColor;
-(CGRect)subtitleRectForContentRect:(CGRect)arg1 ;
-(id)_subtitleFont;
-(long long)_subtitleLineBreakMode;
-(void)configureFromScriptButton:(id)arg1 ;
-(id)subtitleForState:(unsigned long long)arg1 ;
-(id)subtitleColorForState:(unsigned long long)arg1 ;
-(id)subtitleShadowColorForState:(unsigned long long)arg1 ;
-(id)_subtitledContentForState:(unsigned long long)arg1 ;
@end

