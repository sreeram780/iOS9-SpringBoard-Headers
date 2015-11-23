/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIHistogramDisplayFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputHeight;
	NSNumber* inputHighLimit;
	NSNumber* inputLowLimit;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputHeight; 
@property (nonatomic,retain) NSNumber * inputHighLimit; 
@property (nonatomic,retain) NSNumber * inputLowLimit; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputHeight;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputHighLimit;
-(void)setInputHighLimit:(NSNumber *)arg1 ;
-(NSNumber *)inputLowLimit;
-(void)setInputLowLimit:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

