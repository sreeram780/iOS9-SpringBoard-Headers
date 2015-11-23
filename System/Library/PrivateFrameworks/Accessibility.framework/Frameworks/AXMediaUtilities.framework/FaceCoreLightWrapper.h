/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSArray;

@interface FaceCoreLightWrapper : NSObject {

	NSArray* lastDetectedFaces;

}

@property (nonatomic,retain) NSArray * lastDetectedFaces; 
-(CGImageRef)copyImageDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 imageWidth:(unsigned long long*)arg2 imageHeight:(unsigned long long*)arg3 shadowBoostEnabled:(BOOL)arg4 ;
-(void)updateCameraMirroringSetting:(BOOL)arg1 ;
-(id)detectFacesInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)init;
-(void)initializeFaceAPI;
-(void)interfaceOrientationChanged:(id)arg1 ;
-(unsigned char)computeFilters:(unsigned char)arg1 ;
-(char*)advancedBoostShadowsInGrayscaleBuffer:(char*)arg1 withSize:(unsigned long long)arg2 ;
-(void)setLastDetectedFaces:(NSArray *)arg1 ;
-(NSArray *)lastDetectedFaces;
@end

