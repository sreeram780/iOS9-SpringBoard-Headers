/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {

	NSString* _protectedName;
	long long _vfsOnce;
	NSString* _vfsName;
	BOOL _attached;

}

@property (nonatomic,readonly) BOOL isProtectedDatabaseAttached;              //@synthesize attached=_attached - In the implementation block
-(void)dealloc;
-(void)close;
-(BOOL)isProtectedDatabaseAttached;
-(int)attachProtectedDatabase;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 protectedName:(id)arg3 ;
-(int)detachProtectedDatabase;
-(const char*)_vfsModuleName;
@end

