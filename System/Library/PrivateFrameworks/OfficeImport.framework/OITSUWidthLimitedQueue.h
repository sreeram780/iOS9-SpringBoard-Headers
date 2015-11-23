/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUWidthLimitedQueue : NSObject {

	int mReaderCount;
	int mLimit;
	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	int mSpinLock;

}
-(void)dealloc;
-(id)init;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
@end

