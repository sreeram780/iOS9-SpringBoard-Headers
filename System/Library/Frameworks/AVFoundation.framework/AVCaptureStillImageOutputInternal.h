/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	BOOL squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	long long HDRCaptureMode;
	BOOL EV0CaptureEnabled;
	BOOL noiseReductionEnabled;
	BOOL suspendsVideoProcessingDuringCapture;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
	BOOL rawCaptureEnabled;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	BOOL highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV43 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned long long maxBracketedCaptureCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL lensStabilizationDuringBracketedCaptureEnabled;

}
-(void)dealloc;
-(id)init;
@end

