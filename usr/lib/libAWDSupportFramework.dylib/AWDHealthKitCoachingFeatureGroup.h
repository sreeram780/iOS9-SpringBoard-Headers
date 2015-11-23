/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying> {

	NSMutableArray* _futures;
	NSMutableArray* _pasts;

}

@property (nonatomic,retain) NSMutableArray * pasts;                //@synthesize pasts=_pasts - In the implementation block
@property (nonatomic,retain) NSMutableArray * futures;              //@synthesize futures=_futures - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPasts:(NSMutableArray *)arg1 ;
-(void)setFutures:(NSMutableArray *)arg1 ;
-(void)addPast:(id)arg1 ;
-(void)addFuture:(id)arg1 ;
-(unsigned long long)pastsCount;
-(void)clearPasts;
-(id)pastAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)futuresCount;
-(void)clearFutures;
-(id)futureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pasts;
-(NSMutableArray *)futures;
@end

