/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMPedometerProxy;

@interface CMPedometer : NSObject {

	CMPedometerProxy* _pedometerProxy;

}

@property (nonatomic,readonly) CMPedometerProxy * pedometerProxy;              //@synthesize pedometerProxy=_pedometerProxy - In the implementation block
+(BOOL)isPaceAvailable;
+(BOOL)isCadenceAvailable;
+(BOOL)isStepCountingAvailable;
+(BOOL)isDistanceAvailable;
+(BOOL)isFloorCountingAvailable;
-(void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(CMPedometerProxy *)pedometerProxy;
-(id)_pedometerDataWithRecordID:(long long)arg1 ;
-(void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopPedometerUpdates;
-(void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
@end

