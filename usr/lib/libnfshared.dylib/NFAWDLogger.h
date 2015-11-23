/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, AWDServerConnection, NSUserDefaults, NFAWDVersionInfo, NSObject;

@interface NFAWDLogger : NSObject {

	NSData* _activeAID;
	AWDServerConnection* _awdServer;
	unsigned long long _previousTransactionState;
	NSData* _uuid;
	unsigned long long _uuidRefTimestamp;
	NSUserDefaults* _userDefault;
	NSData* _tsmUuid;
	unsigned long long _tsmUuidRefTimestamp;
	NFAWDVersionInfo* _versionInfo;
	NSData* _deviceExceptionUuid;
	NSObject*<OS_dispatch_queue> _userDefaultUpdateQueue;
	unsigned long long _previousVASTransactionState;

}

@property (copy) NSData * activeAID;                                                           //@synthesize activeAID=_activeAID - In the implementation block
@property (nonatomic,retain) AWDServerConnection * awdServer;                                  //@synthesize awdServer=_awdServer - In the implementation block
@property (assign,nonatomic) unsigned long long previousTransactionState;                      //@synthesize previousTransactionState=_previousTransactionState - In the implementation block
@property (nonatomic,retain) NSData * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long uuidRefTimestamp;                              //@synthesize uuidRefTimestamp=_uuidRefTimestamp - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefault;                                     //@synthesize userDefault=_userDefault - In the implementation block
@property (nonatomic,retain) NSData * tsmUuid;                                                 //@synthesize tsmUuid=_tsmUuid - In the implementation block
@property (assign,nonatomic) unsigned long long tsmUuidRefTimestamp;                           //@synthesize tsmUuidRefTimestamp=_tsmUuidRefTimestamp - In the implementation block
@property (nonatomic,retain) NFAWDVersionInfo * versionInfo;                                   //@synthesize versionInfo=_versionInfo - In the implementation block
@property (nonatomic,retain) NSData * deviceExceptionUuid;                                     //@synthesize deviceExceptionUuid=_deviceExceptionUuid - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> userDefaultUpdateQueue;              //@synthesize userDefaultUpdateQueue=_userDefaultUpdateQueue - In the implementation block
@property (assign,nonatomic) unsigned long long previousVASTransactionState;                   //@synthesize previousVASTransactionState=_previousVASTransactionState - In the implementation block
+(id)sharedAWDLogger;
-(void)dealloc;
-(id)init;
-(unsigned long long)getTimestamp;
-(NSData *)uuid;
-(AWDServerConnection *)awdServer;
-(void)setAwdServer:(AWDServerConnection *)arg1 ;
-(NSUserDefaults *)userDefault;
-(void)setUuid:(NSData *)arg1 ;
-(id)generateUUID;
-(void)postAWDEvent:(id)arg1 ;
-(void)updateStats:(id)arg1 reset:(BOOL)arg2 ;
-(void)enableQueryMetricsListener;
-(void)postAWDFieldEventWithFieldOn:(BOOL)arg1 withTechnology:(unsigned)arg2 ;
-(void)postAWDCRSAuthInitEventWithStatus:(unsigned)arg1 ;
-(void)postAWDCRSAuthWithStatus:(unsigned)arg1 withMethod:(unsigned)arg2 ;
-(void)postAWDCRSAuthECommerceWithParameters:(id)arg1 ;
-(void)postAWDCRSDeAuthWithStatus:(unsigned)arg1 ;
-(void)postAWDSESelectEventWithAID:(id)arg1 ;
-(void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDTransactionLastRAPDU;
-(void)postAWDTransactionEndOfOperation;
-(void)postAWDAPNReceived;
-(void)postAWDRestrictedModeFromContactlessMode:(BOOL)arg1 ;
-(void)postAWDTSMStartWithParameters:(id)arg1 ;
-(void)postAWDTSMEndWithParameters:(id)arg1 ;
-(void)postAWDTSMEndOfSession;
-(void)postAWDTSMConnectivityException:(unsigned)arg1 ;
-(void)postAWDVersionInfo:(id)arg1 ;
-(void)postAWDVASSelectOSE:(id)arg1 ;
-(void)postAWDVASGetData:(id)arg1 ;
-(void)postAWDVASTransactionException:(unsigned)arg1 withSWStatus:(unsigned)arg2 ;
-(void)postAWDPLLUnlockEvent:(BOOL)arg1 ;
-(NSData *)activeAID;
-(void)setActiveAID:(NSData *)arg1 ;
-(unsigned long long)previousTransactionState;
-(void)setPreviousTransactionState:(unsigned long long)arg1 ;
-(unsigned long long)uuidRefTimestamp;
-(void)setUuidRefTimestamp:(unsigned long long)arg1 ;
-(void)setUserDefault:(NSUserDefaults *)arg1 ;
-(NSData *)tsmUuid;
-(void)setTsmUuid:(NSData *)arg1 ;
-(unsigned long long)tsmUuidRefTimestamp;
-(void)setTsmUuidRefTimestamp:(unsigned long long)arg1 ;
-(NFAWDVersionInfo *)versionInfo;
-(void)setVersionInfo:(NFAWDVersionInfo *)arg1 ;
-(NSData *)deviceExceptionUuid;
-(void)setDeviceExceptionUuid:(NSData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)userDefaultUpdateQueue;
-(void)setUserDefaultUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)previousVASTransactionState;
-(void)setPreviousVASTransactionState:(unsigned long long)arg1 ;
@end

