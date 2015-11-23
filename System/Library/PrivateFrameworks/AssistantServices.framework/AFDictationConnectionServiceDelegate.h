/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationServiceDelegate.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {

	AFDictationConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)speechRecordingWillBeginWithLevelsSharedMem:(id)arg1 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
-(id)initWithDictationConnection:(id)arg1 ;
-(oneway void)speechRecordingDidBegin;
-(oneway void)speechDidRecognizePhrases:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3 ;
-(oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2 ;
-(oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
@end

