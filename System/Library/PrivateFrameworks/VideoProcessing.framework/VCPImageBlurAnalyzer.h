/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray;

@interface VCPImageBlurAnalyzer : VCPImageAnalyzer {

	float _sharpness;
	float _sharpnessBlocks[16];
	NSArray* _faces;

}
-(void)computeLocalSharpness:(CVBufferRef)arg1 ;
-(float)computeFaceSharpness:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 ;
-(float)computeRegionSharpness:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 ;
-(void)spatialPooling;
-(id)initWithFaceResults:(id)arg1 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
@end
