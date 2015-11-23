/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSLock, NSString;

@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy> {

	NSObject*<OS_dispatch_queue> _requestQ;
	NSMapTable* _requestToUUID;
	NSLock* _requestToUUIDLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)cancelRequest:(id)arg1 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(/*^block*/id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(/*^block*/id)arg5 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
@end

