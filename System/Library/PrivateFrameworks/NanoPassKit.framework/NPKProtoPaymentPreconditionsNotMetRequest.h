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

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {

	int _failedPrecondition;
	NSMutableArray* _passIDs;

}

@property (assign,nonatomic) int failedPrecondition;                //@synthesize failedPrecondition=_failedPrecondition - In the implementation block
@property (nonatomic,retain) NSMutableArray * passIDs;              //@synthesize passIDs=_passIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)failedPrecondition;
-(NSMutableArray *)passIDs;
-(void)addPassIDs:(id)arg1 ;
-(unsigned long long)passIDsCount;
-(void)clearPassIDs;
-(id)passIDsAtIndex:(unsigned long long)arg1 ;
-(void)setFailedPrecondition:(int)arg1 ;
-(void)setPassIDs:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

