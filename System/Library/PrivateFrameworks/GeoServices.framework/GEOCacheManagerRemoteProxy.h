/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCacheManaging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(long long)invalidationStateForComponent:(id)arg1 ;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)invalidationStateForPlace:(id)arg1 ;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_refreshMapItems:(id)arg1 updatedCoordinates:(id)arg2 xpcMessageName:(id)arg3 traits:(id)arg4 handler:(/*^block*/id)arg5 ;
@end
