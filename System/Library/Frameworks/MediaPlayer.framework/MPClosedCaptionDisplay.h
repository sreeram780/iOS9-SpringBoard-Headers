/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MPClosedCaptionDisplay : UIView {

	UILabel* _label;
	UIView* _backgroundView;
	BOOL _hidden;
	BOOL _rotating;

}
-(void)startLayoutChange:(BOOL)arg1 ;
-(void)endLayoutChange;
-(void)_updatePositioning:(BOOL)arg1 ;
-(void)_hidePanel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)setText:(id)arg1 ;
@end

