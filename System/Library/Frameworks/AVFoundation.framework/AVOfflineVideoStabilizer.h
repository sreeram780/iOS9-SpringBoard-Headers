/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSSet;

@interface AVOfflineVideoStabilizer : NSObject {

	SCD_Struct_CM5 _targetFrameDuration;
	int _metadataPrimingCount;
	AVWeakReference* _dataProviderWeakReference;
	CVPixelBufferPoolRef _pixelBufferPool;
	BOOL _clientMarkedEndOfVideoData;
	long long _videoOutputFrameNumber;
	opaqueCMFormatDescriptionRef _cachedVideoFormatDescription;
	NSMutableArray* _outputSampleBuffers;
	BOOL _clientMarkedEndOfMetadata;
	long long _metadataOutputFrameNumber;
	NSMutableArray* _futureFrameMetadataDicts;
	NSSet* _requiredMetadataKeys;
	NSSet* _optionalMetadataKeys;
	OpaqueFigSampleBufferProcessorRef _gvsProcessor;
	BOOL _stabilizationEnabled;

}

@property (nonatomic,readonly) int preferredSourcePixelBufferPrimingFrameCount; 
@property (nonatomic,readonly) int preferredSourceStabilizationMetadataPrimingCount; 
@property (nonatomic,readonly) NSMutableArray * outputSampleBuffers;                              //@synthesize outputSampleBuffers=_outputSampleBuffers - In the implementation block
+(id)offlineVideoStabilizerWithTargetFrameDuration:(SCD_Struct_CM5)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
+(void)initialize;
-(void)_teardownVISProcessor;
-(opaqueCMSampleBufferRef)_copyStabilizedSampleBuffer:(id*)arg1 ;
-(int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(SCD_Struct_CM5)arg2 isEndOfData:(BOOL*)arg3 ;
-(int)_validateSourcePixelBuffer:(CVBufferRef)arg1 withSampleTime:(SCD_Struct_CM5)arg2 metadata:(id)arg3 isEndOfData:(BOOL*)arg4 ;
-(opaqueCMSampleBufferRef)_createSampleBufferWithPixelBuffer:(CVBufferRef)arg1 sampleTime:(SCD_Struct_CM5)arg2 futureMetadata:(id)arg3 status:(int*)arg4 ;
-(int)_setupGVSProcessorWithMetadataArray:(id)arg1 ;
-(int)preferredSourceStabilizationMetadataPrimingCount;
-(NSMutableArray *)outputSampleBuffers;
-(void)dealloc;
-(opaqueCMSampleBufferRef)copyStabilizedSampleBuffer:(id*)arg1 ;
-(id)initWithTargetFrameDuration:(SCD_Struct_CM5)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
-(int)preferredSourcePixelBufferPrimingFrameCount;
@end

