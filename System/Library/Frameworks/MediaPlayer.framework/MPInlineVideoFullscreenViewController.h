/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <libobjc.A.dylib/MPTransportControlsTarget.h>

@class UITapGestureRecognizer, MPWeakTimer, MPAVItem, UIActivityIndicatorView, MPInlineVideoController, MPVideoPlaybackOverlayView, UIPinchGestureRecognizer, MPSwipableView, MPVolumeController, NSString;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {

	BOOL _disableTaps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPWeakTimer* _idleTimer;
	BOOL _isAnimatingOverlay;
	MPAVItem* _item;
	UIActivityIndicatorView* _loadingIndicator;
	MPInlineVideoController* _masterController;
	MPVideoPlaybackOverlayView* _overlayView;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	BOOL _shouldForwardRotationEvents;
	MPSwipableView* _swipableView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _activeOverlayUserEvents;
	BOOL _statusBarWasHidden;
	MPVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) MPInlineVideoController * masterController;              //@synthesize masterController=_masterController - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2 ;
-(void)showAlternateTracks;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(void)_hideOverlayAnimated:(BOOL)arg1 ;
-(void)updateOverlayView;
-(void)cancelOverlayIdleTimer;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)_hideOverlayDidEnd;
-(void)resetOverlayIdleTimer;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)prepareForTransitionFromFullscreen;
-(void)_overlayIdleTimerFired;
-(void)_showOverlayDidEnd;
-(void)dealloc;
-(id)init;
-(MPAVItem *)item;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(MPInlineVideoController *)masterController;
-(void)setMasterController:(MPInlineVideoController *)arg1 ;
-(void)setItem:(MPAVItem *)arg1 ;
@end

