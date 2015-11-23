/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class PLXPCResponderOperatorComposition, NSMutableDictionary, PLSemaphore, NSDate, NSMutableArray, PLEntryNotificationOperatorComposition, NSSet, PLDTCostElement, NSTimer;

@interface PLBatteryGaugeService : PLService {

	BOOL _isTestingRunning;
	int _lastQueryCount;
	int _curQueryCount;
	PLXPCResponderOperatorComposition* _xpcResponderBatteryGaugeDT;
	double _startTime;
	double _stopTime;
	NSMutableDictionary* _measurements;
	NSMutableDictionary* _bundleIDandPidMap;
	NSMutableDictionary* _requestTime;
	NSMutableDictionary* _returnTime;
	NSMutableDictionary* _responseTime;
	NSMutableDictionary* _entrykeyCallBackMapping;
	NSMutableDictionary* _entrykeyCallBackOnceMapping;
	PLSemaphore* _responseSemaphore;
	NSDate* _curQueryTime;
	NSDate* _lastQueryTime;
	id _costElement;
	NSMutableArray* _trackedProcesses;
	PLEntryNotificationOperatorComposition* _processMonitorCallback;
	NSMutableDictionary* _processMonitorResults;
	NSMutableDictionary* _reportedProcessMonitor;
	PLEntryNotificationOperatorComposition* _processNetworkCallback;
	NSMutableDictionary* _processNetworkResults;
	NSMutableDictionary* _reportedProcessNetwork;
	PLEntryNotificationOperatorComposition* _locationCallback;
	NSMutableDictionary* _locationResults;
	NSMutableDictionary* _reportedLocation;
	PLEntryNotificationOperatorComposition* _applicationCallback;
	NSMutableDictionary* _applicationResults;
	NSMutableDictionary* _reportedApplication;
	NSSet* _scoringEntities;
	PLDTCostElement* _networkingCostElement;
	NSTimer* _exitTimer;

}

