/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {

	unsigned long long _workoutActivityType;
	double _duration;
	NSArray* _workoutEvents;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalBasalEnergyBurned;
	HKQuantity* _totalDistance;
	unsigned long long _goalType;
	HKQuantity* _goal;

}

@property (readonly) unsigned long long workoutActivityType; 
@property (copy,readonly) NSArray * workoutEvents;                                                                                               //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (readonly) double duration; 
@property (readonly) HKQuantity * totalEnergyBurned; 
@property (readonly) HKQuantity * totalDistance; 
@property (assign,setter=_setGoalType:,getter=_goalType,nonatomic) unsigned long long goalType;                                                  //@synthesize goalType=_goalType - In the implementation block
@property (setter=_setGoal:,getter=_goal,nonatomic,retain) HKQuantity * goal;                                                                    //@synthesize goal=_goal - In the implementation block
@property (setter=_setTotalBasalEnergyBurned:,getter=_totalBasalEnergyBurned,nonatomic,retain) HKQuantity * totalBasalEnergyBurned; 
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 config:(/*^block*/id)arg13 ;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 ;
+(id)_stringFromWorkoutActivityType:(unsigned long long)arg1 ;
+(BOOL)_isConcreteObjectClass;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)_activityTypeMappings;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(unsigned long long)_workoutActivityTypeFromString:(id)arg1 ;
+(id)_allWorkoutTypeNames;
+(BOOL)supportsSecureCoding;
+(id)_workoutWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 workoutType:(id)arg7 activityType:(unsigned long long)arg8 workoutEvents:(id)arg9 duration:(double)arg10 totalActiveEnergyBurned:(id)arg11 totalBasalEnergyBurned:(id)arg12 totalDistance:(id)arg13 goalType:(unsigned long long)arg14 goal:(id)arg15 ;
-(id)_validateConfiguration;
-(id)_validateWorkoutEvents:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(HKQuantity *)totalDistance;
-(void)_setDuration:(double)arg1 ;
-(unsigned long long)workoutActivityType;
-(double)_totalEnergyBurnedInCanonicalUnit;
-(double)_totalBasalEnergyBurnedInCanonicalUnit;
-(double)_totalDistanceInCanonicalUnit;
-(id)_goal;
-(unsigned long long)_goalType;
-(double)_goalInCanonicalUnit;
-(NSArray *)workoutEvents;
-(void)_enumerateActiveTimePeriods:(/*^block*/id)arg1 ;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalBasalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(void)_setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_setGoalType:(unsigned long long)arg1 ;
-(HKQuantity *)totalEnergyBurned;
-(id)_totalBasalEnergyBurned;
-(void)_setWorkoutEvents:(id)arg1 ;
-(void)_setGoal:(id)arg1 ;
@end

