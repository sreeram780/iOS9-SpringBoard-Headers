/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDObserverQueryServer : HDQueryServer {

	BOOL _deliverOnUnlock;
	NSNumber* _anchor;

}

@property (nonatomic,readonly) BOOL deliverOnUnlock;              //@synthesize deliverOnUnlock=_deliverOnUnlock - In the implementation block
@property (nonatomic,readonly) NSNumber * anchor;                 //@synthesize anchor=_anchor - In the implementation block
-(NSNumber *)anchor;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(void)_queue_stop;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)deliverOnUnlock;
@end

