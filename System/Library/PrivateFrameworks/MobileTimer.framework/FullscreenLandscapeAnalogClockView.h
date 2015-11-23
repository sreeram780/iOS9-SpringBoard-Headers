/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/AnalogClockView.h>

@interface FullscreenLandscapeAnalogClockView : AnalogClockView
+(int)style;
+(double)secondHandOverhangLength;
+(double)secondHandMainLength;
+(double)faceRadius;
+(double)hourHandLength;
+(double)minuteHandLength;
+(double)minuteHandWidth;
+(double)hourHandWidth;
+(double)secondHandWidth;
+(double)overHourHandDotSize;
+(double)overSecondHandDotSize;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)resourcePath;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

