/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDCyclingSpeedAndCadenceService : HDHealthService {

	BOOL _supportsWheelRevolution;
	BOOL _supportsCrankRevolution;
	BOOL _supportsMultipleSensorLocations;
	unsigned short _sensorLocation;

}

@property (readonly) BOOL supportsWheelRevolution;                      //@synthesize supportsWheelRevolution=_supportsWheelRevolution - In the implementation block
@property (readonly) BOOL supportsCrankRevolution;                      //@synthesize supportsCrankRevolution=_supportsCrankRevolution - In the implementation block
@property (readonly) BOOL supportsMultipleSensorLocations;              //@synthesize supportsMultipleSensorLocations=_supportsMultipleSensorLocations - In the implementation block
@property (readonly) unsigned short sensorLocation;                     //@synthesize sensorLocation=_sensorLocation - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
-(id)init;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(id)handleResponse:(id)arg1 forOperation:(unsigned char)arg2 ;
-(void)setCumulativeValue:(id)arg1 onPeripheral:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSensorCalibrationOnPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSensorLocation:(id)arg1 onPeripheral:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCSCMeasurement:(id)arg1 ;
-(void)handleCSCFeature:(id)arg1 ;
-(void)handleCSCSensorLocation:(id)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)supportsWheelRevolution;
-(BOOL)supportsCrankRevolution;
-(BOOL)supportsMultipleSensorLocations;
-(unsigned short)sensorLocation;
@end

