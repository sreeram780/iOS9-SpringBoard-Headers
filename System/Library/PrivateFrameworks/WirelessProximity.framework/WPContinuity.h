/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPContinuityDelegate;
@class XPCClient, NSString;

@interface WPContinuity : NSObject <XPCClientDelegate> {

	long long _state;
	long long _btBandwidthState;
	id<WPContinuityDelegate> _delegate;
	XPCClient* _connection;

}

@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign) long long btBandwidthState;                                      //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (assign,nonatomic,__weak) id<WPContinuityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WPContinuityDelegate>)arg1 ;
-(void)dealloc;
-(id<WPContinuityDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)updateState:(long long)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 ;
-(void)updateBluetoothBandwidthState:(long long)arg1 ;
-(long long)btBandwidthState;
-(void)setBtBandwidthState:(long long)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
@end

