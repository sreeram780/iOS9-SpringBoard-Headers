/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDebug, CDDXPCConnection;

@interface CDDPluginConnection : NSObject {

	CDDebug* _debug;
	unsigned long long _clientId;
	CDDXPCConnection* _connection;

}

@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(CDDXPCConnection *)connection;
-(CDDebug *)debug;
-(id)messageWithError:(id*)arg1 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)registerForSignoffWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)clientId;
@end

