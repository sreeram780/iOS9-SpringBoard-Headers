/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMAnimationDelegate : NSObject {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                   //@synthesize start=_start - In the implementation block
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)start;
-(void)setStart:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end
