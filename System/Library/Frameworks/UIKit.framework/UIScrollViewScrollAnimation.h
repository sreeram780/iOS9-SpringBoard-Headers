/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;

}
-(void)dealloc;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
-(void)setProgress:(float)arg1 ;
@end

