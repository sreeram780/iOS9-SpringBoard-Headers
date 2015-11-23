/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface UISoftwareDimmingWindow : UIWindow {

	float _overlayLevel;

}

@property (assign,nonatomic) float overlayLevel;              //@synthesize overlayLevel=_overlayLevel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_ignoresHitTest;
-(void)updateOverlayColor;
-(void)setOverlayLevel:(float)arg1 ;
-(float)overlayLevel;
@end

