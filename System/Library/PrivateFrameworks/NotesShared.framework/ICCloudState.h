/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, ICCloudSyncingObject;

@interface ICCloudState : NSManagedObject

@property (assign,nonatomic) BOOL inCloud; 
@property (assign,nonatomic) long long latestVersionSyncedToCloud; 
@property (assign,nonatomic) long long currentLocalVersion; 
@property (nonatomic,retain) NSDate * localVersionDate; 
@property (nonatomic,retain) ICCloudSyncingObject * cloudSyncingObject; 
-(BOOL)isInCloud;
@end

