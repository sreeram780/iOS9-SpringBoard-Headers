/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKGraphRenderer <NSObject>
@property (assign,nonatomic) CGRect axisRect; 
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
@required
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setRenderDelegate:(id)arg1;
-(void)setAxisRect:(CGRect)arg1;
-(void)setNeedsRender;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 clipToAxes:(BOOL)arg6;
-(void)drawText:(id)arg1 atPoint:(CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(BOOL)arg7;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2;
-(CGRect)axisRect;

@end

