/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@interface AEVConversionUtils : NSObject
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(CGImageRef)createImageFromGrayscaleData:(char*)arg1 ofWidth:(int)arg2 andHeight:(int)arg3 ;
@end

