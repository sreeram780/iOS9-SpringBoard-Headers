/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionCamera/CompanionCamera-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol CCCameraConnectionDelegate;
@class CCCameraConnectionInternal, NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession;

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, AVCaptureVideoDataOutputSampleBufferDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	CCCameraConnectionInternal* _internal;
	NSXPCConnection* _xpc;
	id _orientationChangeObserver;
	NSString* _previewEndpoint;
	FigCameraViewfinder* _remoteViewfinder;
	FigCameraViewfinderSession* _remoteViewfinderSession;
	BOOL _remoteViewfinderSessionActive;
	id<CCCameraConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCCameraConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CCCameraConnectionDelegate>)delegate;
-(void)close;
-(int)_currentOrientation;
-(void)countdownCanceled;
-(void)modeSelected:(unsigned long long)arg1 ;
-(void)switchedMirroringMode:(BOOL)arg1 ;
-(void)flashModeDidChange;
-(void)zoomDidChange:(double)arg1 ;
-(void)photoTaken:(id)arg1 ;
-(void)switchedOrientation:(long long)arg1 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC1)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentOrientationAndMirroring:(/*^block*/id)arg1 ;
-(oneway void)xpc_cancelCountdown;
-(void)closePreview;
-(void)openPreview;
-(BOOL)isPreviewConnected;
-(void)open;
-(BOOL)isOpen;
@end

