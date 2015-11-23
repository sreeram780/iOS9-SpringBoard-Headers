/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol MSCLVoiceRecorderDelegate, OS_dispatch_source;
@class NSString, NSObject, NSMutableArray, AVVoiceController;

@interface MSCLVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {

	NSString* _assetPath;
	id _capturedSelf;
	id<MSCLVoiceRecorderDelegate> _delegate;
	OpaqueAudioFileIDRef _fileID;
	double _maximumRecordingDuration;
	NSObject*<OS_dispatch_source> _recordingTimeoutTimer;
	NSObject*<OS_dispatch_source> _powerMeterTimer;
	NSMutableArray* _stopBlocks;
	long long _totalRecordedPacketCount;
	AVVoiceController* _voiceController;

}

@property (assign,nonatomic,__weak) id<MSCLVoiceRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maximumRecordingDuration;                            //@synthesize maximumRecordingDuration=_maximumRecordingDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLVoiceRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MSCLVoiceRecorderDelegate>)delegate;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithAssetPath:(id)arg1 ;
-(void)setMaximumRecordingDuration:(double)arg1 ;
-(BOOL)startRecordingUsingActivationMode:(long long)arg1 error:(id*)arg2 ;
-(void)_stopRecordingTimeoutTimer;
-(void)_finishRecordingWithReason:(long long)arg1 ;
-(void)_startPowerMeterTimer;
-(void)_startRecordingTimeoutTimer;
-(void)_stopPowerMeterTimer;
-(double)maximumRecordingDuration;
@end

