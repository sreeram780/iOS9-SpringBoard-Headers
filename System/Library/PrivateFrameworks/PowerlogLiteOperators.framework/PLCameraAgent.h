/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, NSDictionary;

@interface PLCameraAgent : PLAgent {

	PLXPCListenerOperatorComposition* _frontCameraNotification;
	PLXPCListenerOperatorComposition* _backCameraNotification;
	PLXPCListenerOperatorComposition* _torchNotification;
	NSDictionary* _frontCameraPowerModel;
	NSDictionary* _backCameraPowerModel;
	NSDictionary* _torchPowerModel;

}

@property (readonly) PLXPCListenerOperatorComposition * frontCameraNotification;              //@synthesize frontCameraNotification=_frontCameraNotification - In the implementation block
@property (readonly) PLXPCListenerOperatorComposition * backCameraNotification;               //@synthesize backCameraNotification=_backCameraNotification - In the implementation block
@property (readonly) PLXPCListenerOperatorComposition * torchNotification;                    //@synthesize torchNotification=_torchNotification - In the implementation block
@property (readonly) NSDictionary * frontCameraPowerModel;                                    //@synthesize frontCameraPowerModel=_frontCameraPowerModel - In the implementation block
@property (readonly) NSDictionary * backCameraPowerModel;                                     //@synthesize backCameraPowerModel=_backCameraPowerModel - In the implementation block
@property (readonly) NSDictionary * torchPowerModel;                                          //@synthesize torchPowerModel=_torchPowerModel - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
-(void)log;
-(void)initOperatorDependancies;
-(void)modelFrontCameraPowerWithEntry:(id)arg1 ;
-(void)modelBackCameraPowerWithEntry:(id)arg1 ;
-(void)modelTorchPowerWithEntry:(id)arg1 ;
-(NSDictionary *)frontCameraPowerModel;
-(NSDictionary *)backCameraPowerModel;
-(NSDictionary *)torchPowerModel;
-(PLXPCListenerOperatorComposition *)frontCameraNotification;
-(PLXPCListenerOperatorComposition *)backCameraNotification;
-(PLXPCListenerOperatorComposition *)torchNotification;
@end

