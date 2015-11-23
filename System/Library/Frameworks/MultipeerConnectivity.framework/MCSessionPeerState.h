/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCPeerID, NSMutableDictionary, NSData;

@interface MCSessionPeerState : NSObject {

	BOOL _connectPeerCalled;
	unsigned _newStreamOpenRequestID;
	unsigned _newStreamID;
	MCPeerID* _peerID;
	long long _state;
	NSMutableDictionary* _outgoingStreamRequests;
	NSMutableDictionary* _incomingStreams;
	NSMutableDictionary* _outgoingStreams;
	NSData* _nearbyConnectionData;
	long long _certificateDecision;

}

@property (nonatomic,copy,readonly) MCPeerID * peerID;                                  //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) long long state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL connectPeerCalled;                                    //@synthesize connectPeerCalled=_connectPeerCalled - In the implementation block
@property (nonatomic,copy) NSData * nearbyConnectionData;                               //@synthesize nearbyConnectionData=_nearbyConnectionData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outgoingStreamRequests;              //@synthesize outgoingStreamRequests=_outgoingStreamRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outgoingStreams;                     //@synthesize outgoingStreams=_outgoingStreams - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * incomingStreams;                     //@synthesize incomingStreams=_incomingStreams - In the implementation block
@property (nonatomic,readonly) unsigned newStreamOpenRequestID;                         //@synthesize newStreamOpenRequestID=_newStreamOpenRequestID - In the implementation block
@property (nonatomic,readonly) unsigned newStreamID;                                    //@synthesize newStreamID=_newStreamID - In the implementation block
@property (assign,nonatomic) long long certificateDecision;                             //@synthesize certificateDecision=_certificateDecision - In the implementation block
-(MCPeerID *)peerID;
-(id)initWithPeer:(id)arg1 ;
-(unsigned)newStreamID;
-(unsigned)newStreamOpenRequestID;
-(NSMutableDictionary *)outgoingStreamRequests;
-(void)setOutgoingStreamRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)incomingStreams;
-(void)setIncomingStreams:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outgoingStreams;
-(void)setOutgoingStreams:(NSMutableDictionary *)arg1 ;
-(void)setNearbyConnectionData:(NSData *)arg1 ;
-(BOOL)connectPeerCalled;
-(void)setConnectPeerCalled:(BOOL)arg1 ;
-(long long)certificateDecision;
-(void)setCertificateDecision:(long long)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSData *)nearbyConnectionData;
@end

