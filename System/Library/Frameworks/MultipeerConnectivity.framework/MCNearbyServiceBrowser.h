/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol MCNearbyServiceBrowserDelegate, OS_dispatch_queue;
@class MCPeerID, NSString, NSMutableDictionary, NSNetServiceBrowser, NSObject;

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	id<MCNearbyServiceBrowserDelegate> _delegate;
	BOOL _isBrowsing;
	BOOL _wasBrowsing;
	MCPeerID* _myPeerID;
	NSString* _serviceType;
	NSString* _formattedServiceType;
	NSMutableDictionary* _netServices;
	NSMutableDictionary* _peers;
	NSNetServiceBrowser* _networkBrowser;
	long long _outgoingInviteID;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _invites;

}

@property (assign,nonatomic,__weak) id<MCNearbyServiceBrowserDelegate> delegate; 
@property (nonatomic,readonly) MCPeerID * myPeerID;                                           //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * netServices;                               //@synthesize netServices=_netServices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;                                     //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * networkBrowser;                            //@synthesize networkBrowser=_networkBrowser - In the implementation block
@property (assign,nonatomic) long long outgoingInviteID;                                      //@synthesize outgoingInviteID=_outgoingInviteID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                          //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invites;                                   //@synthesize invites=_invites - In the implementation block
@property (nonatomic,copy) NSString * formattedServiceType;                                   //@synthesize formattedServiceType=_formattedServiceType - In the implementation block
@property (assign,nonatomic) BOOL isBrowsing;                                                 //@synthesize isBrowsing=_isBrowsing - In the implementation block
@property (assign,nonatomic) BOOL wasBrowsing;                                                //@synthesize wasBrowsing=_wasBrowsing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(BOOL)isBrowsing;
-(MCPeerID *)myPeerID;
-(id)initWithPeer:(id)arg1 serviceType:(id)arg2 ;
-(void)startBrowsingForPeers;
-(void)stopBrowsingForPeers;
-(void)invitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4 ;
-(NSString *)formattedServiceType;
-(void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncCloseConnectionForPeer:(id)arg1 ;
-(void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3 ;
-(void)syncReceivedData:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncAttachConnection:(id)arg1 toPeer:(id)arg2 ;
-(void)setFormattedServiceType:(NSString *)arg1 ;
-(long long)outgoingInviteID;
-(void)setOutgoingInviteID:(long long)arg1 ;
-(void)setInvites:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)netServices;
-(NSNetServiceBrowser *)networkBrowser;
-(void)setNetworkBrowser:(NSNetServiceBrowser *)arg1 ;
-(void)setIsBrowsing:(BOOL)arg1 ;
-(void)syncStartBrowsingForPeers;
-(void)syncStopBrowsingForPeers;
-(void)setWasBrowsing:(BOOL)arg1 ;
-(BOOL)wasBrowsing;
-(long long)syncNextOutgoingInviteID;
-(void)syncHandleInviteTimeout:(id)arg1 forPeer:(id)arg2 ;
-(void)syncInitiateConnectionToPeer:(id)arg1 ;
-(void)syncHandleInviteResponse:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncInvitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4 ;
-(id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)arg1 ;
-(void)setNetServices:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<MCNearbyServiceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<MCNearbyServiceBrowserDelegate>)delegate;
-(NSMutableDictionary *)invites;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPeers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)peers;
@end

