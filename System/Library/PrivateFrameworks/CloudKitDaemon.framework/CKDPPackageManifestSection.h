/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {

	long long _size;
	NSData* _signature;
	BOOL _lastSection;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasLastSection; 
@property (assign,nonatomic) BOOL lastSection;                 //@synthesize lastSection=_lastSection - In the implementation block
-(long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(void)setLastSection:(BOOL)arg1 ;
-(void)setHasLastSection:(BOOL)arg1 ;
-(BOOL)hasLastSection;
-(NSData *)signature;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)lastSection;
@end

