/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIImageView, UILabel, UIView, UIButton;

@interface _SFCrashBanner : UIView {

	_UIBackdropView* _backdrop;
	UIImageView* _closeButtonOverlayImageView;
	UILabel* _label;
	UIView* _separator;
	UIView* _separatorOverlay;
	CGSize _cachedLabelLayoutSize;
	BOOL _usesLightControls;
	UIButton* _closeButton;

}

@property (nonatomic,readonly) BOOL usesLightControls;              //@synthesize usesLightControls=_usesLightControls - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                //@synthesize closeButton=_closeButton - In the implementation block
-(void)_layoutCloseButton;
-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(double)arg1 ;
-(id)initUsingLightControls:(BOOL)arg1 ;
-(BOOL)usesLightControls;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)closeButton;
@end

