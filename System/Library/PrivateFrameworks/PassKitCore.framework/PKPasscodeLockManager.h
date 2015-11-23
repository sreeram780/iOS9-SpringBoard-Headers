/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class MCProfileConnection, NSObject, NSHashTable, NSString;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {

	MCProfileConnection* _profileConnection;
	BOOL _isPasscodeSet;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL isPasscodeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isPasscodeSet;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

