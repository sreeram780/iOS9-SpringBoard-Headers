/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)setState:(int)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)authenticate;
-(void)stopService;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)detachMIS;
-(BOOL)didUserPreventData;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
@end

