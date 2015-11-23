/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MKDeepPressGestureRecognizer : UIGestureRecognizer {

	UITouch* _touch;
	CGPoint _downLocation;
	double _allowableMovementBeforePressure;
	double _requiredForce;

}

@property (assign,nonatomic) double allowableMovementBeforePressure;              //@synthesize allowableMovementBeforePressure=_allowableMovementBeforePressure - In the implementation block
@property (assign,nonatomic) double requiredForce;                                //@synthesize requiredForce=_requiredForce - In the implementation block
@property (nonatomic,readonly) CGPoint downLocation; 
-(double)allowableMovementBeforePressure;
-(void)setRequiredForce:(double)arg1 ;
-(double)requiredForce;
-(CGPoint)downLocation;
-(void)setAllowableMovementBeforePressure:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)touch;
@end

