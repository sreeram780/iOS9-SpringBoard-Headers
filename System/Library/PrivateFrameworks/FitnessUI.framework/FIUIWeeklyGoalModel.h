/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;
	BOOL _showFakeData;

}
-(id)init;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
@end
