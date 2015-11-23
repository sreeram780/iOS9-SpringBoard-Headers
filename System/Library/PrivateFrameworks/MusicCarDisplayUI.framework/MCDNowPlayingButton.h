/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDNowPlayingButton : UIButton {

	CALayer* _leadingBorder;
	CALayer* _focusColorLayer;
	BOOL _hidesLeadingBorder;

}

@property (assign,nonatomic) BOOL hidesLeadingBorder;              //@synthesize hidesLeadingBorder=_hidesLeadingBorder - In the implementation block
+(id)buttonWithHeight:(double)arg1 ;
+(id)wrappingViewForButton:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)focusedViewDidChange;
-(void)sizeToFit;
-(void)setHidesLeadingBorder:(BOOL)arg1 ;
-(BOOL)hidesLeadingBorder;
@end

