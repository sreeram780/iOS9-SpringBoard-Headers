/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NSArray;

@interface MPPlaybackTitlesView : UIControl {

	UIView* _contentView;
	NSArray* _labels;
	NSArray* _titles;
	BOOL _showingLoadingUI;
	unsigned long long _marqueeScrollableIndex;
	BOOL _marqueeScrollingActive;

}

@property (nonatomic,retain) NSArray * titles;                                       //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) BOOL showingLoadingUI;                                  //@synthesize showingLoadingUI=_showingLoadingUI - In the implementation block
@property (assign,nonatomic) BOOL marqueeScrollingActive;                            //@synthesize marqueeScrollingActive=_marqueeScrollingActive - In the implementation block
@property (assign,nonatomic) unsigned long long marqueeScrollableIndex;              //@synthesize marqueeScrollableIndex=_marqueeScrollableIndex - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(id)_addLabel:(unsigned long long)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_layoutLoadingUI;
-(void)_updateLabelMarqueeScrolling;
-(void)_tearDownLabels;
-(BOOL)showingLoadingUI;
-(id)_addLoadingLabel;
-(unsigned long long)marqueeScrollableIndex;
-(BOOL)marqueeScrollingActive;
-(void)setMarqueeScrollingActive:(BOOL)arg1 ;
-(void)setMarqueeScrollableIndex:(unsigned long long)arg1 ;
-(void)setShowingLoadingUI:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)_layoutLabels;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

