/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CalNWideQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
@end

