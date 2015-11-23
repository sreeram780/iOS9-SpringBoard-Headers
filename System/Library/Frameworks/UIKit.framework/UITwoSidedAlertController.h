/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface UITwoSidedAlertController : NSObject <UIAlertViewDelegate> {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)dismiss;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)backAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
@end

