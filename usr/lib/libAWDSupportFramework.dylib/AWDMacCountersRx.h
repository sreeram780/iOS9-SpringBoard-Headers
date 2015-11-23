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

@interface AWDMacCountersRx : PBCodable <NSCopying> {

	unsigned long long _rxackucast;
	unsigned long long _rxcfrmmcast;
	unsigned long long _rxcfrmocast;
	unsigned long long _rxcfrmucast;
	unsigned long long _rxctsocast;
	unsigned long long _rxctsucast;
	unsigned long long _rxdfrmmcast;
	unsigned long long _rxdfrmocast;
	unsigned long long _rxdfrmucastmbss;
	unsigned long long _rxmfrmmcast;
	unsigned long long _rxmfrmocast;
	unsigned long long _rxmfrmucastmbss;
	unsigned long long _rxrtsocast;
	unsigned long long _rxrtsucast;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasRxdfrmucastmbss; 
@property (assign,nonatomic) unsigned long long rxdfrmucastmbss;              //@synthesize rxdfrmucastmbss=_rxdfrmucastmbss - In the implementation block
@property (assign,nonatomic) BOOL hasRxmfrmucastmbss; 
@property (assign,nonatomic) unsigned long long rxmfrmucastmbss;              //@synthesize rxmfrmucastmbss=_rxmfrmucastmbss - In the implementation block
@property (assign,nonatomic) BOOL hasRxcfrmucast; 
@property (assign,nonatomic) unsigned long long rxcfrmucast;                  //@synthesize rxcfrmucast=_rxcfrmucast - In the implementation block
@property (assign,nonatomic) BOOL hasRxrtsucast; 
@property (assign,nonatomic) unsigned long long rxrtsucast;                   //@synthesize rxrtsucast=_rxrtsucast - In the implementation block
@property (assign,nonatomic) BOOL hasRxctsucast; 
@property (assign,nonatomic) unsigned long long rxctsucast;                   //@synthesize rxctsucast=_rxctsucast - In the implementation block
@property (assign,nonatomic) BOOL hasRxackucast; 
@property (assign,nonatomic) unsigned long long rxackucast;                   //@synthesize rxackucast=_rxackucast - In the implementation block
@property (assign,nonatomic) BOOL hasRxdfrmocast; 
@property (assign,nonatomic) unsigned long long rxdfrmocast;                  //@synthesize rxdfrmocast=_rxdfrmocast - In the implementation block
@property (assign,nonatomic) BOOL hasRxmfrmocast; 
@property (assign,nonatomic) unsigned long long rxmfrmocast;                  //@synthesize rxmfrmocast=_rxmfrmocast - In the implementation block
@property (assign,nonatomic) BOOL hasRxcfrmocast; 
@property (assign,nonatomic) unsigned long long rxcfrmocast;                  //@synthesize rxcfrmocast=_rxcfrmocast - In the implementation block
@property (assign,nonatomic) BOOL hasRxrtsocast; 
@property (assign,nonatomic) unsigned long long rxrtsocast;                   //@synthesize rxrtsocast=_rxrtsocast - In the implementation block
@property (assign,nonatomic) BOOL hasRxctsocast; 
@property (assign,nonatomic) unsigned long long rxctsocast;                   //@synthesize rxctsocast=_rxctsocast - In the implementation block
@property (assign,nonatomic) BOOL hasRxdfrmmcast; 
@property (assign,nonatomic) unsigned long long rxdfrmmcast;                  //@synthesize rxdfrmmcast=_rxdfrmmcast - In the implementation block
@property (assign,nonatomic) BOOL hasRxmfrmmcast; 
@property (assign,nonatomic) unsigned long long rxmfrmmcast;                  //@synthesize rxmfrmmcast=_rxmfrmmcast - In the implementation block
@property (assign,nonatomic) BOOL hasRxcfrmmcast; 
@property (assign,nonatomic) unsigned long long rxcfrmmcast;                  //@synthesize rxcfrmmcast=_rxcfrmmcast - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRxdfrmucastmbss:(unsigned long long)arg1 ;
-(void)setHasRxdfrmucastmbss:(BOOL)arg1 ;
-(BOOL)hasRxdfrmucastmbss;
-(void)setRxmfrmucastmbss:(unsigned long long)arg1 ;
-(void)setHasRxmfrmucastmbss:(BOOL)arg1 ;
-(BOOL)hasRxmfrmucastmbss;
-(void)setRxcfrmucast:(unsigned long long)arg1 ;
-(void)setHasRxcfrmucast:(BOOL)arg1 ;
-(BOOL)hasRxcfrmucast;
-(void)setRxrtsucast:(unsigned long long)arg1 ;
-(void)setHasRxrtsucast:(BOOL)arg1 ;
-(BOOL)hasRxrtsucast;
-(void)setRxctsucast:(unsigned long long)arg1 ;
-(void)setHasRxctsucast:(BOOL)arg1 ;
-(BOOL)hasRxctsucast;
-(void)setRxackucast:(unsigned long long)arg1 ;
-(void)setHasRxackucast:(BOOL)arg1 ;
-(BOOL)hasRxackucast;
-(void)setRxdfrmocast:(unsigned long long)arg1 ;
-(void)setHasRxdfrmocast:(BOOL)arg1 ;
-(BOOL)hasRxdfrmocast;
-(void)setRxmfrmocast:(unsigned long long)arg1 ;
-(void)setHasRxmfrmocast:(BOOL)arg1 ;
-(BOOL)hasRxmfrmocast;
-(void)setRxcfrmocast:(unsigned long long)arg1 ;
-(void)setHasRxcfrmocast:(BOOL)arg1 ;
-(BOOL)hasRxcfrmocast;
-(void)setRxrtsocast:(unsigned long long)arg1 ;
-(void)setHasRxrtsocast:(BOOL)arg1 ;
-(BOOL)hasRxrtsocast;
-(void)setRxctsocast:(unsigned long long)arg1 ;
-(void)setHasRxctsocast:(BOOL)arg1 ;
-(BOOL)hasRxctsocast;
-(void)setRxdfrmmcast:(unsigned long long)arg1 ;
-(void)setHasRxdfrmmcast:(BOOL)arg1 ;
-(BOOL)hasRxdfrmmcast;
-(void)setRxmfrmmcast:(unsigned long long)arg1 ;
-(void)setHasRxmfrmmcast:(BOOL)arg1 ;
-(BOOL)hasRxmfrmmcast;
-(void)setRxcfrmmcast:(unsigned long long)arg1 ;
-(void)setHasRxcfrmmcast:(BOOL)arg1 ;
-(BOOL)hasRxcfrmmcast;
-(unsigned long long)rxdfrmucastmbss;
-(unsigned long long)rxmfrmucastmbss;
-(unsigned long long)rxcfrmucast;
-(unsigned long long)rxrtsucast;
-(unsigned long long)rxctsucast;
-(unsigned long long)rxackucast;
-(unsigned long long)rxdfrmocast;
-(unsigned long long)rxmfrmocast;
-(unsigned long long)rxcfrmocast;
-(unsigned long long)rxrtsocast;
-(unsigned long long)rxctsocast;
-(unsigned long long)rxdfrmmcast;
-(unsigned long long)rxmfrmmcast;
-(unsigned long long)rxcfrmmcast;
@end

