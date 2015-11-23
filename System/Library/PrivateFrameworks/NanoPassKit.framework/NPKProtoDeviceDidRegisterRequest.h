/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying> {

	NSMutableArray* _brokerRegionPushTopics;
	NSMutableArray* _tsmRegionPushTopics;
	NSMutableArray* _tsmRegionURLs;

}

@property (nonatomic,retain) NSMutableArray * tsmRegionPushTopics;                 //@synthesize tsmRegionPushTopics=_tsmRegionPushTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * tsmRegionURLs;                       //@synthesize tsmRegionURLs=_tsmRegionURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * brokerRegionPushTopics;              //@synthesize brokerRegionPushTopics=_brokerRegionPushTopics - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addTsmRegionPushTopics:(id)arg1 ;
-(void)addTsmRegionURLs:(id)arg1 ;
-(void)addBrokerRegionPushTopics:(id)arg1 ;
-(unsigned long long)tsmRegionPushTopicsCount;
-(void)clearTsmRegionPushTopics;
-(id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tsmRegionURLsCount;
-(void)clearTsmRegionURLs;
-(id)tsmRegionURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)brokerRegionPushTopicsCount;
-(void)clearBrokerRegionPushTopics;
-(id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tsmRegionPushTopics;
-(void)setTsmRegionPushTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tsmRegionURLs;
-(void)setTsmRegionURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)brokerRegionPushTopics;
-(void)setBrokerRegionPushTopics:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

