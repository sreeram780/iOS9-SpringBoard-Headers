/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventStore.h>
#import <libobjc.A.dylib/RTEventStore.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface RTEventRouterContext : RTEventStore <RTEventStore, NSSecureCoding> {

	NSMutableDictionary* _contextMap;
	Class _eventStoreClass;

}

@property (nonatomic,retain) NSMutableDictionary * contextMap;              //@synthesize contextMap=_contextMap - In the implementation block
@property (nonatomic,retain) Class eventStoreClass;                         //@synthesize eventStoreClass=_eventStoreClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)logRecommendedAppsHistogramMetric:(/*^block*/id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(id)initWithApplicableEventClasses:(id)arg1 ;
-(id)_createEventStore;
-(void)clearAllEvents;
-(unsigned long long)countOfEvents;
-(void)removeEvent:(id)arg1 ;
-(void)processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictionForEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeEvents:(id)arg1 ;
-(id)initWithApplicableEventClasses:(id)arg1 eventStoreType:(long long)arg2 ;
-(void)addEvent:(id)arg1 context:(id)arg2 ;
-(void)addAppLaunchEvent:(id)arg1 context:(id)arg2 ;
-(NSMutableDictionary *)contextMap;
-(BOOL)containsContext:(id)arg1 ;
-(Class)eventStoreClass;
-(void)removeEvent:(id)arg1 context:(id)arg2 ;
-(unsigned long long)countOfEventsForContext:(id)arg1 ;
-(void)_processEventsForContext:(id)arg1 globalAppLaunchCountedSet:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)storeForContext:(id)arg1 ;
-(void)clearAllEventsForContext:(id)arg1 ;
-(unsigned long long)countOfContexts;
-(void)addEvents:(id)arg1 context:(id)arg2 ;
-(void)removeEvents:(id)arg1 context:(id)arg2 ;
-(void)setContextMap:(NSMutableDictionary *)arg1 ;
-(void)setEventStoreClass:(Class)arg1 ;
@end
