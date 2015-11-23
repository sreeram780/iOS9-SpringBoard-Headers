/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;
	NSNumber* inputFalloff;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputFalloff;
-(id)_poskernel;
-(id)_negkernel;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputImage:(CIImage *)arg1 ;
@end

