/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface OKUILabelHUDView : UIView {

	UILabel* _label;

}

@property (retain,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(UILabel *)label;
-(void)updateShadowPath;
@end

