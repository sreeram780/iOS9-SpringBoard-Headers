/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying> {

	NSString* _deviceName;
	NSString* _deviceID;
	NSString* _serviceType;
	NSString* _managerID;
	NSString* _ipAddress;
	NSString* _identifier;
	NSNumber* _nsxpcVersion;

}

@property (copy) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * serviceType;               //@synthesize serviceType=_serviceType - In the implementation block
@property (copy) NSString * managerID;                 //@synthesize managerID=_managerID - In the implementation block
@property (copy) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSNumber * nsxpcVersion;              //@synthesize nsxpcVersion=_nsxpcVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serviceFromDictionary:(id)arg1 ;
+(id)serviceFromAuthorData:(id)arg1 ;
-(id)messageData;
-(NSString *)managerID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)deviceName;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)setManagerID:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(NSNumber *)nsxpcVersion;
-(void)setNsxpcVersion:(NSNumber *)arg1 ;
@end

