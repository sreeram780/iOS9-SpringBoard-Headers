/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {

	SCDynamicStoreRef _prefs;
	CFStringRef _wifiKey;
	CFStringRef _wifiInterface;
	CFStringRef _tetheringLink;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(BOOL)wifiEnabled;
-(void)dealloc;
-(id)init;
-(id)wifiConfig;
-(void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2 ;
-(id)_wifiNameWithState:(id)arg1 ;
-(id)_wifiPowerWithState:(id)arg1 ;
-(id)_wifiTetheringWithState:(id)arg1 ;
@end

