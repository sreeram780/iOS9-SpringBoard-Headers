/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCoreUI/FMTitleView.h>

@class UILabel, FMFLocation;

@interface FMFTitleView : FMTitleView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FMFLocation* _location;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) FMFLocation * location;               //@synthesize location=_location - In the implementation block
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(FMFLocation *)location;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setLocation:(FMFLocation *)arg1 ;
-(void)_updateLabels:(id)arg1 ;
-(id)initFromNib;
-(void)updateLocation:(id)arg1 ;
@end

