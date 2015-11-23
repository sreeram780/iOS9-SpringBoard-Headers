/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEONavdServerProxy, NSMutableArray, NSLock;

@interface GEONavdManager : NSObject {

	GEONavdServerProxy* _proxy;
	NSMutableArray* _openers;
	NSLock* _openersLock;

}
+(void)setProxyClass:(Class)arg1 ;
+(id)navdManager;
+(id)navdManagerClientIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)startMonitoringSuggestionsForClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)forceWork;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 ;
-(void)stopMonitoringSuggestionsForClient:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)forceHome;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)forceCacheRefresh;
-(void)forceNone;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
@end

