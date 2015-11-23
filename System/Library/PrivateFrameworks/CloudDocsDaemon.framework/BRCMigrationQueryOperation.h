/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class NSString, CKQueryCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {

	NSString* _migrationKey;
	CKQueryCursor* _continuationCursor;
	NSMutableArray* _recordsWithShareID;

}
+(id)shareIDsMigrationKey;
+(id)allMigrationKeysOrdered;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3 ;
-(BOOL)hasCaughtUp;
-(BOOL)isConsistent;
-(void)_performAfterQueryingForShareIDs:(/*^block*/id)arg1 ;
@end
