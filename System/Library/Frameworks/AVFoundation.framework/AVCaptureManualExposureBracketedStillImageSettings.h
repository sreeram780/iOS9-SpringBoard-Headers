/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_CM5 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_CM5 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_CM5)arg1 ISO:(float)arg2 ;
-(SCD_Struct_CM5)exposureDuration;
-(float)ISO;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_CM5)arg1 ISO:(float)arg2 ;
-(id)description;
@end

