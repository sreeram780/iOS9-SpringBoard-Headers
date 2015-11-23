/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOAppConfig, GEODeviceConfig, NSLock;

@interface GEOLogMessageFactory : NSObject {

	GEOAppConfig* _appConfig;
	GEODeviceConfig* _deviceConfig;
	unsigned long long _shortSessionUsageLogMessageCount;
	unsigned long long _debugLogMessageCount;
	NSLock* _lock;

}

@property (nonatomic,readonly) GEOAppConfig * appConfig;                    //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,readonly) GEODeviceConfig * deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(GEODeviceConfig *)deviceConfig;
-(GEOAppConfig *)appConfig;
-(void)_populateAppAndDeviceStateInLogMessage:(id)arg1 withTraits:(id)arg2 ;
-(id)logMessageForDebugString:(id)arg1 ;
-(void)_populateAppConfig;
-(void)_populateDeviceConfig;
-(id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 routeDetails:(id)arg5 serverMetadata:(id)arg6 userActionUsageLogMessage:(id)arg7 ;
-(BOOL)_shouldVendoutDeviceAndAppConfigForLogMessageType:(int)arg1 logMessageCount:(unsigned long long)arg2 ;
-(void)_populateAppAndDeviceConfigInLogMessage:(id)arg1 ;
-(id)logMessageForUserAction:(id)arg1 eventValue:(id)arg2 traits:(id)arg3 placeActionDetails:(id)arg4 routeDetails:(id)arg5 serverMetadata:(id)arg6 uiTarget:(int)arg7 ;
@end

