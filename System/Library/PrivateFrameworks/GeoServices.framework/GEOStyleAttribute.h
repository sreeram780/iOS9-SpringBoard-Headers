/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStyleAttribute : PBCodable <NSCopying> {

	unsigned _key;
	unsigned _value;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) unsigned key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)key;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(unsigned)arg1 ;
-(BOOL)hasKey;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
@end

