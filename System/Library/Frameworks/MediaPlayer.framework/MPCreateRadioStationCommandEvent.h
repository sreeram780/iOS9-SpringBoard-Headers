/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {

	BOOL _requestingPlaybackInitialization;
	NSURL* _stationURL;

}

@property (nonatomic,readonly) NSURL * stationURL;                                                                           //@synthesize stationURL=_stationURL - In the implementation block
@property (getter=isRequestingPlaybackInitialization,nonatomic,readonly) BOOL requestingPlaybackInitialization;              //@synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSURL *)stationURL;
-(BOOL)isRequestingPlaybackInitialization;
@end

