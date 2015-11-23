/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {

	/*^block*/id _applier;
	/*^block*/id _viewApplier;
	double _value;
	double _velocity;
	double _unitSize;
	double _friction;
	double _decelerationFactor;
	double _decelerationLnFactor;
	double _multiplier;
	NSMutableArray* _activeValues;
	void* _stepFunction;

}

@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double velocity;                   //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double friction;                   //@synthesize friction=_friction - In the implementation block
@property (nonatomic,copy) NSArray * activeValues;              //@synthesize activeValues=_activeValues - In the implementation block
+(id)pu_dynamicValueAnimationWithInitialValue:(double)arg1 initialVelocity:(double)arg2 targetValue:(double)arg3 stiffness:(double)arg4 dampingFactor:(double)arg5 epsilon:(double)arg6 ;
+(id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6 ;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(double)arg1 ;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_animateForInterval:(double)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)velocity;
-(void)setFriction:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)friction;
-(void)_stopAnimation;
-(id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3 ;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)_setDecelerationFactor:(double)arg1 ;
-(void)addActiveValue:(id)arg1 ;
-(void)_updateStepFunction;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)removeActiveValue:(id)arg1 ;
-(void)setActiveValues:(NSArray *)arg1 ;
-(double)_multiplier;
-(void)_setMultiplier:(double)arg1 ;
-(void)_setVelocity:(double)arg1 ;
-(NSArray *)activeValues;
@end

