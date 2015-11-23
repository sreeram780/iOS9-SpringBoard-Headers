/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingAidDevice.h>

@class NSMutableArray, NSString, NSArray, NSDate;

@interface AXHearingAidFakeDevice : AXHearingAidDevice {

	NSMutableArray* _leftFakePrograms;
	NSMutableArray* _rightFakePrograms;
	BOOL _isConnecting;
	BOOL _connected;
	int _type;
	NSString* _name;
	NSArray* _manufacturer;
	NSArray* _model;
	NSString* _leftUUID;
	NSString* _rightUUID;
	double _rightBatteryLevel;
	double _leftBatteryLevel;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	NSString* _deviceUUID;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL connected;                               //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * manufacturer;                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSArray * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                          //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                         //@synthesize rightUUID=_rightUUID - In the implementation block
@property (assign,nonatomic) double rightBatteryLevel;                     //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) double leftBatteryLevel;                      //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL isConnecting;                            //@synthesize isConnecting=_isConnecting - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;               //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;              //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;               //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;              //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                  //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                 //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSString * deviceUUID;                        //@synthesize deviceUUID=_deviceUUID - In the implementation block
-(BOOL)isConnecting;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSArray *)model;
-(void)connect;
-(BOOL)isPersistent;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(void)disconnect;
-(void)setModel:(NSArray *)arg1 ;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(id)leftPrograms;
-(id)rightPrograms;
-(BOOL)didLoadRequiredProperties;
-(void)setLeftBatteryLevel:(double)arg1 ;
-(void)setRightBatteryLevel:(double)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(BOOL)hasConnection;
-(BOOL)didLoadBasicProperties;
-(void)setIsConnecting:(BOOL)arg1 ;
-(id)persistentRepresentation;
-(void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(unsigned long long)arg3 ;
-(id)initWithDeviceType:(int)arg1 ;
-(id)manufacturerForType;
-(id)modelForType;
-(void)createPrograms;
-(BOOL)isConnected;
-(void)setManufacturer:(NSArray *)arg1 ;
-(NSArray *)manufacturer;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(BOOL)isPaired;
-(void)persist;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
@end

