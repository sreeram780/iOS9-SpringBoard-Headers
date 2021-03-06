/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id userInfo; 
@required
-(id)userInfo;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
-(double)endXValue;

@end

