/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPICImageTools : NSObject
+(CGImageRef)loadCGImageFromURL:(id)arg1 error:(id*)arg2 ;
+(void*)loadRawBufferFromURL:(id)arg1 width:(unsigned*)arg2 height:(unsigned*)arg3 rowBytes:(unsigned*)arg4 error:(id*)arg5 ;
+(id)saveCVPixelBufferPlane8:(int)arg1 from:(CVBufferRef)arg2 withName:(id)arg3 inFolder:(id)arg4 error:(id*)arg5 ;
+(int)create420YCbCr8BufferFromRGB8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 andAlphaFirst:(BOOL)arg5 toLumaBuffer:(void*)arg6 withBytesPerRowLuma:(unsigned long long)arg7 andToChromaBuffer:(void*)arg8 withBytesPerRowChroma:(unsigned long long)arg9 ;
+(id)createErrorWithCode:(int)arg1 andMessage:(id)arg2 ;
+(int)createRGB8BufferFrom420Y8BiPlanarBuffer:(void*)arg1 withBytesPerRowLuma:(unsigned long long)arg2 andFrom420CbCr8Buffer:(void*)arg3 withBytesPerRowChroma:(unsigned long long)arg4 andWithWidth:(int)arg5 andWithHeight:(int)arg6 andAlphaFirst:(BOOL)arg7 toRGB8Buffer:(void*)arg8 withBytesPerRowDst:(unsigned long long)arg9 ;
+(CVBufferRef)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg1 error:(id*)arg2 ;
+(int)createRGB8BufferFrom420Y8PlanarBuffer:(void*)arg1 withBytesPerRowY:(unsigned long long)arg2 andFrom420Cb8Buffer:(void*)arg3 withBytesPerRowCb:(unsigned long long)arg4 andFrom420Cr8Buffer:(void*)arg5 withBytesPerRowCr:(unsigned long long)arg6 andWithWidth:(int)arg7 andWithHeight:(int)arg8 andAlphaFirst:(BOOL)arg9 toRGB8Buffer:(void*)arg10 withBytesPerRowDst:(unsigned long long)arg11 ;
+(id)saveRawBuffer:(void*)arg1 withWidth:(unsigned)arg2 andHeight:(unsigned)arg3 andRowBytes:(unsigned)arg4 withName:(id)arg5 inFolder:(id)arg6 error:(id*)arg7 ;
+(CFStringRef)guessType:(id)arg1 ;
+(id)saveCVPixelBufferRGBA8:(CVBufferRef)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4 ;
+(id)saveVImageBufferPlanar8:(const vImage_Buffer*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4 ;
+(vImage_Buffer*)loadVImageBufferFromURL:(id)arg1 lumaOnly:(BOOL)arg2 error:(id*)arg3 ;
+(id)saveCVPixelBuffer420YpCbCr8:(CVBufferRef)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4 ;
+(id)saveVImageBufferRGBA8:(const vImage_Buffer*)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id*)arg4 ;
+(vImage_Buffer*)getVImageBufferFromCVPixelBuffer:(CVBufferRef)arg1 channel:(int)arg2 error:(id*)arg3 ;
+(int)extractLumaFromBGRA8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toBuffer:(void*)arg5 withBytesPerRow:(unsigned long long)arg6 ;
+(int)create420YCbCr8BufferFromPlanar8Buffer:(void*)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toLumaBuffer:(void*)arg5 withBytesPerRowLuma:(unsigned long long)arg6 andToChromaBuffer:(void*)arg7 withBytesPerRowChroma:(unsigned long long)arg8 ;
+(CVBufferRef)loadCVPixelBufferARGB8FromURL:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)createCVPixelBufferFromUIImage:(id)arg1 error:(id*)arg2 ;
@end

