/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, PLAgent, NSNumber, NSDate;

@interface PLBBMsgHandler : NSObject {

	unsigned _ticksInGoodState;
	unsigned _ticksInGPSONState;
	NSData* _rawData;
	PLAgent* _agent;
	NSNumber* _seqNum;
	NSDate* _date;
	NSDate* _timestamp;
	NSDate* _apTimestamp;
	NSDate* _calibratedTimestamp;
	double _timeCalibration;

}

@property (nonatomic,retain) NSData * rawData;                                   //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) PLAgent * agent;                                    //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NSNumber * seqNum;                                  //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned ticksInGoodState;                        //@synthesize ticksInGoodState=_ticksInGoodState - In the implementation block
@property (nonatomic,readonly) unsigned ticksInGPSONState;                       //@synthesize ticksInGPSONState=_ticksInGPSONState - In the implementation block
@property (nonatomic,retain,readonly) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain,readonly) NSDate * apTimestamp;                      //@synthesize apTimestamp=_apTimestamp - In the implementation block
@property (nonatomic,retain,readonly) NSDate * calibratedTimestamp;              //@synthesize calibratedTimestamp=_calibratedTimestamp - In the implementation block
@property (assign,nonatomic) double timeCalibration;                             //@synthesize timeCalibration=_timeCalibration - In the implementation block
+(id)getMsgHandler;
-(id)init;
-(NSDate *)timestamp;
-(NSDate *)date;
-(NSData *)rawData;
-(void)setDate:(NSDate *)arg1 ;
-(PLAgent *)agent;
-(void)setAgent:(PLAgent *)arg1 ;
-(NSNumber *)seqNum;
-(void)setSeqNum:(NSNumber *)arg1 ;
-(id)decodeMsgHeader;
-(void)registerWithHandlerAs:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)handleMsg:(id)arg1 forAgent:(id)arg2 ;
-(unsigned)ticksInGoodState;
-(unsigned)ticksInGPSONState;
-(NSDate *)apTimestamp;
-(NSDate *)calibratedTimestamp;
-(double)timeCalibration;
-(void)setTimeCalibration:(double)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
@end

