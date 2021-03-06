/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/__CMKCaptureControllerAccessibility_super.h>

@interface CMKCaptureControllerAccessibility : __CMKCaptureControllerAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1 ;
-(void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2 ;
-(void)_sessionStopped:(id)arg1 ;
-(BOOL)capturePhotoUsingHDR:(BOOL)arg1 ;
-(void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end

