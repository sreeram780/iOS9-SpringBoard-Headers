/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface _MCDAlbumTracksCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _trackNumberLabel;
	UILabel* _durationLabel;
	double _maximumDurationWidth;

}

@property (nonatomic,copy) NSString * trackNumberText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * durationText; 
@property (assign,nonatomic) double maximumDurationWidth;              //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)maximumDurationWidth;
-(void)setDurationText:(NSString *)arg1 ;
-(void)setMaximumDurationWidth:(double)arg1 ;
-(void)setTrackNumberText:(NSString *)arg1 ;
-(NSString *)trackNumberText;
-(NSString *)durationText;
@end

