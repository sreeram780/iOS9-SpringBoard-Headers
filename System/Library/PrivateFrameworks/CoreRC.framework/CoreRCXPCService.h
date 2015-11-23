/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRCXPCServiceCEC.h>
#import <CoreRC/CoreCECBusDelegate.h>
#import <CoreRC/CoreCECDeviceDelegate.h>
#import <CoreRC/CoreRCXPCServicePrivate.h>
#import <CoreRC/CoreRCXPCServiceIR.h>
#import <CoreRC/CoreIRLearningSessionBridgeDelegate.h>
#import <CoreRC/CoreRCXPCServiceCECPrivate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <CoreRC/CoreRCXPCService.h>
#import <CoreRC/CoreRCManagerDelegate.h>
#import <CoreRC/CoreRCBusDelegate.h>
#import <CoreRC/CoreRCDeviceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSXPCListener, NSObject, CoreRCManagerProvider, NSString, NSSet;

@interface CoreRCXPCService : NSObject <CoreRCXPCServiceCEC, CoreCECBusDelegate, CoreCECDeviceDelegate, CoreRCXPCServicePrivate, CoreRCXPCServiceIR, CoreIRLearningSessionBridgeDelegate, CoreRCXPCServiceCECPrivate, NSXPCListenerDelegate, CoreRCXPCService, CoreRCManagerDelegate, CoreRCBusDelegate, CoreRCDeviceDelegate> {

	NSMutableSet* _connections;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	CoreRCManagerProvider* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * connections;                             //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) CoreRCManagerProvider * manager;                 //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)performDeckControlSetDeckStatusAsync:(unsigned long long)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)performInactiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performRefreshDevicesAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performRequestActiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSetPowerStatus:(unsigned long long)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)queryLocalInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)cecBus:(id)arg1 activeSourceHasChangedTo:(id)arg2 fromDevice:(id)arg3 ;
-(void)cecDeviceShouldAssertActiveSource:(id)arg1 ;
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2 ;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3 ;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2 ;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2 ;
-(void)cecBus:(id)arg1 linkStateHasBeenUpdated:(BOOL)arg2 ;
-(void)_performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_performDeckControlSetDeckStatusAsync:(unsigned long long)arg1 forDevice:(id)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned long long)arg2 targetDevice:(id)arg3 hasEntitlement:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_performDeckControlPlayAsync:(id)arg1 playMode:(unsigned long long)arg2 targetDevice:(id)arg3 hasEntitlement:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned long long)arg3 hasEntitlement:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_performInactiveSourceAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_performRefreshDevicesAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 hasEntitlement:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_performRequestActiveSourceAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned long long)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_performSetPowerStatus:(unsigned long long)arg1 withDeviceAsync:(id)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_performStandbyAsync:(id)arg1 targetDevice:(id)arg2 hasEntitlement:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_queryLocalInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 client:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)queryLoggingAsync:(/*^block*/id)arg1 ;
-(void)setLoggingAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_addDeviceOnBusAsync:(id)arg1 withType:(unsigned long long)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setCommandAsync:(unsigned long long)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(/*^block*/id)arg6 ;
-(void)_changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 forDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_startLearningCommandAsync:(unsigned long long)arg1 withDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_endLearningWithDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)learningSessionForDevice:(id)arg1 commandProgress:(id)arg2 ;
-(void)validateAndCallBlock:(/*^block*/id)arg1 ;
-(void)learningSessionForDevice:(id)arg1 status:(unsigned long long)arg2 ;
-(void)learningSessionForDevice:(id)arg1 duplicateCommand:(unsigned long long)arg2 target:(id)arg3 ;
-(void)learningSessionForDeviceCommandDone:(id)arg1 ;
-(void)setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCommandAsync:(unsigned long long)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(/*^block*/id)arg6 ;
-(void)changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 forDevice:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)startLearningCommandAsync:(unsigned long long)arg1 withDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)endLearningWithDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_fakeCreateCECBusAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)_fakeRemoveCECBusAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)_fakeCreateRemoteCECDeviceAsync:(unsigned long long)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)_fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3 ;
-(void)_fakeRemoveCECDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeCreateCECBusAsync:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeRemoveCECBusAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)fakeCreateRemoteCECDeviceAsync:(unsigned long long)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3 ;
-(void)fakeRemoveCECDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(CoreRCManagerProvider *)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenUpdated:(id)arg2 ;
-(void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3 ;
-(void)startOnQueue:(id)arg1 ;
-(void)manager:(id)arg1 hasAdded:(id)arg2 ;
-(void)manager:(id)arg1 hasRemoved:(id)arg2 ;
-(void)manager:(id)arg1 hasUpdated:(id)arg2 ;
-(void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setExtendedPropertyAsync:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getExtendedPropertyAsyncForKey:(id)arg1 ofDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)queryBusesAsync:(/*^block*/id)arg1 ;
-(void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendCommandAsync:(unsigned long long)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)_sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_sendCommandAsync:(unsigned long long)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)_queryBusesAsync:(/*^block*/id)arg1 ;
-(void)_setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_setExtendedPropertyAsync:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_getExtendedPropertyAsyncForKey:(id)arg1 ofDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSSet *)connections;
-(void)connectionInvalidated:(id)arg1 ;
@end

