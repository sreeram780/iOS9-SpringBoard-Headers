/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMExposureResult : NSObject {

	BOOL _adjustingExposure;
	BOOL _exposureDidStart;
	BOOL _exposureDidEnd;
	BOOL _deviceSupportsFocus;
	float _exposureTargetBias;
	long long _exposureMode;
	CGPoint _pointOfInterest;

}

@property (getter=isAdjustingExposure,nonatomic,readonly) BOOL adjustingExposure;              //@synthesize adjustingExposure=_adjustingExposure - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                        //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) long long exposureMode;                                         //@synthesize exposureMode=_exposureMode - In the implementation block
@property (nonatomic,readonly) float exposureTargetBias;                                       //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
@property (nonatomic,readonly) BOOL exposureDidStart;                                          //@synthesize exposureDidStart=_exposureDidStart - In the implementation block
@property (nonatomic,readonly) BOOL exposureDidEnd;                                            //@synthesize exposureDidEnd=_exposureDidEnd - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFocus;                                       //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(id)description;
-(long long)exposureMode;
-(CGPoint)pointOfInterest;
-(BOOL)isAdjustingExposure;
-(float)exposureTargetBias;
-(BOOL)exposureDidStart;
-(BOOL)exposureDidEnd;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(BOOL)arg4 exposureDidStart:(BOOL)arg5 exposureDidEnd:(BOOL)arg6 deviceSupportsFocus:(BOOL)arg7 ;
-(BOOL)deviceSupportsFocus;
@end

