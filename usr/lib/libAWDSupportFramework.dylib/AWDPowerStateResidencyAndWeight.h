/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {

	unsigned _residency;
	unsigned _weight;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasResidency; 
@property (assign,nonatomic) unsigned residency;              //@synthesize residency=_residency - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) unsigned weight;                 //@synthesize weight=_weight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)weight;
-(void)setWeight:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasWeight:(BOOL)arg1 ;
-(BOOL)hasWeight;
-(void)setResidency:(unsigned)arg1 ;
-(void)setHasResidency:(BOOL)arg1 ;
-(BOOL)hasResidency;
-(unsigned)residency;
@end

