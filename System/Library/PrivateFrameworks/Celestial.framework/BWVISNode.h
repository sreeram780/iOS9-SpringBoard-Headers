/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWVISNode : BWNode {

	int _stabilizationMethod;
	int _stabilizationType;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _optionsDict;
	BOOL _flushingSBP;
	OpaqueFigCaptureISPProcessingSessionRef _stripProcessingSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	BOOL _logStripProcessingTiming;
	unsigned long long _outputWidth;
	unsigned long long _outputHeight;
	BOOL _sphereVideoEnabled;
	BOOL _offline;
	SCD_Struct_BW12 _offlineOutputDimensions;

}
+(void)initialize;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(unsigned long long)outputWidth;
-(unsigned long long)outputHeight;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(BOOL)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 stripProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg4 requiredFormat:(id)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 offline:(BOOL)arg8 ;
-(void)_updateOutputRequirements;
-(void)_prepareStripProcessingSession;
-(void)_flushBuffers;
-(CVBufferRef)_newOutputPixelBuffer;
-(int)_asynchronouslyStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 withStabilizationParameters:(id)arg2 ;
@end

