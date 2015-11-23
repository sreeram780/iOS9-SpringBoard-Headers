/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface LSDatabaseBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _dbQueue;

}
-(void)setSeedingComplete;
-(id)initWithIOQueue:(id)arg1 registrationQueue:(id)arg2 ;
-(void)createAndSeedLocalDatabase:(BOOL*)arg1 ;
-(void)dealloc;
@end

