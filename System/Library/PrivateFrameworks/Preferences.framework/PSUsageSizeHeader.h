/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface PSUsageSizeHeader : UIView <PSHeaderFooterView> {

	UILabel* _sizeLabel;
	UILabel* _titleLabel;
	double _height;

}
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(void)setSize:(id)arg1 ;
-(void)setSizeLabelHidden:(BOOL)arg1 ;
@end

