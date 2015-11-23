/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)_purgeResources;
-(int)updateOutputPixelFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW12)arg2 poolCapacity:(int)arg3 ;
-(int)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSampleBuffer:(opaqueCMSampleBuffer*)arg2 ;
-(int)_buildBufferPoolWithFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW12)arg2 poolCapacity:(int)arg3 ;
-(int)_buildTransferSession;
@end

