/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _uploadTokens;

}

@property (nonatomic,retain) NSMutableArray * uploadTokens;              //@synthesize uploadTokens=_uploadTokens - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)uploadTokens;
-(void)addUploadTokens:(id)arg1 ;
-(unsigned long long)uploadTokensCount;
-(void)clearUploadTokens;
-(id)uploadTokensAtIndex:(unsigned long long)arg1 ;
-(void)setUploadTokens:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

