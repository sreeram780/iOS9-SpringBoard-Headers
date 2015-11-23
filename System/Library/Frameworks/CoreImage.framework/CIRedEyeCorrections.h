/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSArray* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSArray * inputCorrectionInfo; 
-(BOOL)_isIdentity;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSString *)inputCameraModel;
-(NSArray *)inputCorrectionInfo;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

