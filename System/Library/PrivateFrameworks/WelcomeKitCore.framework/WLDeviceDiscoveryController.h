/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/WLDeviceDiscoverySocketHandlerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSNetService, NSObject, NSMutableArray, NSString, NSArray;

@interface WLDeviceDiscoveryController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, WLDeviceDiscoverySocketHandlerDelegate> {

	NSNetService* _publishedService;
	int _listenerSocket;
	NSObject*<OS_dispatch_source> _incomingConnSource;
	NSMutableArray* _socketHandlers;
	NSMutableArray* _sourceDevices;
	NSMutableArray* _services;
	NSString* _pairingSecret;
	NSObject*<OS_dispatch_queue> _discoveryRequestSerialQueue;
	/*^block*/id _nextIncomingConnectionHandler;
	NSString* _allowedAddress;

}

@property (nonatomic,copy,readonly) NSArray * sourceDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)_shouldUseLegacySSIDPSKAlgorithm;
+(BOOL)_shouldUseLegacyTwelveDigitPairingCode;
-(void)netServiceDidPublish:(id)arg1 ;
-(id)init;
-(void)setNextIncomingConnectionHandler:(/*^block*/id)arg1 ;
-(void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithError:(id)arg2 ;
-(void)deviceDiscoverySocketHandler:(id)arg1 wasInvalidatedForSourceDevice:(id)arg2 withError:(id)arg3 ;
-(void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2 ;
-(void)_queue_startDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldForceDiscoveryError;
-(void)_allowConnectionsFromAnyAddress;
-(id)_generatePairingSecret;
-(void)_postSourceDevicesDidChangeNotification;
-(id)_ssidWithSecret:(id)arg1 ;
-(id)_pskWithSecret:(id)arg1 ;
-(id)_defaultChannel;
-(int)createListenerSocketOnPort:(unsigned long long)arg1 ;
-(int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(BOOL)arg2 ;
-(id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)_queue_stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(id)_hashWithString:(id)arg1 ;
-(NSArray *)sourceDevices;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptDirectConnectionToAddress:(id)arg1 ;
@end

