/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>
#import <libobjc.A.dylib/SBFProceduralWallpaperDelegate.h>

@protocol SBFProceduralWallpaper;
@class NSDictionary, NSTimer, UIImage, NSString;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate> {

	id<SBFProceduralWallpaper> _proceduralWallpaper;
	NSDictionary* _options;
	NSTimer* _colorSampleTimer;
	int _thermalNotificationToken;
	BOOL _pausedForThermalReasons;
	CAImageQueueRef _blurQueue;
	UIImage* _blur;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidate;
-(id)options;
-(void)setRotating:(BOOL)arg1 ;
-(BOOL)_isVisible;
-(id)_computeAverageColor;
-(void)_handleVariantChange;
-(id)_blurredImage;
-(void)_handleVisibilityChange;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3 ;
-(BOOL)needsImmediateLayoutBeforeRotation;
-(void)setContinuousColorSamplingEnabled:(BOOL)arg1 ;
-(void)setWallpaperAnimationEnabled:(BOOL)arg1 ;
-(void)_updateAnimating;
-(void)_updateSampleTimer;
-(BOOL)_deviceMayRotate;
-(BOOL)hasBeenInvalidated;
-(id)_newImageFromBlurSurface:(IOSurfaceRef)arg1 rect:(CGRect)arg2 ;
-(BOOL)_shouldSampleContinuously;
-(void)_sample;
-(void)wallpaper:(id)arg1 didGenerateBlur:(IOSurfaceRef)arg2 forRect:(CGRect)arg3 ;
-(void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(long long)arg4 ;
@end

