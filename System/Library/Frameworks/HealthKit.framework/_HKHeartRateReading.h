/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface _HKHeartRateReading : NSObject <NSSecureCoding> {

	HKQuantity* _heartRate;
	long long _confidence;

}

@property (nonatomic,retain) HKQuantity * heartRate;              //@synthesize heartRate=_heartRate - In the implementation block
@property (assign,nonatomic) long long confidence;                //@synthesize confidence=_confidence - In the implementation block
+(id)readingWithHeartRate:(id)arg1 confidence:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)confidence;
-(void)setConfidence:(long long)arg1 ;
-(void)setHeartRate:(HKQuantity *)arg1 ;
-(HKQuantity *)heartRate;
@end

