/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface SPFeedbackVoiceSearch : SPFeedback {

	NSMutableArray* _mutableSpeechResults;
	NSString* _voiceIdentifier;
	NSDictionary* _headers;
	NSArray* _speechResults;
	NSString* _dictationStopReason;
	double _speechDetectedTime;
	double _dictationStartTime;
	double _dictationStopTime;
	double _micButtonStartTime;
	double _micButtonStopTime;
	double _doneButtonTime;

}

@property (nonatomic,retain) NSString * voiceIdentifier;                  //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSArray * speechResults;                     //@synthesize speechResults=_speechResults - In the implementation block
@property (nonatomic,retain) NSString * dictationStopReason;              //@synthesize dictationStopReason=_dictationStopReason - In the implementation block
@property (assign,nonatomic) double speechDetectedTime;                   //@synthesize speechDetectedTime=_speechDetectedTime - In the implementation block
@property (assign,nonatomic) double dictationStartTime;                   //@synthesize dictationStartTime=_dictationStartTime - In the implementation block
@property (assign,nonatomic) double dictationStopTime;                    //@synthesize dictationStopTime=_dictationStopTime - In the implementation block
@property (assign,nonatomic) double micButtonStartTime;                   //@synthesize micButtonStartTime=_micButtonStartTime - In the implementation block
@property (assign,nonatomic) double micButtonStopTime;                    //@synthesize micButtonStopTime=_micButtonStopTime - In the implementation block
@property (assign,nonatomic) double doneButtonTime;                       //@synthesize doneButtonTime=_doneButtonTime - In the implementation block
+(id)feedback;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(NSDictionary *)headers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(NSString *)voiceIdentifier;
-(NSString *)dictationStopReason;
-(void)setDictationStopReason:(NSString *)arg1 ;
-(double)dictationStartTime;
-(double)dictationStopTime;
-(void)setDictationStopTime:(double)arg1 ;
-(double)speechDetectedTime;
-(double)micButtonStartTime;
-(void)setMicButtonStartTime:(double)arg1 ;
-(double)micButtonStopTime;
-(double)doneButtonTime;
-(NSArray *)speechResults;
-(void)setSpeechResults:(NSArray *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)dictationStoppedReason:(id)arg1 ;
-(void)setMicButtonStopTime:(double)arg1 ;
-(void)setDoneButtonTime:(double)arg1 ;
-(void)addSpeechResult:(id)arg1 stable:(BOOL)arg2 timestamp:(double)arg3 webResultsSize:(unsigned long long)arg4 spotlightResultsSize:(unsigned long long)arg5 ;
-(void)setDictationStartTime:(double)arg1 ;
-(void)dictationStoppedReason:(id)arg1 timestamp:(double)arg2 ;
-(void)setSpeechDetectedTime:(double)arg1 ;
@end

