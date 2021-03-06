/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, MPAVItem, NSString, MPAVController, MPUReportingController;

@interface MPUReportingPlaybackObserver : NSObject {

	NSData* _currentJingleReportingTimedMetadata;
	BOOL _hasSetLastPlayEventTimeStamp;
	BOOL _isReloadingWithPlaybackContext;
	BOOL _isScrubbing;
	MPAVItem* _itemForCurrentTimeChange;
	double _lastPlayEventEndTimeForCurrentItem;
	double _lastPlayEventTimeStamp;
	NSString* _playbackSessionID;
	double _startTimeForCurrentTimeChange;
	BOOL _offline;
	BOOL _SBEnabled;
	MPAVController* _player;
	MPUReportingController* _reportingController;
	unsigned long long _storeAccountID;

}

@property (nonatomic,readonly) MPAVController * player;                                      //@synthesize player=_player - In the implementation block
@property (assign,getter=isOffline,nonatomic) BOOL offline;                                  //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) MPUReportingController * reportingController;                 //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,setter=BEnabled,getter=isSBEnabled,nonatomic) BOOL SBEnabled;              //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(unsigned long long)storeAccountID;
-(MPAVController *)player;
-(void)dealloc;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_itemNewAccessLogEntryNotification:(id)arg1 ;
-(void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1 ;
-(void)_playerDidSetCurrentTimeNotification:(id)arg1 ;
-(void)_playerWillSetCurrentTimeNotification:(id)arg1 ;
-(void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1 ;
-(void)_updatePlaybackSessionID;
-(id)newPlayActivityEventForMPAVItem:(id)arg1 ;
-(double)_itemStartTimeForItem:(id)arg1 ;
-(double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2 ;
-(id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2 ;
-(void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 reportingController:(id)arg2 ;
-(void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(void)didTransitionItemForBan:(id)arg1 ;
-(void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(void)willTransitionItemForBan:(id)arg1 ;
-(MPUReportingController *)reportingController;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(BOOL)isOffline;
-(BOOL)isSBEnabled;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
@end

