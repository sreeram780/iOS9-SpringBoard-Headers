/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCInterface;

@interface CallDBMigrator : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(void)migrate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

