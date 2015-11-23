/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFScrollableStaticWallpaperView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class AVAsset, ISPlayerView, NSString;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate> {

	AVAsset* _video;
	ISPlayerView* _playerView;

}

@property (nonatomic,readonly) ISPlayerView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISPlayerView *)playerView;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 wallpaperVideo:(id)arg3 stillTimeInVideo:(double)arg4 variant:(long long)arg5 ;
-(id)_newImageView;
@end

