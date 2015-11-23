/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMediaTimingFunction, CADisplayLink;

@interface _UIPreviewPresentationAnimator : NSObject {

	double _duration;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _startMediaTime;
	/*^block*/id _advanceBlock;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (assign,nonatomic) double startMediaTime;                                    //@synthesize startMediaTime=_startMediaTime - In the implementation block
@property (nonatomic,copy) id advanceBlock;                                            //@synthesize advanceBlock=_advanceBlock - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                              //@synthesize displayLink=_displayLink - In the implementation block
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)stopAnimation;
-(void)setStartMediaTime:(double)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setAdvanceBlock:(id)arg1 ;
-(void)_advanceFromDisplayLink:(id)arg1 ;
-(double)startMediaTime;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(id)advanceBlock;
-(id)initWithDuration:(double)arg1 advanceBlock:(/*^block*/id)arg2 ;
@end

