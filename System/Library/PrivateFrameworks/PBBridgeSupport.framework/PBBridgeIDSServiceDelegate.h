/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSTimer, NSMutableDictionary, NSString;

@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate> {

	BOOL _shouldSuppressTransportReachabilityTimeout;
	IDSService* _service;
	NSTimer* _transportReachabilityTimer;
	NSMutableDictionary* _inflightMessages;
	NSMutableDictionary* _pendingMessages;

}

@property (nonatomic,retain) IDSService * service;                                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressTransportReachabilityTimeout;              //@synthesize shouldSuppressTransportReachabilityTimeout=_shouldSuppressTransportReachabilityTimeout - In the implementation block
@property (nonatomic,retain) NSTimer * transportReachabilityTimer;                         //@synthesize transportReachabilityTimer=_transportReachabilityTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inflightMessages;                       //@synthesize inflightMessages=_inflightMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingMessages;                        //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceIdentifier;
-(IDSService *)service;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)endSetupTransaction;
-(id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)setupServiceMessageSelectorMappings;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 ;
-(void)startReachabilityTimer;
-(void)cancelReachabilityTimer;
-(void)checkReachability;
-(BOOL)connectionStateWithDevices:(id)arg1 accounts:(id)arg2 ;
-(void)reportConnectionForService:(id)arg1 accounts:(id)arg2 devices:(id)arg3 ;
-(void)beginSetupTransaction;
-(void)setShouldSuppressTransportReachabilityTimeout:(BOOL)arg1 ;
-(BOOL)shouldSuppressTransportReachabilityTimeout;
-(NSTimer *)transportReachabilityTimer;
-(void)setTransportReachabilityTimer:(NSTimer *)arg1 ;
-(NSMutableDictionary *)inflightMessages;
-(void)setInflightMessages:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingMessages;
-(void)setPendingMessages:(NSMutableDictionary *)arg1 ;
-(void)setService:(IDSService *)arg1 ;
@end

