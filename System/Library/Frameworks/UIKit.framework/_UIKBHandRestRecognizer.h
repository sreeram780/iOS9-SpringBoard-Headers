/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIKBHandRestRecognizerDelegate;
@class NSMutableSet, UITouch, UIDelayedAction;

@interface _UIKBHandRestRecognizer : NSObject {

	NSMutableSet* _possibleTouches;
	NSMutableSet* _restingTouches;
	NSMutableSet* _failedTouches;
	double _setDownTime;
	double _lastKeystrokeTimestamp;
	UITouch* _initialSetDownTouch;
	UIDelayedAction* _updateAction;
	id<_UIKBHandRestRecognizerDelegate> _delegate;

}

@property (assign,nonatomic) id<_UIKBHandRestRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_UIKBHandRestRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIKBHandRestRecognizerDelegate>)delegate;
-(void)reset;
-(void)_handleGestureTimingUpdate;
-(void)_processTouchDown:(id)arg1 ;
-(void)_processTouchUp:(id)arg1 ;
-(void)_endTrackingTouches:(id)arg1 ;
-(void)_releaseFailedTouches:(id)arg1 ;
-(double)getSetdownThreshold:(int)arg1 ;
-(void)incorporateTouch:(id)arg1 ;
-(BOOL)touchHasAlreadyFailed:(id)arg1 ;
@end

