/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/HAPRelayAccessoryDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSString, HMDHome, NSUUID, NSObject, HMMessageDispatcher, HMAccessoryCategory, HMDRoom, NSMutableSet, HMDAccessoryManager, NSData, HMDApplicationRegistry, NSArray;

@interface HMDAccessory : NSObject <NSSecureCoding, HMMessageReceiver, HAPRelayAccessoryDelegate> {

	NSMutableArray* _transportInformationInstances;
	BOOL _reachable;
	BOOL _relayEnabled;
	BOOL _primary;
	BOOL _supportsRelay;
	BOOL _paired;
	BOOL _blocked;
	BOOL _unblockPending;
	BOOL _remoteAccessEnabled;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _firmwareVersion;
	NSString* _relayIdentifier;
	unsigned long long _currentRelayAccessoryState;
	HMDHome* _home;
	NSString* _name;
	NSUUID* _uuid;
	NSString* _uniqueIdentifier;
	NSString* _identifier;
	NSString* _configurationAppIdentifier;
	NSString* _providedName;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_source> _pairingRetryTimer;
	NSMutableArray* _discoveredServices;
	HMMessageDispatcher* _msgDispatcher;
	HMAccessoryCategory* _category;
	HMDRoom* _room;
	HMDAccessory* _bridge;
	NSMutableSet* _identifiersForBridgedAccessories;
	HMDAccessoryManager* _accessoryManager;
	NSData* _publicKey;
	NSString* _pairingUsername;
	HMDApplicationRegistry* _appRegistry;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	unsigned long long _activationAttempts;
	unsigned long long _pairingAttempts;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (assign,nonatomic,__weak) HMDHome * home;                                              //@synthesize home=_home - In the implementation block
@property (getter=getName,nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * relayIdentifier;                                         //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;                                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * firmwareVersion;                                  //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                      //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                                 //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                                        //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                  //@synthesize reachable=_reachable - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                      //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (nonatomic,retain) NSString * configurationAppIdentifier;                              //@synthesize configurationAppIdentifier=_configurationAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * tunneledHAPAccessories; 
@property (nonatomic,retain) NSString * providedName;                                            //@synthesize providedName=_providedName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> pairingRetryTimer;                    //@synthesize pairingRetryTimer=_pairingRetryTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredServices;                                //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                                //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HMDRoom * room;                                                     //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HMDAccessory * bridge;                                       //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersForBridgedAccessories;                    //@synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories - In the implementation block
@property (assign,nonatomic,__weak) HMDAccessoryManager * accessoryManager;                      //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,nonatomic) BOOL unblockPending;                                                //@synthesize unblockPending=_unblockPending - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                                                 //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSString * pairingUsername;                                         //@synthesize pairingUsername=_pairingUsername - In the implementation block
@property (nonatomic,retain) HMDApplicationRegistry * appRegistry;                               //@synthesize appRegistry=_appRegistry - In the implementation block
@property (assign,getter=isRelayEnabled,nonatomic) BOOL relayEnabled;                            //@synthesize relayEnabled=_relayEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long currentRelayAccessoryState;                    //@synthesize currentRelayAccessoryState=_currentRelayAccessoryState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,getter=isRemoteAccessEnabled,nonatomic) BOOL remoteAccessEnabled;              //@synthesize remoteAccessEnabled=_remoteAccessEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long activationAttempts;                              //@synthesize activationAttempts=_activationAttempts - In the implementation block
@property (assign,nonatomic) unsigned long long pairingAttempts;                                 //@synthesize pairingAttempts=_pairingAttempts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)assistantUniqueIdentifier;
-(NSString *)contextID;
-(BOOL)isBlocked;
-(void)setPrimary:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)publicKey;
-(NSString *)manufacturer;
-(void)setBlocked:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)firmwareVersion;
-(NSMutableArray *)discoveredServices;
-(void)setDiscoveredServices:(NSMutableArray *)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setAccessoryManager:(HMDAccessoryManager *)arg1 ;
-(HMDAccessoryManager *)accessoryManager;
-(HMDApplicationRegistry *)appRegistry;
-(id)characteristicsPassingTest:(/*^block*/id)arg1 ;
-(void)enableNotification:(BOOL)arg1 unconditionallyDeregister:(BOOL)arg2 ignoreDeviceUnlockRequirement:(BOOL)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5 ;
-(NSString *)pairingUsername;
-(HMDRoom *)room;
-(void)setRoom:(HMDRoom *)arg1 ;
-(void)registerForMessagesWithNewUUID:(id)arg1 ;
-(void)setPairingUsername:(NSString *)arg1 ;
-(void)savePublicKeyToKeychain;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(HMDAccessory *)bridge;
-(NSMutableSet *)identifiersForBridgedAccessories;
-(void)setBridge:(HMDAccessory *)arg1 ;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryManager:(id)arg3 ;
-(id)getConfiguredName;
-(BOOL)supportsRelay;
-(void)_handleRename:(id)arg1 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(void)updateRoom:(id)arg1 ;
-(void)setConfigurationAppIdentifier:(NSString *)arg1 ;
-(id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2 ;
-(unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1 ;
-(BOOL)isPrimary;
-(id)getPrimaryHAPAccessories;
-(void)setPairingUsername:(id)arg1 publicKey:(id)arg2 ;
-(void)remoteAccessEnabled:(BOOL)arg1 ;
-(id)matchingHAPAccessoryWithLinkType:(long long)arg1 ;
-(BOOL)unblockPending;
-(void)setUnblockPending:(BOOL)arg1 ;
-(void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleMultipleCharacteristicsUpdated:(id)arg1 filterUnmodifiedCharacteristics:(BOOL)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasBTLELink;
-(id)findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findService:(id)arg1 ;
-(void)_remoteAccessEnabled:(BOOL)arg1 ;
-(BOOL)isPaired;
-(NSString *)configurationAppIdentifier;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(id)serverIdentifier;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)_isPaired;
-(void)addTransportInformationInstances:(id)arg1 ;
-(BOOL)_supportsRelay;
-(id)_relayIdentifier;
-(void)_setRelayEnabled:(BOOL)arg1 ;
-(id)relayAccessory;
-(void)setRelayEnabled:(BOOL)arg1 ;
-(unsigned long long)_currentRelayAccessoryState;
-(unsigned long long)activationAttempts;
-(void)startRelayActivationWithActivationClient:(id)arg1 ;
-(void)setActivationAttempts:(unsigned long long)arg1 ;
-(void)_setCurrentRelayAccessoryState:(unsigned long long)arg1 ;
-(unsigned long long)pairingAttempts;
-(void)startRelayPairingWithPairingClient:(id)arg1 ;
-(void)setPairingAttempts:(unsigned long long)arg1 ;
-(id)descriptionNonBlocking;
-(NSString *)providedName;
-(void)_updateName:(id)arg1 ;
-(void)setProvidedName:(NSString *)arg1 ;
-(void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(id)transportInformationInstances;
-(void)removeTransportInformationInstance:(id)arg1 ;
-(void)_addHAPAccessory:(id)arg1 ;
-(id)matchingTransportInformation:(id)arg1 ;
-(void)addTransportInformationInstance:(id)arg1 ;
-(void)_updateReachability;
-(void)_setSupportsRelay:(BOOL)arg1 ;
-(void)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2 ;
-(void)_setModel:(id)arg1 ;
-(void)_setManufacturer:(id)arg1 ;
-(void)_setFirmwareVersion:(id)arg1 ;
-(void)_setPaired:(BOOL)arg1 ;
-(void)blockWithError:(id)arg1 ;
-(void)configureWithAccessory:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_populateServices:(id*)arg1 hapAccessory:(id)arg2 ;
-(void)_enableNotification:(BOOL)arg1 matchingHAPAccessory:(id)arg2 unconditionallyDeregister:(BOOL)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4 clientIdentifier:(id)arg5 forCharacteristics:(id)arg6 ;
-(void)removeAllTransportInformationInstances;
-(void)unconfigure;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(BOOL)isRemoteAccessEnabled;
-(void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_sendBlockedNotification:(BOOL)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)matchesHAPAccessory:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 messageDispatcher:(id)arg2 ;
-(BOOL)_isReachable;
-(void)_handleCharacteristicWrite:(id)arg1 ;
-(void)_handleCharacteristicRead:(id)arg1 ;
-(void)_handleCharacteristicEnableNotification:(id)arg1 ;
-(void)_handleUpdateRoom:(id)arg1 ;
-(void)_handleRenameService:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateAuthorizationData:(id)arg1 ;
-(void)updateAccessoryBrowsingState:(id)arg1 ;
-(id)hapCharacteristicWriteTuples:(id)arg1 hapAccessory:(id)arg2 hmdResponseTuples:(id*)arg3 mapping:(id*)arg4 ;
-(id)hmdCharacteristicResponses:(id)arg1 mapping:(id)arg2 overallError:(id)arg3 ;
-(void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 identifier:(id)arg4 forCharacteristic:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 identifier:(id)arg5 queue:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1 ;
-(void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3 ;
-(void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 messageIdentifier:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)hmdCharacteristicFromHapCharacteristic:(id)arg1 ;
-(void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setReachable:(BOOL)arg1 ;
-(void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2 ;
-(void)setRemoteAccessEnabled:(BOOL)arg1 ;
-(void)updateName:(id)arg1 ;
-(void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1 ;
-(id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2 ;
-(void)_handleMultipleCharacteristicsUpdated:(id)arg1 filterUnmodifiedCharacteristics:(BOOL)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateRelayEnabled:(BOOL)arg1 notifyRelayManager:(BOOL)arg2 ;
-(void)_setRelayIdentifier:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2 ;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2 ;
-(void)accessoryDidBecomeReachable:(id)arg1 ;
-(void)accessoryDidBecomeUnreachable:(id)arg1 ;
-(BOOL)isRelayEnabled;
-(unsigned long long)currentRelayAccessoryState;
-(void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)addHAPAccessory:(id)arg1 ;
-(NSArray *)tunneledHAPAccessories;
-(void)updateCategory:(id)arg1 ;
-(void)configureWithAccessory:(id)arg1 ;
-(void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)mergeTransportInformationInstances:(id)arg1 ;
-(BOOL)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 ;
-(id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1 ;
-(BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2 ;
-(void)registerForIdentifyWithMessageDispatcher:(id)arg1 ;
-(void)addBridgedAccessory:(id)arg1 ;
-(void)removeBridgedAccessory:(id)arg1 ;
-(void)didEncounterError:(id)arg1 ;
-(void)updateReachability;
-(void)setReachability:(BOOL)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(void)enumerateCharacteristicsUsingBlock:(/*^block*/id)arg1 ;
-(id)dumpDescription;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)pairingRetryTimer;
-(void)setPairingRetryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIdentifiersForBridgedAccessories:(NSMutableSet *)arg1 ;
-(id)getName;
-(BOOL)isReachable;
-(NSArray *)services;
@end

