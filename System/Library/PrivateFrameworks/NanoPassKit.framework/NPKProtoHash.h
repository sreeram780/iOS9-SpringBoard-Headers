/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoHash : PBCodable <NSCopying> {

	NSData* _hashData;

}

@property (nonatomic,readonly) BOOL hasHashData; 
@property (nonatomic,retain) NSData * hashData;               //@synthesize hashData=_hashData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHashData:(NSData *)arg1 ;
-(BOOL)hasHashData;
-(NSData *)hashData;
-(BOOL)readFrom:(id)arg1 ;
@end

