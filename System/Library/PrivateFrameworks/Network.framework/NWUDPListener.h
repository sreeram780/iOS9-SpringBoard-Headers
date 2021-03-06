/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_nw_udp_listener;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWUDPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_udp_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id _delegate;

}

@property (retain) NWEndpoint * localEndpoint;                                  //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (retain) NSObject*<OS_nw_udp_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                                   //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
-(NWEndpoint *)localEndpoint;
-(NSError *)error;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)handleError:(int)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(void)setInternalListener:(NSObject*<OS_nw_udp_listener>)arg1 ;
-(NSObject*<OS_nw_udp_listener>)internalListener;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)handleNewSession:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
@end

