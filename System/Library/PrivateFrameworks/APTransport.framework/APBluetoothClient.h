/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WPAirPlaySoloDelegate.h>

@protocol APBluetoothClientDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSDictionary, WPAirPlaySolo, NSString;

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate> {

	id<APBluetoothClientDelegate> _delegate;
	BOOL _isFirstCycle;
	BOOL _isSourcePresenceAdvertising;
	BOOL _isStartAdvertisingPending;
	BOOL _isStopAdvertisingPending;
	NSMutableDictionary* _nearbyDevices;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _sourcePresenceAdvertisingData;
	NSObject*<OS_dispatch_source> _sourcePresenceAdvertisingTimer;
	NSObject*<OS_dispatch_source> _sourcePresenceWaitingTimer;
	WPAirPlaySolo* _wpAirPlaySolo;

}

@property (readonly) long long state; 
@property (assign,nonatomic) BOOL isFirstCycle;                                                         //@synthesize isFirstCycle=_isFirstCycle - In the implementation block
@property (assign,nonatomic) BOOL isSourcePresenceAdvertising;                                          //@synthesize isSourcePresenceAdvertising=_isSourcePresenceAdvertising - In the implementation block
@property (assign,nonatomic) BOOL isStartAdvertisingPending;                                            //@synthesize isStartAdvertisingPending=_isStartAdvertisingPending - In the implementation block
@property (assign,nonatomic) BOOL isStopAdvertisingPending;                                             //@synthesize isStopAdvertisingPending=_isStopAdvertisingPending - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyDevices;                                       //@synthesize nearbyDevices=_nearbyDevices - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePresenceAdvertisingData;                                //@synthesize sourcePresenceAdvertisingData=_sourcePresenceAdvertisingData - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> sourcePresenceAdvertisingTimer;              //@synthesize sourcePresenceAdvertisingTimer=_sourcePresenceAdvertisingTimer - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> sourcePresenceWaitingTimer;                  //@synthesize sourcePresenceWaitingTimer=_sourcePresenceWaitingTimer - In the implementation block
@property (nonatomic,retain) WPAirPlaySolo * wpAirPlaySolo;                                             //@synthesize wpAirPlaySolo=_wpAirPlaySolo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(long long)state;
-(WPAirPlaySolo *)wpAirPlaySolo;
-(NSObject*<OS_dispatch_source>)sourcePresenceWaitingTimer;
-(void)stopSourcePresenceWaitingCycle;
-(void)startSourcePresenceAdvertisingCycle;
-(void)setSourcePresenceWaitingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)sourcePresenceAdvertisingTimer;
-(NSDictionary *)sourcePresenceAdvertisingData;
-(void)stopSourcePresenceAdvertisingCycle;
-(void)startSourcePresenceWaitingCycle;
-(void)setSourcePresenceAdvertisingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isFirstCycle;
-(void)setIsFirstCycle:(BOOL)arg1 ;
-(BOOL)isSourcePresenceAdvertising;
-(void)setIsSourcePresenceAdvertising:(BOOL)arg1 ;
-(void)setIsStartAdvertisingPending:(BOOL)arg1 ;
-(void)setIsStopAdvertisingPending:(BOOL)arg1 ;
-(void)setSourcePresenceAdvertisingData:(NSDictionary *)arg1 ;
-(void)startSourcePresenceConnectionlessAdvertising;
-(void)stopSourcePresenceConnectionlessAdvertising;
-(BOOL)isStartAdvertisingPending;
-(BOOL)isStopAdvertisingPending;
-(void)setNearbyDevices:(NSMutableDictionary *)arg1 ;
-(void)setWpAirPlaySolo:(WPAirPlaySolo *)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMutableDictionary *)nearbyDevices;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4 ;
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(void)airPlaySoloAdvertisingPending:(id)arg1 ;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)stopConnectionlessAdvertising;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
@end

