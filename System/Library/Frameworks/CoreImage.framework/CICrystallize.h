/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CICrystallize : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	CIVector* inputCenter;

}
+(id)customAttributes;
-(id)_CICrystallize;
-(id)outputImage;
@end

