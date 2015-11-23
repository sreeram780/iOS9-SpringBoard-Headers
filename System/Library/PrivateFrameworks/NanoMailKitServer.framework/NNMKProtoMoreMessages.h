/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NNMKProtoMoreMessages : PBCodable <NSCopying> {

	NSMutableArray* _addedMessages;
	NSData* _dateForRequestingMoreMessages;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                             //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                  //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * addedMessages;                       //@synthesize addedMessages=_addedMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * dateForRequestingMoreMessages;               //@synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)setDateForRequestingMoreMessages:(NSData *)arg1 ;
-(BOOL)hasDateForRequestingMoreMessages;
-(NSData *)dateForRequestingMoreMessages;
-(void)addAddedMessage:(id)arg1 ;
-(unsigned long long)addedMessagesCount;
-(void)clearAddedMessages;
-(id)addedMessageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)addedMessages;
-(void)setAddedMessages:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

