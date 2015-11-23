/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYSyncEngineResponder.h>

@protocol SYServiceDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSDictionary, SYSession, NSObject, _SYMultiSuspendableQueue, SYPersistentStore, SYSyncEngine, SYVectorClock, NSMutableSet;

@interface SYService : NSObject <SYSyncEngineResponder> {

	NSString* _serviceName;
	long long _defaultPriority;
	NSDictionary* _defaultOptions;
	NSDictionary* _customIDSOptions;
	SYSession* _currentSession;
	id<SYServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	_SYMultiSuspendableQueue* _sessionQueue;
	NSObject*<OS_dispatch_source> _processSignalSource;
	SYPersistentStore* _persistentStore;
	SYSyncEngine* _syncEngine;
	SYVectorClock* _vectorClock;
	NSMutableSet* _rejectingV1SyncSessions;
	int _flagLock;
	struct {
		unsigned isMaster : 1;
		unsigned hasChanges : 1;
		unsigned needsReset : 1;
		unsigned hasPairingStore : 1;
		unsigned isRunning : 1;
		unsigned registeredForPairingNotifications : 1;
		unsigned remoteProtocolVersion : 3;
		unsigned remoteDeviceIsWatch : 1;
		unsigned isObservingRemoteDeviceProperties : 1;
	}  _flags;
	double _defaultMessageTimeout;
	double _sessionStalenessInterval;
	long long _engineType;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions; 
@property (nonatomic,readonly) BOOL hasPairingStore; 
@property (nonatomic,readonly) NSString * name;                                  //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) long long priority;                                 //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (nonatomic,readonly) BOOL isMasterStore; 
@property (assign,nonatomic) double defaultMessageTimeout;                       //@synthesize defaultMessageTimeout=_defaultMessageTimeout - In the implementation block
@property (assign,nonatomic) double sessionStalenessInterval;                    //@synthesize sessionStalenessInterval=_sessionStalenessInterval - In the implementation block
@property (nonatomic,readonly) SYSession * currentSession; 
@property (nonatomic,retain) NSDictionary * options;                             //@synthesize defaultOptions=_defaultOptions - In the implementation block
@property (assign,nonatomic) long long engineType;                               //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) SYSyncEngine * syncEngine;                        //@synthesize syncEngine=_syncEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SYPersistentStore * persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_v1_handleFullSyncRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleSyncAllObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncStart:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleBatchSyncEnd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_v1_handleChangeMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_v1_handleBatchChunkAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_v1_handleBatchEndResponse:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(BOOL)hasPairingStore;
-(BOOL)sendData:(id)arg1 options:(NSDictionary*)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)dataStreamWithMetadata:(id)arg1 options:(NSDictionary*)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(SYPersistentStore *)persistentStore;
-(void)_suspend;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
-(NSString *)name;
-(void)suspend;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(SYSession *)currentSession;
-(id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(BOOL)arg3 options:(NSDictionary*)arg4 ;
-(double)defaultMessageTimeout;
-(void)setDefaultMessageTimeout:(double)arg1 ;
-(void)setHasChangesAvailable;
-(void)setNeedsResetSync;
-(id)_newMessageHeader;
-(void)sessionDidEnd:(id)arg1 withError:(id)arg2 ;
-(void)_devicePaired:(id)arg1 ;
-(void)_deviceUnpaired:(id)arg1 ;
-(void)_vectorClockUpdated;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1 ;
-(void)_setupPairingNotifications;
-(void)_updateMetaProtocolInfoForDevice:(id)arg1 ;
-(void)_setProtocolVersionForRemoteOSVersion:(id)arg1 remoteIsWatch:(BOOL)arg2 ;
-(BOOL)_initializeServiceDB:(id*)arg1 ;
-(BOOL)_initializeMessaging:(id*)arg1 ;
-(BOOL)isMasterStore;
-(void)_sendResetRequest;
-(id)_pathForDataStore;
-(void)_postVersionRejectionMessage;
-(void)_handleResetRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleStartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSyncBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRestartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_handleResetResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldSessionWithID:(id)arg1 supercedeSessionWithID:(id)arg2 ofAge:(double)arg3 ;
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2 ;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3 ;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleSyncError:(id)arg1 ;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2 ;
-(double)sessionStalenessInterval;
-(void)setSessionStalenessInterval:(double)arg1 ;
-(long long)engineType;
-(void)setEngineType:(long long)arg1 ;
-(void)_handleError:(id)arg1 ;
-(SYSyncEngine *)syncEngine;
-(BOOL)resume:(id*)arg1 ;
-(void)_processPendingChanges;
@end

