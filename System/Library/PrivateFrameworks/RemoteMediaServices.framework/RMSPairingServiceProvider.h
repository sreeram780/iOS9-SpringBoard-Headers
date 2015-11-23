/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RMSBonjourServiceProvider.h>

@class NSMutableDictionary, NSArray;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {

	NSMutableDictionary* _unmonitoredServices;
	NSArray* _pairedNetworkNames;

}

@property (nonatomic,retain) NSArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
-(id)searchType;
@end

