/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {

	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	NSString* _voiceName;
	long long _footprint;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	/*^block*/id _stopHandler;
	/*^block*/id _pauseHandler;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                             //@synthesize voiceName=_voiceName - In the implementation block
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
@property (nonatomic,copy) id stopHandler;                                   //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                  //@synthesize pauseHandler=_pauseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)rate;
-(void)setVolume:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)languageCode;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
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
-(void)setRate:(double)arg1 ;
-(BOOL)useCustomVoice;
-(BOOL)maintainsInput;
-(void)setMaintainsInput:(BOOL)arg1 ;
-(BOOL)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(BOOL)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
@end

