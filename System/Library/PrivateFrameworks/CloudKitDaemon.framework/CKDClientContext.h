/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKLoggingProtocol.h>

@protocol OS_dispatch_queue;
@class CKDServerConfiguration, NSURL, NSString, NSHashTable, CKContainerID, NSBundle, CKDAccount, CKAccountInfo, CKDFlowControlManager, CKDMMCS, CKTimeLogger, CKDPCSManager, CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDZoneGatekeeper, CKDMescalSession, NSMutableDictionary, NSObject, NSMutableArray;

@interface CKDClientContext : NSObject <CKLoggingProtocol> {

	BOOL _isForClouddInternalUse;
	BOOL _hasDataContainer;
	BOOL _canAccessProtectionData;
	BOOL _canSetDeviceIdentifier;
	BOOL _allowsPowerNapScheduling;
	BOOL _hasAllowAccessDuringBuddyEntitlement;
	BOOL _sandboxed;
	BOOL _finishedAppProxySetup;
	CKDServerConfiguration* _config;
	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSString* _containerScopedUserID;
	NSHashTable* _proxies;
	long long _cachedEnvironment;
	CKContainerID* _containerID;
	NSBundle* _applicationBundle;
	NSString* _applicationBundleID;
	NSString* _sourceApplicationBundleID;
	NSString* _applicationVersion;
	NSURL* _applicationIcon;
	NSString* _applicationDisplayName;
	NSString* _applicationContainerPath;
	NSString* _applicationContainerCloudKitDirectory;
	NSString* _applicationCachesDirectory;
	NSString* _applicationMMCSDirectory;
	NSString* _applicationAssetDbDirectory;
	NSString* _applicationFileDownloadDirectory;
	NSString* _applicationPackageUploadDirectory;
	NSString* _applicationPackageDownloadDirectory;
	NSString* _applicationRecordCacheDirectory;
	NSString* _containerHardwareIDHash;
	long long _type;
	long long _usesAPSPublicToken;
	long long _darkWakeEnabled;
	CKDAccount* _account;
	CKAccountInfo* _accountInfoOverride;
	CKDFlowControlManager* _flowControlManager;
	CKDMMCS* _MMCS;
	CKTimeLogger* _timeLogger;
	CKDPCSManager* _pcsManager;
	CKDKeyValueDiskCache* _publicIdentitiesDiskCache;
	CKDPublicIdentityLookupService* _foregroundPublicIdentityLookupService;
	CKDPublicIdentityLookupService* _backgroundPublicIdentityLookupService;
	CKDZoneGatekeeper* _foregroundZoneGatekeeper;
	CKDZoneGatekeeper* _backgroundZoneGatekeeper;
	CKDMescalSession* _mescalSession;
	NSMutableDictionary* _fakeErrorByClassName;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSString* _contextID;
	NSMutableArray* _oldApplicationCaches;

}

