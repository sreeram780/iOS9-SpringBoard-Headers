/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/_NSXPCDistantObject.h>

@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject {

	/*^block*/id _errorBlock;

}

@property (copy) id errorBlock;              //@synthesize errorBlock=_errorBlock - In the implementation block
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 error:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end
