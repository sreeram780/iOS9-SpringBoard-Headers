/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate;
@interface AVSpeechSynthesizer : NSObject {

	BOOL speaking;
	BOOL paused;
	id<AVSpeechSynthesizerDelegate> delegate;

}

@property (assign,nonatomic) id<AVSpeechSynthesizerDelegate> delegate; 
@property (getter=isSpeaking,nonatomic,readonly) BOOL speaking; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
+(void)initialize;
-(id)speechManager;
-(void)prepareSpeechManager;
-(void)tearDownWarmupManager;
-(BOOL)shouldHandleAudioInterruptions;
-(id)speechQueue;
-(void)_speakUtterance:(id)arg1 ;
-(void)setRequestedUtteranceDuringAudioInterruption:(id)arg1 ;
-(id)inflightUtterance;
-(void)_enqueueNextJob;
-(id)requestedUtteranceDuringAudioInterruption;
-(void)setInflightUtterance:(id)arg1 ;
-(void)_handleSpeechDone:(id)arg1 successful:(BOOL)arg2 ;
-(int)_convertBoundary:(long long)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(BOOL)isInAudioInterruption;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setShouldHandleAudioInterruptions:(BOOL)arg1 ;
-(BOOL)wasSpeakingBeforeAudioInterruption;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)speakUtterance:(id)arg1 ;
-(void)setWasSpeakingBeforeAudioInterruption:(BOOL)arg1 ;
-(void)setIsInAudioInterruption:(BOOL)arg1 ;
-(BOOL)didRequestStartSpeakingDuringAudioInterruption;
-(BOOL)didRequestPauseSpeakingDuringAudioInterruption;
-(BOOL)didRequestResumeSpeakingDuringAudioInterruption;
-(void)_didBeginInterruption;
-(void)_didEndInterruption;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)isPaused;
-(void)setDelegate:(id<AVSpeechSynthesizerDelegate>)arg1 ;
-(id<AVSpeechSynthesizerDelegate>)delegate;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)speakUtterance:(id)arg1 ;
@end

