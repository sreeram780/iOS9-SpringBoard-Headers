/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProxy.h>

@class Protocol, NSObject;

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol * protocol; 
@property (retain,readonly) NSObject * target; 
+(id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(id)_imMethodSignatureForSelector:(SEL)arg1 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(const char*)_localClassNameForClass;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSObject *)target;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(Protocol *)protocol;
@end

