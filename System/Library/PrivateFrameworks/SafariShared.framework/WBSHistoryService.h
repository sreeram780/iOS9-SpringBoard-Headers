/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableSet, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore, NSURL, NSString;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _historyServiceQueue;
	NSMutableSet* _connectionsReceivingHistoryNotifications;
	WBSHistoryDatabaseAccessBroker* _databaseAccessBroker;
	WBSHistoryURLCompletionDataStore* _urlCompletionDataStore;

}

@property (nonatomic,readonly) WBSHistoryDatabaseAccessBroker * databaseAccessBroker;                  //@synthesize databaseAccessBroker=_databaseAccessBroker - In the implementation block
@property (nonatomic,readonly) WBSHistoryURLCompletionDataStore * urlCompletionDataStore;              //@synthesize urlCompletionDataStore=_urlCompletionDataStore - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(WBSHistoryDatabaseAccessBroker *)databaseAccessBroker;
-(void)registerConnectionForHistoryNotifications:(id)arg1 ;
-(void)unregisterConnectionForHistoryNotifications:(id)arg1 ;
-(NSURL *)databaseURL;
-(BOOL)_connectionIsEntitledToUseService:(id)arg1 ;
-(void)postHistoryNotificationToRegisteredConnections:(id)arg1 ;
-(WBSHistoryURLCompletionDataStore *)urlCompletionDataStore;
@end

