/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorCubeFilter.h>

@class NSNumber, UIColor, NSData;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter> {

	NSNumber* _inputMinHueAngle;
	NSNumber* _inputMaxHueAngle;
	UIColor* _inputReplaceColor;
	NSData* _cubeData;

}

@property (nonatomic,retain) NSNumber * inputMinHueAngle;              //@synthesize inputMinHueAngle=_inputMinHueAngle - In the implementation block
@property (nonatomic,retain) NSNumber * inputMaxHueAngle;              //@synthesize inputMaxHueAngle=_inputMaxHueAngle - In the implementation block
@property (nonatomic,retain) UIColor * inputReplaceColor;              //@synthesize inputReplaceColor=_inputReplaceColor - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithMinHueAngle:(id)arg1 inputMaxHueAngle:(id)arg2 inputReplaceColor:(id)arg3 ;
-(id)outputImage;
-(void)dealloc;
-(id)inputKeys;
-(void)createCubeWithMinHueAngle:(double)arg1 maxHueAngle:(double)arg2 ;
-(void)setInputMinHueAngle:(NSNumber *)arg1 ;
-(void)setInputMaxHueAngle:(NSNumber *)arg1 ;
-(void)setInputReplaceColor:(UIColor *)arg1 ;
-(void)rgbToHSV:(float*)arg1 hsv:(float*)arg2 ;
-(void)setSettingInputReplaceColor:(id)arg1 ;
-(void)setSettingInputMinHueAngle:(id)arg1 ;
-(void)setSettingInputMaxHueAngle:(id)arg1 ;
-(NSNumber *)inputMinHueAngle;
-(NSNumber *)inputMaxHueAngle;
-(UIColor *)inputReplaceColor;
@end

