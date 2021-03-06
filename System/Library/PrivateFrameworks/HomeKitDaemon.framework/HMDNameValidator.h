/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSUUID;

@interface HMDNameValidator : NSObject {

	NSMutableDictionary* _namespaceList;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _homeManagerUUID;

}

@property (nonatomic,copy) NSMutableDictionary * namespaceList;                   //@synthesize namespaceList=_namespaceList - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSUUID * homeManagerUUID;                            //@synthesize homeManagerUUID=_homeManagerUUID - In the implementation block
-(id)initWithUUID:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)addName:(id)arg1 namespace:(id)arg2 ;
-(id)removeName:(id)arg1 namespace:(id)arg2 ;
-(id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 ;
-(id)_addNamespace:(id)arg1 ;
-(NSMutableDictionary *)namespaceList;
-(id)_despaceName:(id)arg1 ;
-(id)_removeName:(id)arg1 namespace:(id)arg2 ;
-(id)_addName:(id)arg1 namespace:(id)arg2 ;
-(id)_removeNamespace:(id)arg1 ;
-(id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 ;
-(id)addNamespace:(id)arg1 ;
-(id)removeNamespace:(id)arg1 ;
-(void)setNamespaceList:(NSMutableDictionary *)arg1 ;
-(NSUUID *)homeManagerUUID;
-(void)setHomeManagerUUID:(NSUUID *)arg1 ;
-(id)_validateName:(id)arg1 ;
@end

