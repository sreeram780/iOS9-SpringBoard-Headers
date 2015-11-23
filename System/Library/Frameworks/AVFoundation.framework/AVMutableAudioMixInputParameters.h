/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {

	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;

}

@property (assign,nonatomic) int trackID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
+(id)audioMixInputParameters;
+(id)audioMixInputParametersWithTrack:(id)arg1 ;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_CM5)arg2 ;
@end

