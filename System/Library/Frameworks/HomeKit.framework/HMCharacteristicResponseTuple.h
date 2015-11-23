/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HMCharacteristic, NSError;

@interface HMCharacteristicResponseTuple : NSObject {

	HMCharacteristic* _characteristic;
	NSError* _error;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(HMCharacteristic *)characteristic;
@end

