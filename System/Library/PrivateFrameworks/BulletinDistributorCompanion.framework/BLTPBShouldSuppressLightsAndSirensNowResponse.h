/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {

	BOOL _shouldSuppress;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasShouldSuppress; 
@property (assign,nonatomic) BOOL shouldSuppress;                 //@synthesize shouldSuppress=_shouldSuppress - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShouldSuppress:(BOOL)arg1 ;
-(void)setHasShouldSuppress:(BOOL)arg1 ;
-(BOOL)hasShouldSuppress;
-(BOOL)shouldSuppress;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

