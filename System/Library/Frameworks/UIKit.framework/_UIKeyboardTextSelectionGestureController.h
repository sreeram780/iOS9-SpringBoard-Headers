/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIPanOrFlickGestureRecognizerDelegate.h>

@protocol _UIKeyboardTextSelectionGestureControllerDelegate;
@class NSMutableArray, UIDelayedAction, _UIKeyboardTextSelectionController, NSString;

@interface _UIKeyboardTextSelectionGestureController : NSObject <UIGestureRecognizerDelegate, _UIPanOrFlickGestureRecognizerDelegate> {

	CGPoint _cursorLocationBase;
	BOOL _wasScrollingEnabled;
	BOOL _wasNestedPinchingDisabled;
	BOOL _suppressTwoFingerPan;
	BOOL _didSuppressSelectionGrabbers;
	BOOL _isLongPressing;
	BOOL _isPanning;
	BOOL _didFloatCursor;
	int _previousForcePressCount;
	id<_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
	double _lastPressTimestamp;
	double _twoFingerTapTimestamp;
	long long _previousRepeatedGranularity;
	long long _panGestureState;
	NSMutableArray* _activeGestures;
	UIDelayedAction* _tapLogTimer;
	CGPoint _lastPanTranslation;
	CGPoint _accumulatedAcceleration;
	CGPoint _accumulatedBounding;

}

@property (assign,nonatomic) id<_UIKeyboardTextSelectionGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * selectionController; 
@property (assign,nonatomic) CGPoint lastPanTranslation;                                                  //@synthesize lastPanTranslation=_lastPanTranslation - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedAcceleration;                                             //@synthesize accumulatedAcceleration=_accumulatedAcceleration - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedBounding;                                                 //@synthesize accumulatedBounding=_accumulatedBounding - In the implementation block
@property (assign,nonatomic) double lastPressTimestamp;                                                   //@synthesize lastPressTimestamp=_lastPressTimestamp - In the implementation block
@property (assign,nonatomic) double twoFingerTapTimestamp;                                                //@synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp - In the implementation block
@property (assign,nonatomic) long long previousRepeatedGranularity;                                       //@synthesize previousRepeatedGranularity=_previousRepeatedGranularity - In the implementation block
@property (assign,nonatomic) long long panGestureState;                                                   //@synthesize panGestureState=_panGestureState - In the implementation block
@property (assign,nonatomic) BOOL wasScrollingEnabled;                                                    //@synthesize wasScrollingEnabled=_wasScrollingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wasNestedPinchingDisabled;                                              //@synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled - In the implementation block
@property (assign,nonatomic) BOOL suppressTwoFingerPan;                                                   //@synthesize suppressTwoFingerPan=_suppressTwoFingerPan - In the implementation block
@property (assign,nonatomic) BOOL didSuppressSelectionGrabbers;                                           //@synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers - In the implementation block
@property (assign,nonatomic) BOOL isLongPressing;                                                         //@synthesize isLongPressing=_isLongPressing - In the implementation block
@property (assign,nonatomic) BOOL isPanning;                                                              //@synthesize isPanning=_isPanning - In the implementation block
@property (assign,nonatomic) NSMutableArray * activeGestures;                                             //@synthesize activeGestures=_activeGestures - In the implementation block
@property (assign,nonatomic) BOOL didFloatCursor;                                                         //@synthesize didFloatCursor=_didFloatCursor - In the implementation block
@property (nonatomic,retain) UIDelayedAction * tapLogTimer;                                               //@synthesize tapLogTimer=_tapLogTimer - In the implementation block
@property (assign,nonatomic) int previousForcePressCount;                                                 //@synthesize previousForcePressCount=_previousForcePressCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDelegate:(id<_UIKeyboardTextSelectionGestureControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIKeyboardTextSelectionGestureControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)willRemoveSelectionController;
-(void)didRemoveSelectionController;
-(id)addTwoFingerTextSelectionGesturesToView:(id)arg1 ;
-(id)addOneFingerTextSelectionGesturesToView:(id)arg1 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)redisableEnclosingScrollViewNestedPinching;
-(BOOL)didSuppressSelectionGrabbers;
-(_UIKeyboardTextSelectionController *)selectionController;
-(void)setDidSuppressSelectionGrabbers:(BOOL)arg1 ;
-(void)_cleanupDeadGesturesIfNecessary;
-(BOOL)didFloatCursor;
-(void)setDidFloatCursor:(BOOL)arg1 ;
-(void)beginCursorManipulationFromRect:(CGRect)arg1 ;
-(CGPoint)cursorLocationForTranslation:(CGPoint)arg1 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)setWasNestedPinchingDisabled:(BOOL)arg1 ;
-(BOOL)wasNestedPinchingDisabled;
-(CGPoint)lastPanTranslation;
-(CGPoint)accumulatedAcceleration;
-(void)setAccumulatedAcceleration:(CGPoint)arg1 ;
-(CGPoint)accumulatedBounding;
-(void)setAccumulatedBounding:(CGPoint)arg1 ;
-(void)twoFingerPan:(id)arg1 ;
-(BOOL)suppressTwoFingerPan;
-(void)setSuppressTwoFingerPan:(BOOL)arg1 ;
-(BOOL)isPanning;
-(void)setIsPanning:(BOOL)arg1 ;
-(void)setIsLongPressing:(BOOL)arg1 ;
-(void)setLastPanTranslation:(CGPoint)arg1 ;
-(void)clearKeyboardTouchesForGesture:(id)arg1 ;
-(void)_willBeginIndirectSelectionGesture:(id)arg1 ;
-(void)disableEnclosingScrollViewScrolling;
-(CGPoint)acceleratedTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGPoint)boundedTranslation:(CGPoint)arg1 ;
-(BOOL)isLongPressing;
-(void)twoFingerLongPressGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(double)twoFingerTapTimestamp;
-(void)indirectPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)_didEndIndirectSelectionGesture:(id)arg1 ;
-(void)beginTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerCursorPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1 ;
-(void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(long long)previousRepeatedGranularity;
-(long long)panGestureState;
-(void)beginIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg1 ;
-(void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(BOOL)arg3 ;
-(UIDelayedAction *)tapLogTimer;
-(void)_logTapCounts:(id)arg1 ;
-(void)setTapLogTimer:(UIDelayedAction *)arg1 ;
-(void)setPreviousRepeatedGranularity:(long long)arg1 ;
-(void)finishTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)setPanGestureState:(long long)arg1 ;
-(void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(void)setPreviousForcePressCount:(int)arg1 ;
-(int)previousForcePressCount;
-(double)lastPressTimestamp;
-(void)setLastPressTimestamp:(double)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)twoFingerTap:(id)arg1 ;
-(void)configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(double)oneFingerForcePressMinimumDuration;
-(double)oneFingerForcePressAllowableMovement;
-(void)configureOneFingerForcePressRecognizer:(id)arg1 ;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(id)twoFingerPanRecognizer;
-(void)enableEnclosingScrollViewNestedPinching;
-(id)twoFingerTapRecognizer;
-(id)oneFingerForcePressRecognizer;
-(id)addOneFingerForcePressRecognizerToView:(id)arg1 ;
-(id)addTwoFingerPanRecognizerToView:(id)arg1 ;
-(id)addTwoFingerTapRecognizerToView:(id)arg1 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg1 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(BOOL)allowOneFingerDeepPress;
-(BOOL)wasScrollingEnabled;
-(void)setWasScrollingEnabled:(BOOL)arg1 ;
-(NSMutableArray *)activeGestures;
-(void)setActiveGestures:(NSMutableArray *)arg1 ;
@end

