/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidFailToCreatePasscode : PBCodable <NSCopying> {

	int _error;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                  //@synthesize error=_error - In the implementation block
-(int)error;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasError;
@end

