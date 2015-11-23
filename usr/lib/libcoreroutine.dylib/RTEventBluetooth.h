/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTEventContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventBluetooth : RTEventContext <NSSecureCoding> {

	long long _bluetoothState;
	long long _deviceType;
	NSString* _deviceName;

}

@property (nonatomic,readonly) long long bluetoothState;              //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,readonly) long long deviceType;                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromBluetoothState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceName;
-(long long)deviceType;
-(long long)bluetoothState;
-(id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 source:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 locationIdentifier:(id)arg8 ;
@end

