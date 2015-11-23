/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, RCCaptureInputDevice, RCCaptureSession;

@interface _RCCaptureInputDeviceSession : NSObject {

	NSMutableArray* _sessionFinishedBlocks;
	BOOL _useStartSoundEffect;
	BOOL _captureSessionWasActivated;
	RCCaptureInputDevice* _captureInputDevice;
	RCCaptureSession* _captureSession;
	/*^block*/id _sessionPreparedBlock;

}

@property (nonatomic,__weak,readonly) RCCaptureInputDevice * captureInputDevice;              //@synthesize captureInputDevice=_captureInputDevice - In the implementation block
@property (assign,nonatomic) BOOL useStartSoundEffect;                                        //@synthesize useStartSoundEffect=_useStartSoundEffect - In the implementation block
@property (nonatomic,retain) RCCaptureSession * captureSession;                               //@synthesize captureSession=_captureSession - In the implementation block
@property (assign,nonatomic) BOOL captureSessionWasActivated;                                 //@synthesize captureSessionWasActivated=_captureSessionWasActivated - In the implementation block
@property (nonatomic,copy) id sessionPreparedBlock;                                           //@synthesize sessionPreparedBlock=_sessionPreparedBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(void)addSessionFinishedBlock:(/*^block*/id)arg1 ;
-(id)sessionPreparedBlock;
-(RCCaptureSession *)captureSession;
-(BOOL)captureSessionWasActivated;
-(void)invokeSessionFinishedBlocksWithError:(id)arg1 ;
-(id)initWithCaptureInputDevice:(id)arg1 ;
-(void)setCaptureSession:(RCCaptureSession *)arg1 ;
-(void)setUseStartSoundEffect:(BOOL)arg1 ;
-(void)setSessionPreparedBlock:(id)arg1 ;
-(BOOL)useStartSoundEffect;
-(void)setCaptureSessionWasActivated:(BOOL)arg1 ;
-(RCCaptureInputDevice *)captureInputDevice;
@end

