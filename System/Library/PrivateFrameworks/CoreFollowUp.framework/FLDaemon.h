/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSLock;

@interface FLDaemon : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;

}
+(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
+(id)sharedInstance;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectInterface;
-(id)init;
-(id)connection;
-(void)invalidateConnection;
@end

