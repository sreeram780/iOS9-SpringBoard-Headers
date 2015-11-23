/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSString, NSNumber;

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot {

	NSString* _activeBand;
	NSString* _dataStatus;
	NSString* _currentRat;
	NSString* _preferredRat;
	NSString* _campedRat;
	NSString* _callStatus;
	NSString* _airplaneMode;
	NSString* _simStatus;
	NSNumber* _signalStrength;
	NSNumber* _signalBars;

}

@property (retain) NSString * activeBand;                  //@synthesize activeBand=_activeBand - In the implementation block
@property (retain) NSString * dataStatus;                  //@synthesize dataStatus=_dataStatus - In the implementation block
@property (retain) NSString * currentRat;                  //@synthesize currentRat=_currentRat - In the implementation block
@property (retain) NSString * preferredRat;                //@synthesize preferredRat=_preferredRat - In the implementation block
@property (retain) NSString * campedRat;                   //@synthesize campedRat=_campedRat - In the implementation block
@property (retain) NSString * callStatus;                  //@synthesize callStatus=_callStatus - In the implementation block
@property (retain) NSString * airplaneMode;                //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (retain) NSString * simStatus;                   //@synthesize simStatus=_simStatus - In the implementation block
@property (retain) NSNumber * signalStrength;              //@synthesize signalStrength=_signalStrength - In the implementation block
@property (retain) NSNumber * signalBars;                  //@synthesize signalBars=_signalBars - In the implementation block
+(id)entryEventPointDefinitionTelephonyActivity;
-(NSString *)airplaneMode;
-(NSString *)dataStatus;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSString *)activeBand;
-(NSString *)currentRat;
-(NSString *)preferredRat;
-(NSString *)campedRat;
-(NSString *)simStatus;
-(NSNumber *)signalStrength;
-(NSNumber *)signalBars;
-(void)refreshTelephonyActivity;
-(void)logPointIntervalTelephonyActivityAirplaneModeChange;
-(void)logPointIntervalTelephonyActivity;
-(void)setActiveBand:(NSString *)arg1 ;
-(void)setDataStatus:(NSString *)arg1 ;
-(void)setCurrentRat:(NSString *)arg1 ;
-(void)setPreferredRat:(NSString *)arg1 ;
-(void)setCampedRat:(NSString *)arg1 ;
-(void)setAirplaneMode:(NSString *)arg1 ;
-(void)setSimStatus:(NSString *)arg1 ;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(void)setSignalBars:(NSNumber *)arg1 ;
-(void)setCallStatus:(NSString *)arg1 ;
-(NSString *)callStatus;
@end

