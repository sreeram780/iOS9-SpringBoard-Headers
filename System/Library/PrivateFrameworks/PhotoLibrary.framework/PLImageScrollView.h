/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIScrollView.h>

@interface PLImageScrollView : UIScrollView {

	BOOL _adjustZoomScaleAfterRotation;

}

@property (assign,nonatomic) BOOL adjustZoomScaleAfterRotation;              //@synthesize adjustZoomScaleAfterRotation=_adjustZoomScaleAfterRotation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_centerContentIfNecessary;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)setAdjustZoomScaleAfterRotation:(BOOL)arg1 ;
-(BOOL)adjustZoomScaleAfterRotation;
@end

