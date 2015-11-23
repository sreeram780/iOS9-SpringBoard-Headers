/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLWeakTimerTarget : NSObject {

	id _target;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(id)init;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

