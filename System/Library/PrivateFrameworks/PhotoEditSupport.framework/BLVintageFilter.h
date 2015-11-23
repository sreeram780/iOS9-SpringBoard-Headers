/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIFilter;

@interface BLVintageFilter : CIFilter {

	BOOL _needsReprocess;
	int _lastAmount;
	float _lastStrength;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputStrength;
	CIFilter* _colorCubeFilter;
	CIFilter* _maskFilter;

}

@property (nonatomic,retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                    //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputStrength;                  //@synthesize inputStrength=_inputStrength - In the implementation block
@property (nonatomic,retain) CIFilter * colorCubeFilter;              //@synthesize colorCubeFilter=_colorCubeFilter - In the implementation block
@property (nonatomic,retain) CIFilter * maskFilter;                   //@synthesize maskFilter=_maskFilter - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(id)init;
-(CIFilter *)colorCubeFilter;
-(void)setColorCubeFilter:(CIFilter *)arg1 ;
-(void)setMaskFilter:(CIFilter *)arg1 ;
-(CIFilter *)maskFilter;
-(void)setInputImage:(CIImage *)arg1 ;
@end

