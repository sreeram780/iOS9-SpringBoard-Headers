/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLNSNotificationOperatorComposition.h>

@interface PLEntryNotificationOperatorComposition : PLNSNotificationOperatorComposition
+(id)wakeEntryNotificationWithWorkQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)canSleepEntryNotificationWithWorkQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)significantBatteryChangeNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)wakeEntryNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)canSleepEntryNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)displayOnNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)displayOffNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)sleepEntryNotificationWithOperator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)requestEntryForEntryKey:(id)arg1 forOperator:(id)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withFilter:(id)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withFilter:(id)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithWorkQueue:(id)arg1 forEntryKey:(id)arg2 withFilter:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 withFilter:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)requestEntry;
-(id)initWithOperator:(id)arg1 forEntryKey:(id)arg2 forUpdateOrInsert:(short)arg3 withBlock:(/*^block*/id)arg4 ;
@end

