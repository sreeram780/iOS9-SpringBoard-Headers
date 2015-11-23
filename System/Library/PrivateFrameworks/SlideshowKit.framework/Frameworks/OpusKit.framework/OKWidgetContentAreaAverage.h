/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentAreaAverage.h>

@class CIVector;

@interface OKWidgetContentAreaAverage : OKWidgetBasicFilter <JSOKWidgetContentAreaAverage> {

	CIVector* _inputExtent;

}

@property (nonatomic,retain) CIVector * inputExtent;              //@synthesize inputExtent=_inputExtent - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputExtent:(SCNVector4)arg1 ;
-(id)outputImage;
-(void)dealloc;
-(id)inputKeys;
-(void)setSettingInputExtent:(SCNVector4)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
@end