@property (retain) PLXPCResponderOperatorComposition * xpcResponderBatteryGaugeDT;               //@synthesize xpcResponderBatteryGaugeDT=_xpcResponderBatteryGaugeDT - In the implementation block
@property (assign) double startTime;                                                             //@synthesize startTime=_startTime - In the implementation block
@property (assign) double stopTime;                                                              //@synthesize stopTime=_stopTime - In the implementation block
@property (retain) NSMutableDictionary * measurements;                                           //@synthesize measurements=_measurements - In the implementation block
@property (retain) NSMutableDictionary * bundleIDandPidMap;                                      //@synthesize bundleIDandPidMap=_bundleIDandPidMap - In the implementation block
@property (retain) NSMutableDictionary * requestTime;                                            //@synthesize requestTime=_requestTime - In the implementation block
@property (retain) NSMutableDictionary * returnTime;                                             //@synthesize returnTime=_returnTime - In the implementation block
@property (retain) NSMutableDictionary * responseTime;                                           //@synthesize responseTime=_responseTime - In the implementation block
@property (retain) NSMutableDictionary * entrykeyCallBackMapping;                                //@synthesize entrykeyCallBackMapping=_entrykeyCallBackMapping - In the implementation block
@property (retain) NSMutableDictionary * entrykeyCallBackOnceMapping;                            //@synthesize entrykeyCallBackOnceMapping=_entrykeyCallBackOnceMapping - In the implementation block
@property (retain) PLSemaphore * responseSemaphore;                                              //@synthesize responseSemaphore=_responseSemaphore - In the implementation block
@property (retain) NSDate * curQueryTime;                                                        //@synthesize curQueryTime=_curQueryTime - In the implementation block
@property (retain) NSDate * lastQueryTime;                                                       //@synthesize lastQueryTime=_lastQueryTime - In the implementation block
@property (assign) BOOL isTestingRunning;                                                        //@synthesize isTestingRunning=_isTestingRunning - In the implementation block
@property (retain) id costElement;                                                               //@synthesize costElement=_costElement - In the implementation block
@property (assign) int lastQueryCount;                                                           //@synthesize lastQueryCount=_lastQueryCount - In the implementation block
@property (assign) int curQueryCount;                                                            //@synthesize curQueryCount=_curQueryCount - In the implementation block
@property (retain) NSMutableArray * trackedProcesses;                                            //@synthesize trackedProcesses=_trackedProcesses - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processMonitorCallback;              //@synthesize processMonitorCallback=_processMonitorCallback - In the implementation block
@property (retain) NSMutableDictionary * processMonitorResults;                                  //@synthesize processMonitorResults=_processMonitorResults - In the implementation block
@property (retain) NSMutableDictionary * reportedProcessMonitor;                                 //@synthesize reportedProcessMonitor=_reportedProcessMonitor - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processNetworkCallback;              //@synthesize processNetworkCallback=_processNetworkCallback - In the implementation block
@property (retain) NSMutableDictionary * processNetworkResults;                                  //@synthesize processNetworkResults=_processNetworkResults - In the implementation block
@property (retain) NSMutableDictionary * reportedProcessNetwork;                                 //@synthesize reportedProcessNetwork=_reportedProcessNetwork - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * locationCallback;                    //@synthesize locationCallback=_locationCallback - In the implementation block
@property (retain) NSMutableDictionary * locationResults;                                        //@synthesize locationResults=_locationResults - In the implementation block
@property (retain) NSMutableDictionary * reportedLocation;                                       //@synthesize reportedLocation=_reportedLocation - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * applicationCallback;                 //@synthesize applicationCallback=_applicationCallback - In the implementation block
@property (retain) NSMutableDictionary * applicationResults;                                     //@synthesize applicationResults=_applicationResults - In the implementation block
@property (retain) NSMutableDictionary * reportedApplication;                                    //@synthesize reportedApplication=_reportedApplication - In the implementation block
@property (readonly) NSSet * scoringEntities;                                                    //@synthesize scoringEntities=_scoringEntities - In the implementation block
@property (retain) PLDTCostElement * networkingCostElement;                                      //@synthesize networkingCostElement=_networkingCostElement - In the implementation block
@property (retain) NSTimer * exitTimer;                                                          //@synthesize exitTimer=_exitTimer - In the implementation block
+(void)load;
-(double)stopTime;
-(void)setStopTime:(double)arg1 ;
-(PLSemaphore *)responseSemaphore;
-(void)setResponseSemaphore:(PLSemaphore *)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSMutableDictionary *)requestTime;
-(void)setRequestTime:(NSMutableDictionary *)arg1 ;
-(void)setResponseTime:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)responseTime;
-(void)setLastQueryTime:(NSDate *)arg1 ;
-(NSDate *)lastQueryTime;
-(void)selfExit:(id)arg1 ;
-(id)DTQueryResponse:(id)arg1 ;
-(void)setXpcResponderBatteryGaugeDT:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)dataReceivedFrom:(id)arg1 ;
-(NSMutableDictionary *)processMonitorResults;
-(NSMutableDictionary *)reportedProcessMonitor;
-(void)parseProcessMonitorResults:(id)arg1 ;
-(void)setProcessMonitorCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(NSMutableDictionary *)entrykeyCallBackMapping;
-(PLEntryNotificationOperatorComposition *)processMonitorCallback;
-(NSMutableDictionary *)processNetworkResults;
-(NSMutableDictionary *)reportedProcessNetwork;
-(void)parseProcessNetworkResults:(id)arg1 ;
-(void)setProcessNetworkCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)processNetworkCallback;
-(NSMutableDictionary *)locationResults;
-(NSMutableDictionary *)reportedLocation;
-(void)parseLocationResults:(id)arg1 ;
-(void)setLocationCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)locationCallback;
-(NSMutableDictionary *)applicationResults;
-(NSMutableDictionary *)reportedApplication;
-(void)parseApplicationResults:(id)arg1 ;
-(NSMutableDictionary *)entrykeyCallBackOnceMapping;
-(NSMutableDictionary *)measurements;
-(NSMutableArray *)trackedProcesses;
-(NSDate *)curQueryTime;
-(NSMutableDictionary *)bundleIDandPidMap;
-(double)computeNetworkingCostWithWifiIn:(int)arg1 withWifiOut:(int)arg2 withCellIn:(int)arg3 withCellOut:(int)arg4 ;
-(double)computeLocationCostWithWifiCost:(int)arg1 withGpsCost:(int)arg2 withCellCost:(int)arg3 withSkyhookCost:(int)arg4 ;
-(void)setLastActiveStartTimeAndLastSuspendTimeWithPid:(int)arg1 withAppState:(int)arg2 withCurrentTime:(id)arg3 ;
-(NSSet *)scoringEntities;
-(id)costElement;
-(void)setCostElement:(id)arg1 ;
-(int)lastQueryCount;
-(int)curQueryCount;
-(NSMutableDictionary *)returnTime;
-(void)listAllRunningPidsWithBuffer:(int*)arg1 withSizeOfBuffer:(int)arg2 ;
-(id)extractAndSetProcessIdentifierWithPayload:(id)arg1 ;
-(void)translateProcessIdentifierWithInput:(id)arg1 ;
-(int)matchingPidWithProcessName:(id)arg1 withBundleID:(id)arg2 ;
-(id)extractAndTranslateProcessIdentifier:(id)arg1 ;
-(void)setCurQueryTime:(NSDate *)arg1 ;
-(void)setLastQueryCount:(int)arg1 ;
-(void)setCurQueryCount:(int)arg1 ;
-(void)requestDataFrom:(id)arg1 withType:(int)arg2 ;
-(id)convertRawUsageToScore:(id)arg1 ;
-(id)startRoutineWithPayload:(id)arg1 ;
-(id)stopRoutineWithPayload:(id)arg1 ;
-(id)pauseRoutineWithPayload:(id)arg1 ;
-(id)resumeRoutineWithPayload:(id)arg1 ;
-(id)clearStateRoutine:(id)arg1 ;
-(void)triggerAllData;
-(void)initResponseSemaphore;
-(id)compileSnapshotResponse;
-(void)resetExitTimer;
-(void)testGaugeServiceSingleInstance:(id)arg1 ;
-(id)getObjectInMeasurementsWithPid:(int)arg1 withCategory:(id)arg2 withKey:(id)arg3 ;
-(void)setObjectInMeasurementsWithObject:(id)arg1 withPid:(int)arg2 withCategory:(id)arg3 withKey:(id)arg4 ;
-(void)testGaugeService;
-(PLXPCResponderOperatorComposition *)xpcResponderBatteryGaugeDT;
-(void)setMeasurements:(NSMutableDictionary *)arg1 ;
-(void)setBundleIDandPidMap:(NSMutableDictionary *)arg1 ;
-(void)setReturnTime:(NSMutableDictionary *)arg1 ;
-(void)setEntrykeyCallBackMapping:(NSMutableDictionary *)arg1 ;
-(void)setEntrykeyCallBackOnceMapping:(NSMutableDictionary *)arg1 ;
-(BOOL)isTestingRunning;
-(void)setIsTestingRunning:(BOOL)arg1 ;
-(void)setTrackedProcesses:(NSMutableArray *)arg1 ;
-(void)setProcessMonitorResults:(NSMutableDictionary *)arg1 ;
-(void)setReportedProcessMonitor:(NSMutableDictionary *)arg1 ;
-(void)setProcessNetworkResults:(NSMutableDictionary *)arg1 ;
-(void)setReportedProcessNetwork:(NSMutableDictionary *)arg1 ;
-(void)setLocationResults:(NSMutableDictionary *)arg1 ;
-(void)setReportedLocation:(NSMutableDictionary *)arg1 ;
-(void)setApplicationResults:(NSMutableDictionary *)arg1 ;
-(void)setReportedApplication:(NSMutableDictionary *)arg1 ;
-(PLDTCostElement *)networkingCostElement;
-(void)setNetworkingCostElement:(PLDTCostElement *)arg1 ;
-(NSTimer *)exitTimer;
-(void)setExitTimer:(NSTimer *)arg1 ;
-(void)setApplicationCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)initOperatorDependancies;
-(PLEntryNotificationOperatorComposition *)applicationCallback;
@end

