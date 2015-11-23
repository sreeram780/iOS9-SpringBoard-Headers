/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	BOOL _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg1 ;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_postNotification;
-(void)_updateDefaults:(id)arg1 ;
@end

