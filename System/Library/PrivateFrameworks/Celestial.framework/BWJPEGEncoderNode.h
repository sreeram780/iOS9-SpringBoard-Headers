/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSDictionary;

@interface BWJPEGEncoderNode : BWNode {

	NSObject*<OS_dispatch_queue> _thumbnailGenerationQueue;
	NSObject*<OS_dispatch_group> _thumbnailGenerationGroup;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	BOOL _croppingEnabled;
	NSDictionary* _inputColorInfo;

}
+(void)initialize;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(BOOL)arg3 ;
+(BOOL)_croppingRequiredForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setInputColorInfo:(id)arg1 ;
-(void)setCroppingEnabled:(BOOL)arg1 ;
-(void)_generateThumbnailForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 outputSurface:(_IOSurface*)arg3 ;
-(void)_encodeJPEGForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 outputSurface:(_IOSurface*)arg3 outputSurfaceSize:(int*)arg4 outputSurfaceImageSize:(CGSize*)arg5 ;
-(BOOL)croppingEnabled;
-(id)inputColorInfo;
@end

