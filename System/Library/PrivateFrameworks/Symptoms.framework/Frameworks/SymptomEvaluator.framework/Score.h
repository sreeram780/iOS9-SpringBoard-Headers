/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface Score : NSObject {

	double _upPct;
	double _overallStay;
	double _handicapStay;
	double _rttMin;
	double _maxDownlRate;
	double _connSuccesses;
	double _connAttempts;
	double _epochs;
	double _lqmTransitionCount;

}

@property (assign,nonatomic) double upPct;                           //@synthesize upPct=_upPct - In the implementation block
@property (assign,nonatomic) double overallStay;                     //@synthesize overallStay=_overallStay - In the implementation block
@property (assign,nonatomic) double handicapStay;                    //@synthesize handicapStay=_handicapStay - In the implementation block
@property (assign,nonatomic) double rttMin;                          //@synthesize rttMin=_rttMin - In the implementation block
@property (assign,nonatomic) double maxDownlRate;                    //@synthesize maxDownlRate=_maxDownlRate - In the implementation block
@property (assign,nonatomic) double connSuccesses;                   //@synthesize connSuccesses=_connSuccesses - In the implementation block
@property (assign,nonatomic) double connAttempts;                    //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) double epochs;                          //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) double lqmTransitionCount;              //@synthesize lqmTransitionCount=_lqmTransitionCount - In the implementation block
-(id)description;
-(void)setConnSuccesses:(double)arg1 ;
-(double)connSuccesses;
-(double)upPct;
-(double)overallStay;
-(double)handicapStay;
-(double)rttMin;
-(double)maxDownlRate;
-(double)lqmTransitionCount;
-(void)setUpPct:(double)arg1 ;
-(void)setOverallStay:(double)arg1 ;
-(void)setHandicapStay:(double)arg1 ;
-(void)setRttMin:(double)arg1 ;
-(void)setMaxDownlRate:(double)arg1 ;
-(void)setLqmTransitionCount:(double)arg1 ;
-(void)setEpochs:(double)arg1 ;
-(void)setConnAttempts:(double)arg1 ;
-(double)epochs;
-(double)connAttempts;
@end

