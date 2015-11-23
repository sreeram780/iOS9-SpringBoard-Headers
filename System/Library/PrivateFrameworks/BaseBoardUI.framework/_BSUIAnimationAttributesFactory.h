/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {

	_UIViewAnimationAttributes* _attributes;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(double)delay;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithAttributes:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end