@property (nonatomic,retain) CKDServerConfiguration * config;                                                      //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSURL * publicCloudDBURL;                                                             //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,retain) NSURL * publicShareServiceURL;                                                        //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,retain) NSURL * publicDeviceServiceURL;                                                       //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,retain) NSString * containerScopedUserID;                                                     //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (assign,nonatomic) BOOL isForClouddInternalUse;                                                          //@synthesize isForClouddInternalUse=_isForClouddInternalUse - In the implementation block
@property (nonatomic,retain) NSHashTable * proxies;                                                                //@synthesize proxies=_proxies - In the implementation block
@property (assign) long long cachedEnvironment;                                                                    //@synthesize cachedEnvironment=_cachedEnvironment - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                                                        //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSBundle * applicationBundle;                                                       //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleID;                                                     //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplicationBundleID;                                               //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationVersion;                                                        //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,readonly) NSURL * applicationIcon;                                                            //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (nonatomic,readonly) NSString * applicationDisplayName;                                                  //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerPath;                                                  //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerCloudKitDirectory;                                     //@synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationCachesDirectory;                                                //@synthesize applicationCachesDirectory=_applicationCachesDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationMMCSDirectory;                                                  //@synthesize applicationMMCSDirectory=_applicationMMCSDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationAssetDbDirectory;                                               //@synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationFileDownloadDirectory;                                          //@synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationPackageUploadDirectory;                                         //@synthesize applicationPackageUploadDirectory=_applicationPackageUploadDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationPackageDownloadDirectory;                                       //@synthesize applicationPackageDownloadDirectory=_applicationPackageDownloadDirectory - In the implementation block
@property (nonatomic,retain) NSString * applicationRecordCacheDirectory;                                           //@synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * containerHardwareIDHash;                                                 //@synthesize containerHardwareIDHash=_containerHardwareIDHash - In the implementation block
@property (nonatomic,readonly) long long type;                                                                     //@synthesize type=_type - In the implementation block
@property (setter=setAPSEnvironmentString:,nonatomic,retain) NSString * apsEnvironmentString; 
@property (assign,nonatomic) long long usesAPSPublicToken;                                                         //@synthesize usesAPSPublicToken=_usesAPSPublicToken - In the implementation block
@property (assign,nonatomic) long long darkWakeEnabled;                                                            //@synthesize darkWakeEnabled=_darkWakeEnabled - In the implementation block
@property (retain) CKDAccount * account;                                                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) CKAccountInfo * accountInfoOverride;                                                //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (nonatomic,readonly) BOOL canAccessAccount; 
@property (assign,nonatomic) BOOL hasDataContainer;                                                                //@synthesize hasDataContainer=_hasDataContainer - In the implementation block
@property (assign,nonatomic) BOOL canAccessProtectionData;                                                         //@synthesize canAccessProtectionData=_canAccessProtectionData - In the implementation block
@property (assign,nonatomic) BOOL canSetDeviceIdentifier;                                                          //@synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier - In the implementation block
@property (assign,setter=setHasSystemServiceEntitlement:,nonatomic) BOOL hasSystemServiceEntitlement; 
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                                                        //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;                                            //@synthesize hasAllowAccessDuringBuddyEntitlement=_hasAllowAccessDuringBuddyEntitlement - In the implementation block
@property (nonatomic,retain) CKDFlowControlManager * flowControlManager;                                           //@synthesize flowControlManager=_flowControlManager - In the implementation block
@property (retain) CKDMMCS * MMCS;                                                                                 //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                                            //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,retain) CKDPCSManager * pcsManager;                                                           //@synthesize pcsManager=_pcsManager - In the implementation block
@property (nonatomic,retain) CKDKeyValueDiskCache * publicIdentitiesDiskCache;                                     //@synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache - In the implementation block
@property (nonatomic,retain) CKDPublicIdentityLookupService * foregroundPublicIdentityLookupService;               //@synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService - In the implementation block
@property (nonatomic,retain) CKDPublicIdentityLookupService * backgroundPublicIdentityLookupService;               //@synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService - In the implementation block
@property (nonatomic,retain) CKDZoneGatekeeper * foregroundZoneGatekeeper;                                         //@synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper - In the implementation block
@property (nonatomic,retain) CKDZoneGatekeeper * backgroundZoneGatekeeper;                                         //@synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper - In the implementation block
@property (nonatomic,retain) CKDMescalSession * mescalSession;                                                     //@synthesize mescalSession=_mescalSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fakeErrorByClassName;                                           //@synthesize fakeErrorByClassName=_fakeErrorByClassName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupQueue;                                              //@synthesize setupQueue=_setupQueue - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                                                    //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) BOOL finishedAppProxySetup;                                                           //@synthesize finishedAppProxySetup=_finishedAppProxySetup - In the implementation block
@property (nonatomic,readonly) NSString * contextID;                                                               //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldApplicationCaches;                                                //@synthesize oldApplicationCaches=_oldApplicationCaches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)sharedContexts;
+(id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 type:(long long*)arg3 ;
+(id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 ;
+(id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
+(id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 ;
+(id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(long long)type;
-(NSString *)contextID;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(BOOL)canAccessProtectionData;
-(NSString *)applicationBundleID;
-(NSString *)applicationContainerPath;
-(NSString *)applicationRecordCacheDirectory;
-(void)logWithFile:(const char*)arg1 function:(const char*)arg2 line:(int)arg3 level:(int)arg4 section:(id)arg5 format:(id)arg6 ;
-(BOOL)isSandboxed;
-(void)tearDownAssetTransfers;
-(void)removeClientProxy:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(NSHashTable *)proxies;
-(BOOL)canAccessAccount;
-(NSString *)applicationDisplayName;
-(NSURL *)applicationIcon;
-(void)showUserNotification:(CFUserNotificationRef)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(CKDPCSManager *)pcsManager;
-(CKAccountInfo *)accountInfoOverride;
-(void)addClientProxy:(id)arg1 ;
-(void)startSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishSetupWithClientProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 ;
-(void)clearAssetCacheWithDatabaseScope:(long long)arg1 ;
-(void)clearRecordCacheWithDatabaseScope:(long long)arg1 ;
-(void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2 ;
-(CKDZoneGatekeeper *)foregroundZoneGatekeeper;
-(CKDZoneGatekeeper *)backgroundZoneGatekeeper;
-(CKDFlowControlManager *)flowControlManager;
-(CKDMMCS *)MMCS;
-(CKTimeLogger *)timeLogger;
-(id)CKPropertiesDescription;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)_reloadAccount;
-(void)_loadApplicationContainerPathAndType;
-(void)_determineHardwareInfo;
-(void)_purgeOldCacheDirectories;
-(BOOL)isForClouddInternalUse;
-(void)setIsForClouddInternalUse:(BOOL)arg1 ;
-(void)setCachedEnvironment:(long long)arg1 ;
-(BOOL)hasSystemServiceEntitlement;
-(NSMutableArray *)oldApplicationCaches;
-(void)setOldApplicationCaches:(NSMutableArray *)arg1 ;
-(BOOL)hasDataContainer;
-(NSString *)applicationFileDownloadDirectory;
-(NSString *)applicationAssetDbDirectory;
-(NSString *)applicationPackageDownloadDirectory;
-(id)_issueSandboxExtensionForPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 ;
-(NSString *)applicationMMCSDirectory;
-(NSString *)applicationPackageUploadDirectory;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id*)arg2 error:(id*)arg3 ;
-(BOOL)setupMMCSWrapperWithError:(id*)arg1 ;
-(NSMutableDictionary *)fakeErrorByClassName;
-(CKDServerConfiguration *)config;
-(double)publicIdentitiesExpirationTimeout;
-(NSString *)apsEnvironmentString;
-(void)setCanAccessProtectionData:(BOOL)arg1 ;
-(void)setCanSetDeviceIdentifier:(BOOL)arg1 ;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setHasAllowAccessDuringBuddyEntitlement:(BOOL)arg1 ;
-(BOOL)canSetDeviceIdentifier;
-(BOOL)finishedAppProxySetup;
-(void)setFinishedAppProxySetup:(BOOL)arg1 ;
-(void)setAPSEnvironmentString:(id)arg1 ;
-(void)setUsesAPSPublicToken:(long long)arg1 ;
-(void)setDarkWakeEnabled:(long long)arg1 ;
-(void)setHasSystemServiceEntitlement:(BOOL)arg1 ;
-(void)setPublicIdentitiesDiskCache:(CKDKeyValueDiskCache *)arg1 ;
-(CKDKeyValueDiskCache *)publicIdentitiesDiskCache;
-(void)setForegroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(void)setBackgroundPublicIdentityLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(void)setFakeErrorByClassName:(NSMutableDictionary *)arg1 ;
-(void)clearAssetCache;
-(BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2 ;
-(void)performRequest:(id)arg1 ;
-(void)setConfig:(CKDServerConfiguration *)arg1 ;
-(NSURL *)publicCloudDBURL;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(NSURL *)publicShareServiceURL;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicDeviceServiceURL;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(NSString *)containerScopedUserID;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(void)setProxies:(NSHashTable *)arg1 ;
-(long long)cachedEnvironment;
-(NSBundle *)applicationBundle;
-(void)setApplicationContainerPath:(NSString *)arg1 ;
-(NSString *)applicationContainerCloudKitDirectory;
-(void)setApplicationContainerCloudKitDirectory:(NSString *)arg1 ;
-(NSString *)applicationCachesDirectory;
-(void)setApplicationCachesDirectory:(NSString *)arg1 ;
-(void)setApplicationMMCSDirectory:(NSString *)arg1 ;
-(void)setApplicationAssetDbDirectory:(NSString *)arg1 ;
-(void)setApplicationFileDownloadDirectory:(NSString *)arg1 ;
-(void)setApplicationPackageUploadDirectory:(NSString *)arg1 ;
-(void)setApplicationPackageDownloadDirectory:(NSString *)arg1 ;
-(void)setApplicationRecordCacheDirectory:(NSString *)arg1 ;
-(NSString *)containerHardwareIDHash;
-(long long)usesAPSPublicToken;
-(long long)darkWakeEnabled;
-(void)setHasDataContainer:(BOOL)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(void)setFlowControlManager:(CKDFlowControlManager *)arg1 ;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(void)setPcsManager:(CKDPCSManager *)arg1 ;
-(CKDPublicIdentityLookupService *)foregroundPublicIdentityLookupService;
-(CKDPublicIdentityLookupService *)backgroundPublicIdentityLookupService;
-(void)setForegroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(void)setBackgroundZoneGatekeeper:(CKDZoneGatekeeper *)arg1 ;
-(void)setMescalSession:(CKDMescalSession *)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)applicationVersion;
-(void)setAccount:(CKDAccount *)arg1 ;
-(CKDAccount *)account;
-(CKDMescalSession *)mescalSession;
@end

