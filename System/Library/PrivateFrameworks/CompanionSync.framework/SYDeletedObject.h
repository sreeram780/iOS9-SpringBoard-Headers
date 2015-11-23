/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/SYChange.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYObject, SYChange> {

	NSString* _sequencer;
	NSString* _syncId;

}

@property (nonatomic,retain) NSString * syncId;                          //@synthesize syncId=_syncId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer;                     //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,readonly) long long changeType; 
-(NSString *)syncId;
-(NSString *)sequencer;
-(id)initWithSyncId:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 sequencer:(id)arg2 ;
-(void)setSyncId:(NSString *)arg1 ;
-(NSString *)objectIdentifier;
-(long long)changeType;
@end

