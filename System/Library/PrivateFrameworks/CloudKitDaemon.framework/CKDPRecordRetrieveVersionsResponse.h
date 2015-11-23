/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {

	NSMutableArray* _recordVersions;
	BOOL _isDeleted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasIsDeleted; 
@property (assign,nonatomic) BOOL isDeleted;                               //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordVersions;              //@synthesize recordVersions=_recordVersions - In the implementation block
-(BOOL)isDeleted;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addRecordVersions:(id)arg1 ;
-(unsigned long long)recordVersionsCount;
-(void)clearRecordVersions;
-(id)recordVersionsAtIndex:(unsigned long long)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(void)setHasIsDeleted:(BOOL)arg1 ;
-(BOOL)hasIsDeleted;
-(NSMutableArray *)recordVersions;
-(void)setRecordVersions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

