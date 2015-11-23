/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTAbstractIDSService.h>

@class NSString, NSMutableDictionary, NSMutableArray, BLTPBProtobufSequenceNumberManager;

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService> {

	NSString* _service;
	NSMutableDictionary* _actionsByRequestType;
	NSMutableDictionary* _actionsByResponseType;
	NSMutableArray* _delegates;
	unsigned long long _currentIdentifier;
	BLTPBProtobufSequenceNumberManager* _sequenceNumberManager;
	unsigned long long _minimumSendDelay;
	unsigned long long _maximumSendDelay;
	unsigned long long _minimumResponseDelay;
	unsigned long long _maximumResponseDelay;

}

@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@property (assign,nonatomic) unsigned long long minimumSendDelay;                         //@synthesize minimumSendDelay=_minimumSendDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSendDelay;                         //@synthesize maximumSendDelay=_maximumSendDelay - In the implementation block
@property (assign,nonatomic) unsigned long long minimumResponseDelay;                     //@synthesize minimumResponseDelay=_minimumResponseDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maximumResponseDelay;                     //@synthesize maximumResponseDelay=_maximumResponseDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMinimumSendDelay:(unsigned long long)arg1 ;
-(void)setMaximumSendDelay:(unsigned long long)arg1 ;
-(void)setMinimumResponseDelay:(unsigned long long)arg1 ;
-(void)setMaximumResponseDelay:(unsigned long long)arg1 ;
-(unsigned long long)_randomSendDelay;
-(void)_handleProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3 ;
-(void)_sendLightsAndSirensRequestForProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3 ;
-(void)_sendSetSectionInfoResponseWithIdentifier:(id)arg1 sendDelay:(unsigned long long)arg2 ;
-(unsigned long long)_randomResponseDelay;
-(id)_lightsAndSirensRequestForProtobuf:(id)arg1 ;
-(void)_callDelegateActionForProtobuf:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 type:(unsigned short)arg4 isResponse:(BOOL)arg5 ;
-(void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)_randomValueBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(unsigned long long)_nextSequenceNumber;
-(unsigned long long)minimumSendDelay;
-(unsigned long long)maximumSendDelay;
-(unsigned long long)minimumResponseDelay;
-(unsigned long long)maximumResponseDelay;
-(id)initWithService:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;
@end

