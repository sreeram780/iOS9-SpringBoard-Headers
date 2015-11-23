/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EKStatsOperation : NSObject {

	int _type;
	long long _intValue;
	double _doubleValue;

}

@property (assign) int type;                        //@synthesize type=_type - In the implementation block
@property (assign) long long intValue;              //@synthesize intValue=_intValue - In the implementation block
@property (assign) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 intValue:(long long)arg2 ;
-(id)initWithType:(int)arg1 doubleValue:(double)arg2 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
@end

