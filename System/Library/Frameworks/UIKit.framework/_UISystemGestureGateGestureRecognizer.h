/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {

	unsigned _systemGesturesRecognitionPossible : 1;
	unsigned _waitingForSystemGestureStateNotification : 1;
	double _lastTouchTime;
	NSTimer* _delayTimeoutTimer;

}
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(id)_gateGestureTypeString;
-(int)_gateGestureType;
-(void)_timeOut;
-(BOOL)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
@end

