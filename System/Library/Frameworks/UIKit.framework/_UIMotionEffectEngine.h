/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIMotionEffectEventConsumer.h>

@class _UIAssociationTable, _UILazyMapTable, NSMapTable, _UIMotionEffectEventProvider, _UIMotionEffectEvent, CADisplayLink, NSMutableSet, _UIMotionEffectEngineLogger, NSArray, NSString;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {

	_UIAssociationTable* _effectViewAssociationTable;
	_UILazyMapTable* _analyzerSettingsToAnalyzers;
	NSMapTable* _analyzersToEffects;
	NSMapTable* _suspendedViewsToEffectSets;
	_UIMotionEffectEventProvider* _eventProvider;
	BOOL _hasReceivedAtLeastOneEventSinceStarting;
	_UIMotionEffectEvent* _pendingEvent;
	int _pendingEventLock;
	CADisplayLink* _displayLink;
	BOOL _generatingUpdates;
	NSMutableSet* _suspendReasons;
	_UIMotionEffectEvent* _lastEvent;
	BOOL _slowUpdatesEnabled;
	BOOL _pendingSlowDown;
	long long _eventProviderStatus;
	BOOL _allAnalyzersAreCentered;
	BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
	BOOL _isPendingReset;
	_UIMotionEffectEngineLogger* _motionLogger;
	int _thermalNotificationToken;
	int _screenDimmingNotificationToken;
	long long _targetInterfaceOrientation;

}

@property (nonatomic,readonly) NSArray * suspensionReasons; 
@property (assign,setter=_setTargetInterfaceOrientation:,nonatomic) long long _targetInterfaceOrientation;              //@synthesize targetInterfaceOrientation=_targetInterfaceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_motionEffectsSupported;
+(BOOL)_motionEffectsEnabled;
+(Class)_eventProviderClass;
+(Class)_analyzerClass;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(void)beginSuspendingMotionEffectsForView:(id)arg1 ;
-(void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2 ;
-(void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(BOOL)_hasMotionEffectsForView:(id)arg1 ;
-(void)endSuspendingMotionEffectsForView:(id)arg1 ;
-(void)_unregisterAllMotionEffectsForView:(id)arg1 ;
-(void)beginSuspendingForReason:(id)arg1 ;
-(void)endSuspendingForReason:(id)arg1 ;
-(void)resetMotionAnalysis;
-(id)_motionEffectsForView:(id)arg1 ;
-(BOOL)_motionEffectsAreSuspendedForView:(id)arg1 ;
-(void)_setTargetInterfaceOrientation:(long long)arg1 ;
-(long long)_targetInterfaceOrientation;
-(NSArray *)suspensionReasons;
-(void)updateWithEvent:(id)arg1 ;
-(void)_startOrStopGeneratingUpdates;
-(void)_stopGeneratingUpdates;
-(void)_unapplyAllEffects;
-(void)_updateDisplayLinkInterval;
-(BOOL)_isSuspended;
-(void)_toggleSlowUpdates;
-(void)_applyEffectsFromAnalyzer:(id)arg1 ;
-(void)_handleLatestDeviceMotion;
-(BOOL)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2 ;
-(void)updateEventProviderStatus:(long long)arg1 ;
@end

