/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSLock, NSError, NSString;

@interface GKUpdateGroup : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _notifiers;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSLock* _lock;
	NSError* _error;
	NSString* _name;

}

@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long updateCount; 
@property (retain) NSLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;                //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * notifiers;                              //@synthesize notifiers=_notifiers - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
+(id)updateGroupWithName:(id)arg1 ;
+(id)updateGroupForTargetQueue:(id)arg1 ;
+(id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2 ;
+(id)updateGroup;
-(long long)updateCount;
-(NSError *)error;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSLock *)lock;
-(void)perform:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSMutableArray *)notifiers;
-(void)joinAndApplyUpdates;
-(void)setNotifiers:(NSMutableArray *)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)applyUpdates;
-(void)join:(/*^block*/id)arg1 ;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelUpdates;
-(void)wait;
-(void)setError:(NSError *)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setLock:(NSLock *)arg1 ;
@end

