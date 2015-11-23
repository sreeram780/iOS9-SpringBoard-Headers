/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView {

	UIImageView* _shadowView;

}

@property (readonly) UIImageView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultHeight;
+(id)backgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(UIImageView *)shadowView;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

