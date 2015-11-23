/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {

	double originalMaximumIntervalBetweenSuccessiveTaps;
	id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}

@property (assign,nonatomic,__weak) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; 
-(void)setTapDelayDelegate:(id<MKVariableDelayTapRecognizerDelegate>)arg1 ;
-(id<MKVariableDelayTapRecognizerDelegate>)tapDelayDelegate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end

