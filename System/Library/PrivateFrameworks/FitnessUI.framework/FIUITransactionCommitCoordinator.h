/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface FIUITransactionCommitCoordinator : NSObject {

	NSMutableArray* _commitHandlers;

}
+(BOOL)addImplicitTransactionCommitHandler:(/*^block*/id)arg1 ;
+(id)_sharedInstance;
-(id)init;
-(BOOL)_addImplicitTransactionCommitHandler:(/*^block*/id)arg1 ;
-(void)_registerCATransactionCommitHandler;
@end

