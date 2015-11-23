/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCLowDiskDelegate.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, NSString;

@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate> {

	BRCAccountSession* _session;
	BOOL _isClosed;
	br_pacer_tRef _purgePacer;
	CacheDeleteTokenRef _purgeRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)urgencyForCacheDeleteUrgency:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)close;
-(id)initWithAccountSession:(id)arg1 ;
-(long long)computePurgableSpaceWithUrgency:(int)arg1 ;
-(long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(long long)periodicReclaimSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(id)accessTimestampForDocument:(id)arg1 ;
-(void)requestPurgeSpace;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2 ;
-(BOOL)documentWasCreated:(id)arg1 ;
-(BOOL)documentUpdateEvictability:(id)arg1 ;
-(BOOL)documentWasDeleted:(id)arg1 ;
-(double)accessTimeDeltaForUrgency:(int)arg1 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2 ;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2 ;
-(BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1 ;
-(void)didAccessDocument:(id)arg1 ;
-(BOOL)documentWasAccessedRecently:(id)arg1 ;
-(void)_requestPurgeSpace;
-(void)_enumerateItemsForEvictSyncWithBlock:(/*^block*/id)arg1 withUrgency:(int)arg2 ;
@end

