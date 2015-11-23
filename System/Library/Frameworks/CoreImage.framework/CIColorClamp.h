/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorClamp : CIFilter {

	CIImage* inputImage;
	CIVector* inputMinComponents;
	CIVector* inputMaxComponents;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputMinComponents; 
@property (nonatomic,retain) CIVector * inputMaxComponents; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputMinComponents;
-(void)setInputMinComponents:(CIVector *)arg1 ;
-(CIVector *)inputMaxComponents;
-(void)setInputMaxComponents:(CIVector *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

