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

@class NSString, CKDPRecord, CKDPDateStatistics;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _serverFields;
	CKDPDateStatistics* _timeStatistics;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;              //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,readonly) BOOL hasServerFields; 
@property (nonatomic,retain) CKDPRecord * serverFields;                        //@synthesize serverFields=_serverFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(void)setServerFields:(CKDPRecord *)arg1 ;
-(BOOL)hasTimeStatistics;
-(BOOL)hasServerFields;
-(CKDPDateStatistics *)timeStatistics;
-(CKDPRecord *)serverFields;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)readFrom:(id)arg1 ;
@end

