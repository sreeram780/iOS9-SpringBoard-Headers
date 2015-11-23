/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSObject, _SYSharedServiceDB;

@interface NMSPersistentDictionary : NSObject <NSLocking> {

	Class _objectClass;
	NSString* _path;
	CFStringRef _loggingFacility;
	NSObject*<OS_dispatch_semaphore> _lock;
	_SYSharedServiceDB* _sharedDB;
	sqlite3Ref _db;
	sqlite3_stmtRef _fetch;
	sqlite3_stmtRef _insert;
	sqlite3_stmtRef _reset;
	sqlite3_stmtRef _remove;
	sqlite3_stmtRef _removeAll;
	sqlite3_stmtRef _byDate;

}
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)_withDB:(/*^block*/id)arg1 ;
-(void)_ensureDBSchema;
-(id)_dataFromObject:(id)arg1 ;
-(id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(CFStringRef)arg3 ;
-(id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2 ;
-(void)resetObject:(id)arg1 forKey:(id)arg2 ;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_prepareStatements;
-(id)_objectFromData:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3 ;
-(void)enumerateObjectsSortedByExpirationDate:(/*^block*/id)arg1 ;
@end

