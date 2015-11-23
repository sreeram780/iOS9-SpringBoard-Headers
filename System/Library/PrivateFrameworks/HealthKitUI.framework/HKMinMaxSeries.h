/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKGraphSeries.h>

@class HKStrokeStyle, UIImage;

@interface HKMinMaxSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	UIImage* _unselectedPointMarkerImage;
	UIImage* _selectedPointMarkerImage;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,retain) UIImage * unselectedPointMarkerImage;               //@synthesize unselectedPointMarkerImage=_unselectedPointMarkerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;                 //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK0)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(UIImage *)selectedPointMarkerImage;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 axisRect:(CGRect)arg4 ;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 ;
-(void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 axisRect:(CGRect)arg3 secondaryRenderContext:(id)arg4 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedStrokeStyle;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(UIImage *)unselectedPointMarkerImage;
-(void)setUnselectedPointMarkerImage:(UIImage *)arg1 ;
@end

