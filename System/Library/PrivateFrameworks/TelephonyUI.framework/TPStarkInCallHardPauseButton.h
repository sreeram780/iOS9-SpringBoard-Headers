/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol TPStarkHardPauseButtonDelegate;
@interface TPStarkInCallHardPauseButton : UIButton {

	id<TPStarkHardPauseButtonDelegate> _delegate;

}

@property (assign) id<TPStarkHardPauseButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<TPStarkHardPauseButtonDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id<TPStarkHardPauseButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)hardPausePressed;
@end

