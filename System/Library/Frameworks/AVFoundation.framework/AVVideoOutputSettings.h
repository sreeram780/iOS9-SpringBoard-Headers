/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) NSDictionary * videoCompositionProcessorProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) SCD_Struct_CM5 minimumFrameDuration; 
@property (nonatomic,readonly) NSString * frameRateConversionAlgorithm; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultVideoOutputSettings;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSString *)frameRateConversionAlgorithm;
-(NSDictionary *)pixelTransferProperties;
-(SCD_Struct_CM5)minimumFrameDuration;
-(NSDictionary *)videoScalingProperties;
-(NSDictionary *)videoSettingsDictionary;
-(NSDictionary *)videoCompositionProcessorProperties;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSDictionary *)pixelAspectRatioDictionary;
-(NSDictionary *)cleanApertureDictionary;
-(BOOL)dimensionsAreBoundingBox;
-(int)width;
-(int)height;
@end

