/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RTNextPredictedLocationsOfInterestCacheDelegate, OS_dispatch_queue;
@class NSObject, NSArray;

@interface RTNextPredictedLocationsOfInterestCache : NSObject {

	BOOL _enabled;
	id<RTNextPredictedLocationsOfInterestCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _nextPredictedLocationsOfInterest;

}

@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                       //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
+(id)cachePath;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)enabled;
-(void)setDelegate:(id<RTNextPredictedLocationsOfInterestCacheDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RTNextPredictedLocationsOfInterestCacheDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)clear;
-(void)purge;
-(NSArray *)nextPredictedLocationsOfInterest;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(id)getCachedNextPredictedLocationsOfInterest;
-(void)onDataProtectionNotification:(id)arg1 ;
-(void)cacheNextPredictedLocationsOfInterest:(id)arg1 ;
-(void)handleUnlockedSinceBoot:(BOOL)arg1 ;
-(void)onStarkNotification:(id)arg1 ;
-(void)handleStarkTrustedConnectionEstablished:(BOOL)arg1 ;
@end

