/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CMPocketStateQueueBlockPair : NSObject {

	NSObject*<OS_dispatch_queue> fQueryQueue;
	/*^block*/id fQueryBlock;

}
-(void)dispatchWithState:(long long)arg1 andError:(id)arg2 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

