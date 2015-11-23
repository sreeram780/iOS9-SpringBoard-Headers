/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSDictionary, NSString, NSDate;

@interface LSBestAppSuggestion : NSObject {

	unsigned long long _type;
	NSUUID* _uniqueIdentifier;
	NSDictionary* _options;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSString* _dynamicIdentifier;
	NSDate* _lastUpdateTime;
	double _confidence;
	NSString* _originatingDeviceIdentifier;
	NSString* _originatingDeviceName;
	NSString* _originatingDeviceType;

}

@property (copy,readonly) NSString * userActivityTypeIdentifier; 
@property (readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (copy,readonly) NSString * dynamicIdentifier;                        //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy,readonly) NSDate * lastUpdateTime;                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (copy,readonly) NSDate * when; 
@property (copy,readonly) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (readonly) double confidence;                                        //@synthesize confidence=_confidence - In the implementation block
@property (copy,readonly) NSString * originatingDeviceIdentifier;              //@synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier - In the implementation block
@property (copy,readonly) NSString * originatingDeviceName;                    //@synthesize originatingDeviceName=_originatingDeviceName - In the implementation block
@property (copy,readonly) NSString * originatingDeviceType;                    //@synthesize originatingDeviceType=_originatingDeviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)userActivityTypeIdentifier;
-(void)setActivityType:(NSString *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 type:(unsigned long long)arg6 deviceName:(id)arg7 deviceIdentifier:(id)arg8 deviceType:(id)arg9 options:(id)arg10 ;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)dynamicIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)bundleIdentifier;
-(unsigned long long)type;
-(NSString *)activityType;
-(NSDictionary *)options;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
-(NSDate *)when;
-(double)confidence;
@end

