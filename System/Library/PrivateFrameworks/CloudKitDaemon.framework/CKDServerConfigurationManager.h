/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, CKDServerConfiguration, CKDGlobalConfigurationOperation, NSMutableDictionary, NSObject;

@interface CKDServerConfigurationManager : NSObject {

	BOOL _usesBackgroundSession;
	BOOL _allowsCellularAccess;
	int _iCloudEnvNotifToken;
	NSOperationQueue* _configurationQueue;
	CKDServerConfiguration* _globalConfiguration;
	CKDGlobalConfigurationOperation* _globalConfigurationOp;
	NSOperationQueue* _containerSpecificInfoQueue;
	NSMutableDictionary* _containerSpecificInfos;
	NSMutableDictionary* _containerSpecificInfoOperations;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL usesBackgroundSession;                                           //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                            //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,retain) NSOperationQueue * configurationQueue;                                //@synthesize configurationQueue=_configurationQueue - In the implementation block
@property (nonatomic,retain) CKDServerConfiguration * globalConfiguration;                         //@synthesize globalConfiguration=_globalConfiguration - In the implementation block
@property (nonatomic,retain) CKDGlobalConfigurationOperation * globalConfigurationOp;              //@synthesize globalConfigurationOp=_globalConfigurationOp - In the implementation block
@property (nonatomic,retain) NSOperationQueue * containerSpecificInfoQueue;                        //@synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfos;                         //@synthesize containerSpecificInfos=_containerSpecificInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfoOperations;                //@synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int iCloudEnvNotifToken;                                              //@synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken - In the implementation block
+(void)expireGlobalConfiguration;
+(void)expireConfigurationForContext:(id)arg1 ;
+(id)sharedManagerUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)usesBackgroundSession;
-(BOOL)allowsCellularAccess;
-(void)configurationForContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(void)publicURLForServerType:(long long)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)containerScopedUserIDForContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_behaviorOptionsChanged:(id)arg1 ;
-(void)_dropAllConfigurations;
-(CKDGlobalConfigurationOperation *)globalConfigurationOp;
-(void)setGlobalConfigurationOp:(CKDGlobalConfigurationOperation *)arg1 ;
-(NSOperationQueue *)configurationQueue;
-(id)_uniqueStringForContainerAndAccount:(id)arg1 ;
-(NSMutableDictionary *)containerSpecificInfoOperations;
-(NSMutableDictionary *)containerSpecificInfos;
-(NSOperationQueue *)containerSpecificInfoQueue;
-(void)fetchGlobalConfigWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContainerSpecificInfoForContext:(id)arg1 needUserID:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_expireGlobalConfiguration;
-(void)_expireConfigurationForContext:(id)arg1 ;
-(void)setConfigurationQueue:(NSOperationQueue *)arg1 ;
-(void)setContainerSpecificInfoQueue:(NSOperationQueue *)arg1 ;
-(void)setContainerSpecificInfos:(NSMutableDictionary *)arg1 ;
-(void)setContainerSpecificInfoOperations:(NSMutableDictionary *)arg1 ;
-(int)iCloudEnvNotifToken;
-(void)setICloudEnvNotifToken:(int)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setGlobalConfiguration:(CKDServerConfiguration *)arg1 ;
-(CKDServerConfiguration *)globalConfiguration;
@end

