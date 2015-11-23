/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSAnimationSettings, NSString;

@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying> {

	BSAnimationSettings* _settings;

}

@property (nonatomic,copy,readonly) BSAnimationSettings * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) BSAnimationSettings * effectiveSettings; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)factoryWithSettings:(id)arg1 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)factoryWithAnimationAttributes:(id)arg1 ;
+(double)globalSlowDownFactor;
+(void)setGlobalSlowDownFactor:(double)arg1 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 ;
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(id)factoryWithDuration:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(double)duration;
-(BSAnimationSettings *)settings;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)applySettingsToCAAnimation:(id)arg1 ;
-(BSAnimationSettings *)effectiveSettings;
-(id)_initWithSettings:(id)arg1 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end

