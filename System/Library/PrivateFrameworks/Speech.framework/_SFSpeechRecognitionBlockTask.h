/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Speech/SFSpeechRecognitionTask.h>

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {

	/*^block*/id _resultHandler;

}
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2 final:(BOOL)arg3 ;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

