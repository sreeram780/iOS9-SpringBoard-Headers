/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSAccountControllerDelegate.h>
#import <IDS/IDSConnectionDelegatePrivate.h>
#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_xpc_object;
@class IDSAccountController, NSMutableDictionary, NSSet, NSString, NSMapTable, NSMutableSet, NSArray, NSObject, IDSAccount;

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol> {

	IDSAccountController* _accountController;
	NSMutableDictionary* _uniqueIDToConnection;
	NSSet* _commands;
	NSString* _rerouteService;
	NSMapTable* _delegateToInfo;
	id _delegateContext;
	NSMutableDictionary* _protobufSelectors;
	NSMutableSet* _lastIsActiveSet;
	NSArray* _subServices;
	BOOL _pretendingToBeFull;
	BOOL _everHadDelegate;
	BOOL _manuallyAckMessages;
	unsigned _listenerCaps;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,copy,readonly) NSSet * accounts; 
@property (nonatomic,retain,readonly) IDSAccount * iCloudAccount; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (assign,getter=isPretendingToBeFull,nonatomic) BOOL pretendingToBeFull; 
@property (assign,nonatomic) BOOL manuallyAckMessages;                                         //@synthesize manuallyAckMessages=_manuallyAckMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(NSArray *)devices;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(IDSAccount *)iCloudAccount;
-(BOOL)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)daemonConnected;
-(void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)connection:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(void)connection:(id)arg1 devicesChanged:(id)arg2 ;
-(void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 ;
-(void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6 ;
-(void)connection:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4 ;
-(void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5 ;
-(void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8 ;
-(id)initWithService:(id)arg1 serviceDomain:(id)arg2 delegateContext:(id)arg3 ;
-(id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3 ;
-(void)setManuallyAckMessages:(BOOL)arg1 ;
-(void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(SEL)protobufActionForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(BOOL)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8 ;
-(void)sendAckForMessageWithContext:(id)arg1 ;
-(BOOL)cancelIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3 ;
-(id)deviceForFromID:(id)arg1 ;
-(id)devicesForBTUUID:(id)arg1 ;
-(id)uriForFromID:(id)arg1 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(void)startOTRTest:(long long)arg1 ;
-(void)setPretendingToBeFull:(BOOL)arg1 ;
-(BOOL)isPretendingToBeFull;
-(void)updateSubServices:(id)arg1 ;
-(void)_processAccountSet:(id)arg1 ;
-(void)_setupIDSWakeListenerForService:(id)arg1 ;
-(void)_logConnectionMap;
-(void)_tearDownConnectionForUniqueID:(id)arg1 ;
-(void)_setupNewConnectionForAccount:(id)arg1 ;
-(void)_callIsActiveChanged;
-(void)_handlePretendingToBeFullWithIdentifier:(id*)arg1 ;
-(id)_sendingAccountForAccount:(id)arg1 ;
-(BOOL)manuallyAckMessages;
-(NSString *)serviceDomain;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)accountController:(id)arg1 accountEnabled:(id)arg2 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSSet *)accounts;
@end

