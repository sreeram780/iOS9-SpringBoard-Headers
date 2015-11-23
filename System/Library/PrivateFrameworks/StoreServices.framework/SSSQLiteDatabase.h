/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	BOOL _readOnly;
	BOOL _isInTransaction;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	BOOL _takesTaskCompletionAssertions;
	SBSProcessAssertionRef _taskAssertion;
	long long _taskAssertionCount;

}

@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
@property (assign) BOOL takesTaskCompletionAssertions; 
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(void)dealloc;
-(long long)userVersion;
-(BOOL)executeSQL:(id)arg1 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)setSetupBlock:(id)arg1 ;
-(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(int)_openDatabase;
-(void)_endTaskCompletionAssertion;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(BOOL)_resetDatabaseWithPath:(id)arg1 ;
-(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(long long)countChanges;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)takesTaskCompletionAssertions;
-(id)setupBlock;
@end

