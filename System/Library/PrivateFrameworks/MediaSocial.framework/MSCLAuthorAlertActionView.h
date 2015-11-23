/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface MSCLAuthorAlertActionView : UIView {

	UIEdgeInsets _finalLayoutMargins;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * authorName; 
@property (nonatomic,retain) UIImage * image; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)didMoveToSuperview;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(void)setFinalLayoutMargins:(UIEdgeInsets)arg1 ;
@end

