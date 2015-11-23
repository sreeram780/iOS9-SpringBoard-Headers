/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

@interface CMKPhysicalCaptureRecognizer : UIGestureRecognizer {

	BOOL _suspended;
	long long _activeButton;
	NSArray* _desiredButtons;
	long long _physicalButtonType;

}

@property (assign,nonatomic) long long activeButton;                         //@synthesize activeButton=_activeButton - In the implementation block
@property (nonatomic,copy) NSArray * desiredButtons;                         //@synthesize desiredButtons=_desiredButtons - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) long long physicalButtonType;                   //@synthesize physicalButtonType=_physicalButtonType - In the implementation block
-(BOOL)isSuspended;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(long long)physicalButtonType;
-(long long)activeButton;
-(void)setActiveButton:(long long)arg1 ;
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)_updateApplicationButtonStatus;
-(NSArray *)desiredButtons;
-(long long)_captureButtonForPhysicalButtonType:(long long)arg1 ;
@end

