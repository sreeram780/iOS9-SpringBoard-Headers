/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIPDF417BarcodeGenerator : CICodeGenerator {

	NSNumber* inputMinWidth;
	NSNumber* inputMaxWidth;
	NSNumber* inputMinHeight;
	NSNumber* inputMaxHeight;
	NSNumber* inputDataColumns;
	NSNumber* inputRows;
	NSNumber* inputPreferredAspectRatio;
	NSNumber* inputCompactionMode;
	NSNumber* inputCompactStyle;
	NSNumber* inputCorrectionLevel;
	NSNumber* inputAlwaysSpecifyCompaction;

}

@property (nonatomic,copy) NSNumber * inputMinWidth; 
@property (nonatomic,copy) NSNumber * inputMaxWidth; 
@property (nonatomic,copy) NSNumber * inputMinHeight; 
@property (nonatomic,copy) NSNumber * inputMaxHeight; 
@property (nonatomic,copy) NSNumber * inputDataColumns; 
@property (nonatomic,copy) NSNumber * inputRows; 
@property (nonatomic,copy) NSNumber * inputPreferredAspectRatio; 
@property (nonatomic,copy) NSNumber * inputCompactionMode; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputAlwaysSpecifyCompaction; 
+(id)customAttributes;
-(void)setInputMinWidth:(NSNumber *)arg1 ;
-(void)setInputMaxWidth:(NSNumber *)arg1 ;
-(void)setInputMinHeight:(NSNumber *)arg1 ;
-(void)setInputMaxHeight:(NSNumber *)arg1 ;
-(void)setInputDataColumns:(NSNumber *)arg1 ;
-(void)setInputRows:(NSNumber *)arg1 ;
-(void)setInputPreferredAspectRatio:(NSNumber *)arg1 ;
-(void)setInputCompactionMode:(NSNumber *)arg1 ;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(void)setInputAlwaysSpecifyCompaction:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxWidth;
-(NSNumber *)inputMinHeight;
-(NSNumber *)inputMaxHeight;
-(NSNumber *)inputDataColumns;
-(NSNumber *)inputRows;
-(NSNumber *)inputPreferredAspectRatio;
-(NSNumber *)inputCompactionMode;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(NSNumber *)inputAlwaysSpecifyCompaction;
-(NSNumber *)inputMinWidth;
-(CGImageRef)outputCGImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

