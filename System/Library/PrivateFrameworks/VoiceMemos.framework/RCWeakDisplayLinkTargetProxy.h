/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {

	RCWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
-(void)dealloc;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

