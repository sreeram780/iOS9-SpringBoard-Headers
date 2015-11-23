/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface VTAggregator : NSObject {

	unsigned long long _currentState;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;
	double _lastAggTimeFalseWakeUp;
	unsigned long long _numFalseWakeUp;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _languageCode;

}
+(id)sharedAggregator;
-(id)init;
-(void)setLanguageCode:(id)arg1 ;
-(void)logTimeVoiceTriggerTransitionsToState:(unsigned long long)arg1 ;
-(void)_logUptime;
-(void)cumulativeUptime:(id*)arg1 cumulativeDowntime:(id*)arg2 reset:(BOOL)arg3 ;
-(void)logActivation;
-(void)logSecondPassResult:(BOOL)arg1 ;
-(void)logFalseWakeUp:(BOOL)arg1 ;
@end

