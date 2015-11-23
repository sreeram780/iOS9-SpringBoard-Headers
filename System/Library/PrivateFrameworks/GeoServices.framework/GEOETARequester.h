/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable, NSLock;

@interface GEOETARequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(BOOL)arg3 connectionProperties:(const SCD_Struct_GE131*)arg4 willSendRequest:(/*^block*/id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE131*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
@end

