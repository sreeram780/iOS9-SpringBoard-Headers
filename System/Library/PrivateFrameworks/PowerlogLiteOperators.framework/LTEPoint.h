/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface LTEPoint : NSObject {

	unsigned _threshold;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (assign) unsigned threshold;              //@synthesize threshold=_threshold - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setThreshold:(unsigned)arg1 ;
-(unsigned)threshold;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

