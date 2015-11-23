/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/HDHSCharacteristicsDelegate.h>

@protocol OS_dispatch_queue, HDHealthDaemon;
@class NSObject, NSMutableArray, HDDeviceEntity, NSUUID, NSString, HKDevice, HDHealthDeviceManager, CBCharacteristic;

@interface HDHealthService : NSObject <CBPeripheralDelegate, HDHSCharacteristicsDelegate> {

	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableArray* _pendingObjectBuffer;
	HDDeviceEntity* _deviceEntity;
	BOOL _deliverData;
	BOOL _characteristicsDiscovered;
	int _deviceInformationLoaded;
	NSUUID* _peripheralUUID;
	NSString* _serviceId;
	HKDevice* _deviceInformation;
	HDHealthDeviceManager* _deviceManager;
	CBCharacteristic* _writableCharacteristic;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSMutableArray* _pendingWrites;
	NSString* _peripheralName;
	id<HDHealthDaemon> _healthDaemon;

}

@property (nonatomic,readonly) NSUUID * peripheralUUID;                              //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (assign) BOOL deliverData;                                                 //@synthesize deliverData=_deliverData - In the implementation block
@property (nonatomic,retain) NSString * serviceId;                                   //@synthesize serviceId=_serviceId - In the implementation block
@property (nonatomic,readonly) BOOL characteristicsDiscovered;                       //@synthesize characteristicsDiscovered=_characteristicsDiscovered - In the implementation block
@property (nonatomic,retain) HKDevice * deviceInformation;                           //@synthesize deviceInformation=_deviceInformation - In the implementation block
@property (assign,nonatomic) int deviceInformationLoaded;                            //@synthesize deviceInformationLoaded=_deviceInformationLoaded - In the implementation block
@property (nonatomic,retain) HDHealthDeviceManager * deviceManager;                  //@synthesize deviceManager=_deviceManager - In the implementation block
@property (nonatomic,retain) CBCharacteristic * writableCharacteristic;              //@synthesize writableCharacteristic=_writableCharacteristic - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;                //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingWrites;                         //@synthesize pendingWrites=_pendingWrites - In the implementation block
@property (nonatomic,copy) NSString * peripheralName;                                //@synthesize peripheralName=_peripheralName - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                 //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)serviceType;
+(id)implementedProperties;
+(unsigned char)uint8FromData:(const char**)arg1 before:(const char*)arg2 ;
+(unsigned)uint32FromData:(const char**)arg1 before:(const char*)arg2 ;
+(unsigned short)uint16FromData:(const char**)arg1 before:(const char*)arg2 ;
+(BOOL)uint8:(unsigned char)arg1 toData:(char**)arg2 before:(const char*)arg3 ;
+(BOOL)uint32:(unsigned)arg1 toData:(char**)arg2 before:(const char*)arg3 ;
+(id)dateFromData:(const char**)arg1 before:(const char*)arg2 ;
+(short)int16FromData:(const char**)arg1 before:(const char*)arg2 ;
+(float)floatFromSFLOATData:(const char**)arg1 before:(const char*)arg2 ;
+(float)floatFromSFLOAT:(unsigned short)arg1 ;
+(double)doubleFromFLOAT:(unsigned)arg1 ;
+(double)doubleFromFLOATData:(const char**)arg1 before:(const char*)arg2 ;
+(BOOL)uint16:(unsigned short)arg1 toData:(char**)arg2 before:(const char*)arg3 ;
+(id)serviceUUID;
-(NSString *)description;
-(id)initWithDeviceManager:(id)arg1 propertyManager:(id)arg2 healthDaemon:(id)arg3 peripheral:(id)arg4 ;
-(BOOL)characteristicsDiscovered;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)peripheralDidUpdateName:(id)arg1 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(HDHealthDeviceManager *)deviceManager;
-(void)setDeviceManager:(HDHealthDeviceManager *)arg1 ;
-(void)writeValue:(id)arg1 onPeripheral:(id)arg2 expectResponse:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWritableCharacteristic:(CBCharacteristic *)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deviceDisconnecting;
-(void)serviceDataReceived:(id)arg1 ;
-(void)transitoryDataReceived:(id)arg1 withError:(id)arg2 ;
-(BOOL)deliverData;
-(void)setDeliverData:(BOOL)arg1 ;
-(void)_loadDeviceWithPropertyManager:(id)arg1 ;
-(BOOL)_shouldPersistObjects;
-(void)_dataQueue_persistData:(id)arg1 ;
-(void)_bufferObjectToBePersisted:(id)arg1 ;
-(HKDevice *)deviceInformation;
-(id)_dataQueue_deviceEntity;
-(NSUUID *)peripheralUUID;
-(void)executeFirstWrite;
-(void)respondFirstWriteWithData:(id)arg1 error:(id)arg2 ;
-(void)servicesInvalidatedWithError:(id)arg1 ;
-(void)markCharacteristicsDiscovered;
-(void)_dataQueue_deviceUpdated;
-(void)peripheral:(id)arg1 didWriteValueResponse:(id)arg2 error:(id)arg3 ;
-(void)setDeviceInformation:(HKDevice *)arg1 ;
-(int)deviceInformationLoaded;
-(void)setDeviceInformationLoaded:(int)arg1 ;
-(CBCharacteristic *)writableCharacteristic;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)pendingWrites;
-(void)setPendingWrites:(NSMutableArray *)arg1 ;
-(NSString *)peripheralName;
-(void)setPeripheralName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(void)setServiceId:(NSString *)arg1 ;
-(NSString *)serviceId;
@end

