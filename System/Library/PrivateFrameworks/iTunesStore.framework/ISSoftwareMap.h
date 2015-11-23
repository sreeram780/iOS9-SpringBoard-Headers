/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ISSoftwareMap : NSObject {

	NSArray* _applications;

}

@property (nonatomic,readonly) NSArray * applications; 
+(id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2 ;
+(BOOL)currentMapIsValid;
+(void)setCurrentMap:(id)arg1 ;
+(id)currentMap;
+(id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2 ;
+(id)_newSoftwareUpdateDictionaryForApplication:(id)arg1 ;
+(id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3 ;
+(void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)haveApplicationsOfType:(id)arg1 ;
+(void)_startWatchingInstallationNotifications;
+(id)loadedMap;
+(id)applicationForBundleIdentifier:(id)arg1 ;
+(void)startObservingNotifications;
+(void)invalidateCurrentMap;
-(void)dealloc;
-(id)init;
-(void)_loadFromMobileInstallation;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyList;
-(id)applicationForItemIdentifier:(id)arg1 ;
-(NSArray *)applications;
-(id)applicationForBundleIdentifier:(id)arg1 ;
@end

