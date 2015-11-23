/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject {

	NSString* _animationKey;
	OFPropertyAnimationLayer* _layer;
	CAPropertyAnimation* _propertyAnimation;
	NSTimer* _timer;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
+(id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)interpolateValueForKey:(id)arg1 animation:(/*^block*/id)arg2 progress:(double)arg3 ;
-(void)handleTimer:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)_cleanup;
-(CGPoint)animatedPoint;
-(void)setDestinationAnimatedPoint:(CGPoint)arg1 ;
-(double)animatedFloat;
-(void)setDestinationAnimatedFloat:(double)arg1 ;
@end

