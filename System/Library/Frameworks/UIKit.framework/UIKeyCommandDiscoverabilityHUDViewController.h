/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {

	NSArray* _keyCommands;
	GSKeyboardRef _keyboard;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDView * view; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end

