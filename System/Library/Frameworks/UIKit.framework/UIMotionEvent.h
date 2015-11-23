/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIEvent.h>

@class NSTimer;

@interface UIMotionEvent : UIEvent {

	id _motionAccelerometer;
	long long _subtype;
	int _shakeState;
	long long _stateMachineState;
	double _shakeStartTime;
	double _lastMovementTime;
	double _highLevelTime;
	double _lowEndTimeout;
	NSTimer* _idleTimer;
	BOOL _sentMotionBegan;
	float _lowPassState[10];
	unsigned long long _lowPassStateIndex;
	unsigned long long _highPassStateIndex;
	float _highPassState[2];
	int notifyToken;

}

@property (assign,nonatomic) int shakeState;              //@synthesize shakeState=_shakeState - In the implementation block
-(void)dealloc;
-(id)description;
-(id)_init;
-(BOOL)_isDetectingMotionEvents;
-(void)_setSubtype:(long long)arg1 ;
-(void)setShakeState:(int)arg1 ;
-(long long)type;
-(id)_windows;
-(long long)subtype;
-(void)_sendEventToResponder:(id)arg1 ;
-(int)_shakeState;
-(void)_enablePeakDetectionForScreenBlanked:(id)arg1 ;
-(void)_willResume;
-(void)_willSuspend;
-(void)_updateAccelerometerEnabled;
-(int)shakeState;
-(BOOL)_detectWhenNotActive;
-(void)_idleTimerFired;
-(void)_resetLowPassState;
-(void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1 ;
-(float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4 ;
-(long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3 ;
-(float)_highPass:(float)arg1 ;
-(float)_lowPass:(float)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)_enablePeakDetectionIfNecessary;
@end

