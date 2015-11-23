/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechConnectionDelegate.h>

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;
@class VSKeepAlive, NSObject, VSSpeechConnection, NSString;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {

	VSKeepAlive* _keepAlive;
	VSKeepAlive* _inactiveKeepAlive;
	long long _footprint;
	BOOL _useCustomVoice;
	long long _gender;
	BOOL _useSharedSession;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSObject*<OS_dispatch_queue> _queue;
	VSSpeechConnection* _speechConnection;
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	float _rate;
	float _pitch;
	float _volume;
	id<VSSpeechSynthesizerDelegate> _delegate;
	NSString* _voice;

}

@property (assign,nonatomic,__weak) id<VSSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float rate;                                                   //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                  //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voice;                                             //@synthesize voice=_voice - In the implementation block
+(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
+(void)getAllVoiceAssets:(/*^block*/id)arg1 ;
+(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
+(void)downloadVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
+(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
+(void)initialize;
+(id)availableVoicesForLanguageCode:(id)arg1 ;
+(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
+(BOOL)isSystemSpeaking;
+(id)availableVoices;
+(void)setLogToFile:(BOOL)arg1 ;
+(void)getLogToFile:(/*^block*/id)arg1 ;
+(id)availableLanguageCodes;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 ;
-(id)speechString;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)isSpeaking;
-(void)setVoice:(NSString *)arg1 ;
-(void)setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(long long)footprint;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(float)volume;
-(float)maximumRate;
-(NSString *)voice;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(void)setRate:(float)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(id)initForInputFeedback;
-(BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3 ;
-(BOOL)useCustomVoice;
-(BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6 ;
-(BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(void)setMaintainPersistentConnection:(BOOL)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 error:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(BOOL)continueSpeakingWithError:(id*)arg1 ;
-(float)minimumRate;
-(void)useSharedAudioSession:(BOOL)arg1 ;
-(void)useAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
@end

