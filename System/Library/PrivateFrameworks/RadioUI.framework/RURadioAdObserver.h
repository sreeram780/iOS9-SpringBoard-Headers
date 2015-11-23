/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MPUJinglePlayActivityReportingController, RUJingleTiltReportingController, RURTCReportingController, ISDialogOperation, MPAVController, MPUReportingPlaybackObserver, NSString;

@interface RURadioAdObserver : NSObject <ADBannerViewDelegate, ISDialogOperationDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasDirtyVisualEngagement;
	BOOL _isSlotAcquisitionInProgress;
	long long _lastApplicationState;
	MPUJinglePlayActivityReportingController* _jinglePlayActivityReportingController;
	RUJingleTiltReportingController* _jingleTiltReportingController;
	double _minDurationToCountAsPlayed;
	long long _policyEngineEnabledCount;
	RURTCReportingController* _RTCReportingController;
	double _skipThreshold;
	ISDialogOperation* _slotAcquisitionDialogOperation;
	long long _visualEngagementCount;
	BOOL _visuallyEngaged;
	MPAVController* _player;
	MPUReportingPlaybackObserver* _reportingPlaybackObserver;
	unsigned long long _numberOfSkippedTracks;

}

@property (nonatomic,retain) MPUJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
@property (nonatomic,retain) RUJingleTiltReportingController * jingleTiltReportingController;                               //@synthesize jingleTiltReportingController=_jingleTiltReportingController - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPUReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (nonatomic,retain) RURTCReportingController * RTCReportingController;                                             //@synthesize RTCReportingController=_RTCReportingController - In the implementation block
@property (getter=isVisuallyEngaged,nonatomic,readonly) BOOL visuallyEngaged;                                               //@synthesize visuallyEngaged=_visuallyEngaged - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSkippedTracks;                                                    //@synthesize numberOfSkippedTracks=_numberOfSkippedTracks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdObserver;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)_itemChangedNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_unregisterForPlayerNotifications;
-(void)_registerForPlayerNotifications;
-(void)_itemDidFinishLoadingNotification:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(void)dealloc;
-(id)init;
-(void)requestAdsForSlot:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)optimalTransmissionWindowDidOpen;
-(void)endVisualEngagement;
-(void)beginVisualEngagement;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)didTransitionItemForBan:(id)arg1 ;
-(void)willTransitionItemForBan:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)beginEnablingPolicyEngine;
-(void)attemptSlotAcquisition;
-(void)endEnablingPolicyEngine;
-(void)_loadMinDurationToCountAsPlayedFromURLBag;
-(id)_adPolicyEngine;
-(void)_heartbeatChangedNotification:(id)arg1 ;
-(void)_radioStreamTrackAVItemDidReceiveTimedMetadataPingsNotification:(id)arg1 ;
-(void)_updateWithStoreBag:(id)arg1 ;
-(void)_attemptSlotAcquisitionWithAdditionalBodyParameters:(id)arg1 ;
-(void)_scheduleUpdateVisualEngagement;
-(RURTCReportingController *)RTCReportingController;
-(void)_clearAssetCacheForItem:(id)arg1 ;
-(void)_itemAssetLoadedDidChangeNotification:(id)arg1 ;
-(void)_handleSkipForChangedItem:(id)arg1 didChangeStation:(BOOL)arg2 ;
-(void)_reportPlaybackEndedForAdTrack:(id)arg1 withItem:(id)arg2 ;
-(BOOL)_isPolicyEngineEnabled;
-(void)_beginEnablingPolicyEngine;
-(void)__scheduleUpdateVisualEngagement;
-(id)_playActivityFeedEventsForPendingPlayActivityEvents:(id)arg1 ;
-(void)_getCurrentTime:(double*)arg1 duration:(double*)arg2 wasSkipped:(BOOL*)arg3 didAssetFailToLoad:(BOOL*)arg4 forItem:(id)arg5 ;
-(void)_updateVisualEngagement;
-(void)getHistoryWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTracksWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)heartbeatTokenReturningError:(id*)arg1 ;
-(void)historyDidBeginPlayingAdTrack:(id)arg1 withItem:(id)arg2 ;
-(void)historyDidEndPlayingAdTrack:(id)arg1 withItem:(id)arg2 ;
-(void)noteDidEnterStation:(id)arg1 ;
-(MPUJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPUJinglePlayActivityReportingController *)arg1 ;
-(RUJingleTiltReportingController *)jingleTiltReportingController;
-(void)setJingleTiltReportingController:(RUJingleTiltReportingController *)arg1 ;
-(MPUReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPUReportingPlaybackObserver *)arg1 ;
-(void)setRTCReportingController:(RURTCReportingController *)arg1 ;
-(BOOL)isVisuallyEngaged;
-(unsigned long long)numberOfSkippedTracks;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
@end

