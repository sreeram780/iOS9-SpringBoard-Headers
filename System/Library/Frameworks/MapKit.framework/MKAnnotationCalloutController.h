/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate;
#import <MapKit/MapKit-Structs.h>
@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject {

	id<MKAnnotationCalloutControllerDelegate> _delegate;
	MKAnnotationView* _annotationView;
	SCD_Struct_MK14 _mapDisplayStyle;

}

@property (assign,nonatomic,__weak) id<MKAnnotationCalloutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKAnnotationView * annotationView;                                      //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                                        //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(MKAnnotationView *)annotationView;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(BOOL)_isShowingCallout;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)_subtitle;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)_removeAccessoryTargets;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(double)defaultCalloutHeight;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(BOOL)isCalloutExpanded;
-(SCD_Struct_MK14)mapDisplayStyle;
-(void)_updateCallout;
-(void)setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<MKAnnotationCalloutControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MKAnnotationCalloutControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setTitle:(id)arg1 ;
@end

