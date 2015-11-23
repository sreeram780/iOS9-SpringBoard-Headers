/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLIOKitOperatorComposition, BrightnessSystemClient, PLTimer, NSDictionary, NSDate, NSString, PLXPCListenerOperatorComposition, PLMonotonicTimer;

@interface PLDisplayAgent : PLAgent {

	BOOL _alsOn;
	BOOL _userTouch;
	BOOL _isMultitouchLoggingEnabled;
	PLIOKitOperatorComposition* _iokitBacklight;
	PLIOKitOperatorComposition* _iokitDisplay;
	PLIOKitOperatorComposition* _iokitTouch;
	BrightnessSystemClient* _brightnessSystemClient;
	PLTimer* _backlightFilterTimer;
	NSDictionary* _pendingBacklightEntry;
	NSDate* _pendingBacklightEntryDate;
	double _lastALSPowerSaved;
	NSDate* _userTouchDownTime;
	NSString* _displayHardware;
	NSDictionary* _displayPowerModel;
	IOHIDEventSystemClientRef _touchHIDClientRef;
	PLXPCListenerOperatorComposition* _multitouchXPCListener;
	PLMonotonicTimer* _logLastALSPowerSavedTimer;

}

@property (readonly) PLIOKitOperatorComposition * iokitBacklight;                         //@synthesize iokitBacklight=_iokitBacklight - In the implementation block
@property (readonly) PLIOKitOperatorComposition * iokitDisplay;                           //@synthesize iokitDisplay=_iokitDisplay - In the implementation block
@property (readonly) PLIOKitOperatorComposition * iokitTouch;                             //@synthesize iokitTouch=_iokitTouch - In the implementation block
@property (retain) BrightnessSystemClient * brightnessSystemClient;                       //@synthesize brightnessSystemClient=_brightnessSystemClient - In the implementation block
@property (retain) PLTimer * backlightFilterTimer;                                        //@synthesize backlightFilterTimer=_backlightFilterTimer - In the implementation block
@property (retain) NSDictionary * pendingBacklightEntry;                                  //@synthesize pendingBacklightEntry=_pendingBacklightEntry - In the implementation block
@property (retain) NSDate * pendingBacklightEntryDate;                                    //@synthesize pendingBacklightEntryDate=_pendingBacklightEntryDate - In the implementation block
@property (assign) BOOL alsOn;                                                            //@synthesize alsOn=_alsOn - In the implementation block
@property (assign) double lastALSPowerSaved;                                              //@synthesize lastALSPowerSaved=_lastALSPowerSaved - In the implementation block
@property (assign) BOOL userTouch;                                                        //@synthesize userTouch=_userTouch - In the implementation block
@property (retain) NSDate * userTouchDownTime;                                            //@synthesize userTouchDownTime=_userTouchDownTime - In the implementation block
@property (readonly) NSString * displayHardware;                                          //@synthesize displayHardware=_displayHardware - In the implementation block
@property (readonly) NSDictionary * displayPowerModel;                                    //@synthesize displayPowerModel=_displayPowerModel - In the implementation block
@property (assign) IOHIDEventSystemClientRef touchHIDClientRef;                           //@synthesize touchHIDClientRef=_touchHIDClientRef - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * multitouchXPCListener;              //@synthesize multitouchXPCListener=_multitouchXPCListener - In the implementation block
@property (assign) BOOL isMultitouchLoggingEnabled;                                       //@synthesize isMultitouchLoggingEnabled=_isMultitouchLoggingEnabled - In the implementation block
@property (retain) PLMonotonicTimer * logLastALSPowerSavedTimer;                          //@synthesize logLastALSPowerSavedTimer=_logLastALSPowerSavedTimer - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventPointDefinitionDisplay;
+(id)entryEventPointDefinitionUserBrightness;
+(id)entryEventPointDefinitionMultitouch;
+(id)entryEventForwardDefinitionDisplay;
+(id)entryEventForwardDefinitionALSUserPreferences;
+(id)entryEventForwardDefinitionALSEnabled;
+(id)entryEventForwardDefinitionALSPowerSaved;
+(id)entryEventBackwardDefinitionTouch;
+(id)entryAggregateDefinitionUserTouch;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(BOOL)isAlsEnabled;
-(void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2 ;
-(NSDictionary *)pendingBacklightEntry;
-(NSDate *)pendingBacklightEntryDate;
-(void)logEventForwardDisplayWithRawData:(id)arg1 withDate:(id)arg2 ;
-(void)setPendingBacklightEntry:(NSDictionary *)arg1 ;
-(void)setPendingBacklightEntryDate:(NSDate *)arg1 ;
-(PLTimer *)backlightFilterTimer;
-(void)logEventPointDisplayForBlock:(id)arg1 isActive:(BOOL)arg2 ;
-(void)logEventBackwardTouch;
-(IOHIDEventSystemClientRef)setUpIOHIDTouchSystemClient;
-(void)setIsMultitouchLoggingEnabled:(BOOL)arg1 ;
-(NSString *)displayHardware;
-(BOOL)isMultitouchLoggingEnabled;
-(void)logEventPointMultitouchWithPayload:(id)arg1 ;
-(void)setMultitouchXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardDisplay;
-(void)logEventPointDisplay;
-(void)logEventForwardALSEnabled;
-(void)logEventForwardALSUserPreferences;
-(void)logEventPointDisplayBacklight;
-(void)logEventPointDisplayMIE;
-(PLIOKitOperatorComposition *)iokitBacklight;
-(PLIOKitOperatorComposition *)iokitDisplay;
-(BrightnessSystemClient *)brightnessSystemClient;
-(void)modelDisplayPower:(id)arg1 ;
-(void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg1 ;
-(BOOL)alsOn;
-(PLIOKitOperatorComposition *)iokitTouch;
-(BOOL)userTouch;
-(void)setUserTouch:(BOOL)arg1 ;
-(NSDate *)userTouchDownTime;
-(void)setUserTouchDownTime:(NSDate *)arg1 ;
-(double)uAmpsToDisplayPower:(double)arg1 ;
-(void)setLastALSPowerSaved:(double)arg1 ;
-(double)lastALSPowerSaved;
-(void)setLogLastALSPowerSavedTimer:(PLMonotonicTimer *)arg1 ;
-(void)logEventPointUserBrightnessCommitted:(double)arg1 ;
-(void)logEventForwardALSUserPreferencesWithCurrLux;
-(void)setAlsOn:(BOOL)arg1 ;
-(double)modelDisplayPowerForK94:(id)arg1 ;
-(NSDictionary *)displayPowerModel;
-(void)logEventBackwardUserTouch:(BOOL)arg1 ;
-(void)setBrightnessSystemClient:(BrightnessSystemClient *)arg1 ;
-(void)setBacklightFilterTimer:(PLTimer *)arg1 ;
-(IOHIDEventSystemClientRef)touchHIDClientRef;
-(void)setTouchHIDClientRef:(IOHIDEventSystemClientRef)arg1 ;
-(PLXPCListenerOperatorComposition *)multitouchXPCListener;
-(PLMonotonicTimer *)logLastALSPowerSavedTimer;
@end
