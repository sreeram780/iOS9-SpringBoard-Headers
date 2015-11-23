/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRemoteCommandDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MPRemoteCommand, MPSkipIntervalCommand, MPRatingCommand, MPChangePlaybackRateCommand, MPFeedbackCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPPurchaseCommand, MPSetPlaybackQueueCommand, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate> {

	NSMutableArray* _activeCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _mediaRemoteCommandHandler;
	BOOL _scheduledSupportedCommandsChangedNotification;
	BOOL _canBeNowPlayingApplication;
	MPRemoteCommand* _pauseCommand;
	MPRemoteCommand* _playCommand;
	MPRemoteCommand* _stopCommand;
	MPRemoteCommand* _togglePlayPauseCommand;
	MPRemoteCommand* _enableLanguageOptionCommand;
	MPRemoteCommand* _disableLanguageOptionCommand;
	MPRemoteCommand* _nextTrackCommand;
	MPRemoteCommand* _previousTrackCommand;
	MPSkipIntervalCommand* _skipForwardCommand;
	MPSkipIntervalCommand* _skipBackwardCommand;
	MPRemoteCommand* _seekForwardCommand;
	MPRemoteCommand* _seekBackwardCommand;
	MPRatingCommand* _ratingCommand;
	MPChangePlaybackRateCommand* _changePlaybackRateCommand;
	MPFeedbackCommand* _likeCommand;
	MPFeedbackCommand* _dislikeCommand;
	MPFeedbackCommand* _bookmarkCommand;
	MPRemoteCommand* _changePlaybackPositionCommand;
	MPChangeRepeatModeCommand* _changeRepeatModeCommand;
	MPChangeShuffleModeCommand* _changeShuffleModeCommand;
	MPRemoteCommand* _specialSeekForwardCommand;
	MPRemoteCommand* _specialSeekBackwardCommand;
	MPPurchaseCommand* _buyTrackCommand;
	MPPurchaseCommand* _buyAlbumCommand;
	MPPurchaseCommand* _preOrderAlbumCommand;
	MPPurchaseCommand* _cancelDownloadCommand;
	MPRemoteCommand* _advanceShuffleModeCommand;
	MPRemoteCommand* _advanceRepeatModeCommand;
	MPRemoteCommand* _createRadioStationCommand;
	MPSetPlaybackQueueCommand* _setPlaybackQueueCommand;
	MPRemoteCommand* _insertIntoPlaybackQueueCommand;
	MPFeedbackCommand* _addItemToLibraryCommand;
	MPFeedbackCommand* _addNowPlayingItemToLibraryCommand;

}

@property (nonatomic,readonly) MPRemoteCommand * pauseCommand; 
@property (nonatomic,readonly) MPRemoteCommand * playCommand; 
@property (nonatomic,readonly) MPRemoteCommand * stopCommand; 
@property (nonatomic,readonly) MPRemoteCommand * togglePlayPauseCommand; 
@property (nonatomic,readonly) MPRemoteCommand * enableLanguageOptionCommand; 
@property (nonatomic,readonly) MPRemoteCommand * disableLanguageOptionCommand; 
@property (nonatomic,readonly) MPRemoteCommand * nextTrackCommand; 
@property (nonatomic,readonly) MPRemoteCommand * previousTrackCommand; 
@property (nonatomic,readonly) MPSkipIntervalCommand * skipForwardCommand; 
@property (nonatomic,readonly) MPSkipIntervalCommand * skipBackwardCommand; 
@property (nonatomic,readonly) MPRemoteCommand * seekForwardCommand; 
@property (nonatomic,readonly) MPRemoteCommand * seekBackwardCommand; 
@property (nonatomic,readonly) MPRatingCommand * ratingCommand; 
@property (nonatomic,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand; 
@property (nonatomic,readonly) MPFeedbackCommand * likeCommand; 
@property (nonatomic,readonly) MPFeedbackCommand * dislikeCommand; 
@property (nonatomic,readonly) MPFeedbackCommand * bookmarkCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCommandCenter;
-(void)_setupNotifications;
-(void)_setupMediaRemoteCommandHandler;
-(void)_teardownMediaRemoteCommandHandler;
-(void)_teardownNotifications;
-(void)_scheduleSupportedCommandsChanged;
-(id)_activeCommands;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned)arg2 ;
-(void)_commandTargetsDidChangeNotification:(id)arg1 ;
-(CFArrayRef)_copySupportedCommands;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg1 ;
-(id)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(MPRemoteCommand *)pauseCommand;
-(MPRemoteCommand *)playCommand;
-(MPRemoteCommand *)stopCommand;
-(MPRemoteCommand *)togglePlayPauseCommand;
-(MPRemoteCommand *)enableLanguageOptionCommand;
-(MPRemoteCommand *)disableLanguageOptionCommand;
-(MPRemoteCommand *)nextTrackCommand;
-(MPRemoteCommand *)previousTrackCommand;
-(MPSkipIntervalCommand *)skipForwardCommand;
-(MPSkipIntervalCommand *)skipBackwardCommand;
-(MPRemoteCommand *)seekForwardCommand;
-(MPRemoteCommand *)seekBackwardCommand;
-(MPRatingCommand *)ratingCommand;
-(MPChangePlaybackRateCommand *)changePlaybackRateCommand;
-(MPFeedbackCommand *)likeCommand;
-(MPFeedbackCommand *)dislikeCommand;
-(MPFeedbackCommand *)bookmarkCommand;
-(id)changePlaybackPositionCommand;
-(id)changeRepeatModeCommand;
-(id)changeShuffleModeCommand;
-(id)specialSeekForwardCommand;
-(id)specialSeekBackwardCommand;
-(id)buyTrackCommand;
-(id)buyAlbumCommand;
-(id)preOrderAlbumCommand;
-(id)cancelDownloadCommand;
-(id)advanceShuffleModeCommand;
-(id)advanceRepeatModeCommand;
-(id)createRadioStationCommand;
-(id)setPlaybackQueueCommand;
-(id)insertIntoPlaybackQueueCommand;
-(id)addNowPlayingItemToLibraryCommand;
-(id)addItemToLibraryCommand;
-(void)dealloc;
-(id)init;
@end

