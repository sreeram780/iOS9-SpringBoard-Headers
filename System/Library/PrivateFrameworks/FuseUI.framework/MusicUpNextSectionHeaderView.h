/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MusicUpNextSectionHeaderDelegate;
@class UILabel, UIButton, MusicUpNextPunchOutView, NSString;

@interface MusicUpNextSectionHeaderView : UITableViewHeaderFooterView {

	UILabel* _titleLabel;
	UIButton* _addButton;
	UIButton* _clearButton;
	MusicUpNextPunchOutView* _punchOutView;
	BOOL _showsAddButton;
	BOOL _showsClearButton;
	long long _section;
	id<MusicUpNextSectionHeaderDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showsAddButton;                                               //@synthesize showsAddButton=_showsAddButton - In the implementation block
@property (assign,nonatomic) BOOL showsClearButton;                                             //@synthesize showsClearButton=_showsClearButton - In the implementation block
@property (nonatomic,copy) NSString * headerText; 
@property (assign,nonatomic) long long section;                                                 //@synthesize section=_section - In the implementation block
@property (assign,nonatomic,__weak) id<MusicUpNextSectionHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForTraitCollection:(id)arg1 ;
-(void)setDelegate:(id<MusicUpNextSectionHeaderDelegate>)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MusicUpNextSectionHeaderDelegate>)delegate;
-(long long)section;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSection:(long long)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setShowsAddButton:(BOOL)arg1 ;
-(void)_addButtonPressed;
-(id)_buttonStringForText:(id)arg1 ;
-(void)_clearButtonPressed;
-(BOOL)showsAddButton;
-(void)setShowsClearButton:(BOOL)arg1 ;
-(BOOL)showsClearButton;
@end

