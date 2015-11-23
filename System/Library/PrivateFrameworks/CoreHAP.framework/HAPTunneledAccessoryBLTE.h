/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>

@protocol OS_dispatch_queue, HAPKeyStore, OS_dispatch_source;
@class NSNumber, NSObject, NSOperationQueue, HAPService, HAPCharacteristic, NSData, NSMutableData, NSString;

@interface HAPTunneledAccessoryBLTE : HAPAccessory <HAPAccessoryServerInternalDelegate> {

	PairingSessionPrivateRef _pairingSession;
	BOOL _performingPairVerify;
	BOOL _pairVerifyComplete;
	NSNumber* _stateNumber;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	id<HAPKeyStore> _keyStore;
	HAPService* _tunneledBTLEAccessoryService;
	HAPService* _pairingService;
	HAPCharacteristic* _pairVerifyCharacteristic;
	HAPCharacteristic* _pairingsCharacteristic;
	HAPCharacteristic* _advertisingCharacteristic;
	NSData* _sessionReadKey;
	NSMutableData* _readNonce;
	NSData* _sessionWriteKey;
	NSMutableData* _writeNonce;
	NSNumber* _sessionLifetimeTimeout;
	NSObject*<OS_dispatch_source> _sessionLifetimeTimer;

}

@property (nonatomic,copy) NSNumber * stateNumber;                                                 //@synthesize stateNumber=_stateNumber - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPKeyStore> keyStore;                                      //@synthesize keyStore=_keyStore - In the implementation block
@property (assign,nonatomic,__weak) HAPService * tunneledBTLEAccessoryService;                     //@synthesize tunneledBTLEAccessoryService=_tunneledBTLEAccessoryService - In the implementation block
@property (assign,nonatomic,__weak) HAPService * pairingService;                                   //@synthesize pairingService=_pairingService - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairVerifyCharacteristic;                  //@synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairingsCharacteristic;                    //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * advertisingCharacteristic;                 //@synthesize advertisingCharacteristic=_advertisingCharacteristic - In the implementation block
@property (assign,getter=isPerformingPairVerify,nonatomic) BOOL performingPairVerify;              //@synthesize performingPairVerify=_performingPairVerify - In the implementation block
@property (assign,getter=isPairVerifyComplete,nonatomic) BOOL pairVerifyComplete;                  //@synthesize pairVerifyComplete=_pairVerifyComplete - In the implementation block
@property (nonatomic,retain) NSData * sessionReadKey;                                              //@synthesize sessionReadKey=_sessionReadKey - In the implementation block
@property (nonatomic,retain) NSMutableData * readNonce;                                            //@synthesize readNonce=_readNonce - In the implementation block
@property (nonatomic,retain) NSData * sessionWriteKey;                                             //@synthesize sessionWriteKey=_sessionWriteKey - In the implementation block
@property (nonatomic,retain) NSMutableData * writeNonce;                                           //@synthesize writeNonce=_writeNonce - In the implementation block
@property (nonatomic,retain) NSNumber * sessionLifetimeTimeout;                                    //@synthesize sessionLifetimeTimeout=_sessionLifetimeTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sessionLifetimeTimer;                   //@synthesize sessionLifetimeTimer=_sessionLifetimeTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(id)shortDescription;
-(NSOperationQueue *)operationQueue;
-(id)uniqueIdentifier;
-(id<HAPKeyStore>)keyStore;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4 ;
-(int)_pairVerifyStart;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(void)_suspendAllOperations;
-(void)_resumeAllOperations;
-(void)_cancelAllQueuedOperationsWithError:(id)arg1 ;
-(BOOL)_parseServices;
-(void)_sanitizeAllTunneledCharacteristics;
-(void)_registerForTunnelCharacteristicNotifications;
-(BOOL)__isAdvertising;
-(HAPCharacteristic *)advertisingCharacteristic;
-(void)_tearDownSessionWithError:(id)arg1 ;
-(void)_cancelSessionLifetimeTimer;
-(void)_readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateSessionLifetimeTimer;
-(BOOL)_handleCharacteristicReadResponse:(id)arg1 error:(id*)arg2 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2 ;
-(HAPCharacteristic *)pairingsCharacteristic;
-(void)_writeValueWithResponse:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPerformingPairVerify:(BOOL)arg1 ;
-(void)_handlePairVerifyWriteCompletionWithError:(id)arg1 ;
-(int)_initializePairingSession;
-(HAPCharacteristic *)pairVerifyCharacteristic;
-(void)_handlePairVerifyReadCompletionWithError:(id)arg1 ;
-(void)_handleSuccessfulPairVerifyCompletion;
-(void)setSessionReadKey:(NSData *)arg1 ;
-(void)setReadNonce:(NSMutableData *)arg1 ;
-(void)setSessionWriteKey:(NSData *)arg1 ;
-(void)setWriteNonce:(NSMutableData *)arg1 ;
-(void)setPairVerifyComplete:(BOOL)arg1 ;
-(NSData *)sessionWriteKey;
-(NSMutableData *)writeNonce;
-(NSMutableData *)readNonce;
-(NSData *)sessionReadKey;
-(NSObject*<OS_dispatch_source>)sessionLifetimeTimer;
-(void)setSessionLifetimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleSessionLifetimeTimeout;
-(NSNumber *)sessionLifetimeTimeout;
-(BOOL)isPairVerifyComplete;
-(BOOL)isPerformingPairVerify;
-(BOOL)_establishSecureSessionWithError:(id*)arg1 ;
-(BOOL)_parseTunneledBTLEAccessoryService:(id)arg1 ;
-(BOOL)_parsePairingService:(id)arg1 ;
-(void)setAdvertisingCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setSessionLifetimeTimeout:(NSNumber *)arg1 ;
-(void)setPairVerifyCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPairingsCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)_updateOnStateNumberChange;
-(void)_readUpdatedCharacteristics:(id)arg1 queue:(id)arg2 ;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(HAPService *)tunneledBTLEAccessoryService;
-(void)setTunneledBTLEAccessoryService:(HAPService *)arg1 ;
-(HAPService *)pairingService;
-(void)setPairingService:(HAPService *)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPaired;
-(void)setReachable:(BOOL)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removePairingForCurrentControllerWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePairingWithIdentifier:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enqueueOperation:(id)arg1 ;
@end

