/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MusicPlaybackProgressScrubbing.h>

@protocol MusicPlaybackProgressScrubberDelegate;
@class UIView, NSString;

@interface MusicMiniPlayerPlaybackProgressView : UIView <MusicPlaybackProgressScrubbing> {

	BOOL _alwaysLive;
	double _currentTime;
	double _currentTimeSetTimeInterval;
	UIView* _minimumTrackView;
	BOOL _needsAnimationUpdate;
	CGSize _previousKnownSize;
	float _rate;
	double _totalDuration;
	id<MusicPlaybackProgressScrubberDelegate> _scrubberDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate;              //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
-(long long)currentScrubSpeed;
-(void)setCurrentTime:(double)arg1 ;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(float)rate;
-(BOOL)_setCurrentTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)_setNeedsAnimationUpdate;
-(void)_updateAnimations;
-(double)effectiveCurrentTime;
-(double)_valueForTime:(double)arg1 ;
-(void)_layoutTrackViewsForValue:(double)arg1 ;
-(void)_removeAllTrackAnimations;
-(void)cancelScrubbing;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(BOOL)isScrubbingEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(void)setRate:(float)arg1 ;
-(BOOL)isAlwaysLive;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

