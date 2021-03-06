/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject {

	NSMapTable* _pendingBatchGeocodes;
	NSLock* _pendingGeocodesLock;

}
+(id)sharedGeocodeRequester;
-(void)dealloc;
-(id)init;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

