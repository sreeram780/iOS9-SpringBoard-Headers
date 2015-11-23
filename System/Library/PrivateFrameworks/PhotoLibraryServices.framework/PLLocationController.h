/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSMutableArray, NSDictionary, NSString;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSMutableArray* _locationPendingAssets;
	NSDictionary* _exifDictionary;
	NSString* _locationStr;
	BOOL _isEnabled;
	BOOL _isUpdating;
	BOOL _isHeadingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)location;
-(id)locationString;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)_assetContainerChanged:(id)arg1 ;
-(void)_updateLocationRunState;
-(void)_stopUpdating;
-(void)_startUpdating;
-(id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(BOOL)arg2 ;
-(BOOL)_addLocationToAsset:(id)arg1 ;
-(void)_updatePendingAssets;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(BOOL)arg3 ;
@end

