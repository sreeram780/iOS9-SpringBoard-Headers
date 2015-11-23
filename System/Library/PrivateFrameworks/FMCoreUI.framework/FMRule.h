/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface FMRule : UIView {

	BOOL _leading;
	UIColor* _color;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL leading;                         //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)imageWithColor:(id)arg1 leading:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)leading;
-(void)prepareForInterfaceBuilder;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)commonSetup;
-(void)setLeading:(BOOL)arg1 ;
@end

