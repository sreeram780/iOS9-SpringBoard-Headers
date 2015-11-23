/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HDSQLiteDatabase;

@interface HDDatabaseMigrator : NSObject {

	HDSQLiteDatabase* _database;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)init;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3 ;
-(long long)migrateProtectedDatabaseFromVersion:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(long long)migrateUnprotectedDatabaseFromVersion:(long long)arg1 error:(id*)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)executeSQLStatements:(id)arg1 error:(id*)arg2 ;
-(long long)statusForUnhandledVersion:(long long)arg1 error:(id*)arg2 ;
-(long long)fatalStatusForVersion:(long long)arg1 errorMessage:(id)arg2 error:(id*)arg3 ;
-(HDSQLiteDatabase *)database;
@end

