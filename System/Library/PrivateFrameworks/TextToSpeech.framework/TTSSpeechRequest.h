/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TTSSpeechRequestDelegate;
@class TTSSpeechChannel, NSString, NSAttributedString, NSURL;

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {

	id<TTSSpeechRequestDelegate> _delegate;
	TTSSpeechChannel* _speechChannel;
	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	BOOL _useVoiceBooster;
	BOOL _useMonarchStyleRate;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	long long _footprint;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	double _latency;
	double _dispatchTime;
	double _handledTime;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) TTSSpeechChannel * speechChannel;               //@synthesize speechChannel=_speechChannel - In the implementation block
@property (assign,nonatomic) long long footprint;                            //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) BOOL useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) long long gender;                               //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) BOOL audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (assign,nonatomic) double latency;                                 //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) double dispatchTime;                            //@synthesize dispatchTime=_dispatchTime - In the implementation block
@property (assign,nonatomic) double handledTime;                             //@synthesize handledTime=_handledTime - In the implementation block
@property (assign,nonatomic) BOOL useVoiceBooster;                           //@synthesize useVoiceBooster=_useVoiceBooster - In the implementation block
@property (assign,nonatomic) BOOL useMonarchStyleRate;                       //@synthesize useMonarchStyleRate=_useMonarchStyleRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)vocalizerFootprint;
-(long long)vocalizerGender;
-(double)rate;
-(void)setVolume:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)languageCode;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(long long)footprint;
-(NSURL *)outputPath;
-(void)setOutputPath:(NSURL *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)volume;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(double)latency;
-(void)setLatency:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(BOOL)useVoiceBooster;
-(void)setSpeechChannel:(TTSSpeechChannel *)arg1 ;
-(id)initWithSpeechChannel:(id)arg1 ;
-(void)speechRequestDidStartForService:(id)arg1 ;
-(void)speechRequestDidPauseForService:(id)arg1 ;
-(void)speechRequestDidContinueForService:(id)arg1 ;
-(void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2 forService:(id)arg3 ;
-(void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4 ;
-(TTSSpeechChannel *)speechChannel;
-(double)dispatchTime;
-(void)setDispatchTime:(double)arg1 ;
-(double)handledTime;
-(void)setHandledTime:(double)arg1 ;
-(void)setUseVoiceBooster:(BOOL)arg1 ;
-(BOOL)useMonarchStyleRate;
-(void)setUseMonarchStyleRate:(BOOL)arg1 ;
-(BOOL)useCustomVoice;
-(BOOL)maintainsInput;
-(void)setMaintainsInput:(BOOL)arg1 ;
-(BOOL)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(BOOL)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
@end

