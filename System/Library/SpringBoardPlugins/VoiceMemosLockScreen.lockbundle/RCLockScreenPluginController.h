/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/VoiceMemosLockScreen.lockbundle/VoiceMemosLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/RCCurrentRecordingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class UIViewController, UIActivityIndicatorView, RCCurrentRecordingViewController, NSString;

@interface RCLockScreenPluginController : SBAwayViewPluginController <RCCurrentRecordingViewControllerDelegate, SBLockScreenBundleController> {

	UIViewController* _contentViewController;
	UIActivityIndicatorView* _spinnerView;
	BOOL _screenUpdatesDisabled;
	BOOL _recordingViewControllerIsReady;
	RCCurrentRecordingViewController* _recordingViewController;
	BOOL _isScreenBlanked;
	int _blankedStateNotifyToken;
	BOOL _blankedStateNotifyTokenIsValid;
	NSString* _subtitleText;

}

@property (nonatomic,retain) NSString * subtitleText;               //@synthesize subtitleText=_subtitleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(void)dealloc;
-(id)init;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(BOOL)showDateView;
-(void)purgeView;
-(BOOL)viewWantsFullscreenLayout;
-(unsigned long long)notificationBehavior;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)allowsTimer;
-(void)deviceLockViewWillShow;
-(void)deviceLockViewDidHide;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(BOOL)showAwayItems;
-(BOOL)showBatteryChargingText;
-(BOOL)showDate;
-(BOOL)hasCustomSubtitle;
-(id)customSubtitleText;
-(id)customSubtitleColor;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)allowsSiri;
-(unsigned long long)overlayStyle;
-(void)currentRecordingViewControllerRecordingDidEnd:(id)arg1 ;
-(void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2 ;
-(void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(BOOL)arg2 ;
-(void)_attachRecordingViewIfReady;
-(void)setScreenIsBlanked:(BOOL)arg1 ;
-(void)_setScreenUpdatesDisabled:(BOOL)arg1 ;
-(void)_dismissRecordingViewController;
-(void)_beginLoadingRemoteView;
-(void)_updateSubtitleText;
@end

