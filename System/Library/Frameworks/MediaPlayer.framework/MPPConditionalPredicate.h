/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {

	MPPMediaPredicate* _conditionalPredicate;
	MPPMediaPredicate* _elsePredicate;
	MPPMediaPredicate* _thenPredicate;

}

@property (nonatomic,readonly) BOOL hasConditionalPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * conditionalPredicate;              //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasThenPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * thenPredicate;                     //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasElsePredicate; 
@property (nonatomic,retain) MPPMediaPredicate * elsePredicate;                     //@synthesize elsePredicate=_elsePredicate - In the implementation block
-(MPPMediaPredicate *)conditionalPredicate;
-(BOOL)hasConditionalPredicate;
-(BOOL)hasThenPredicate;
-(MPPMediaPredicate *)thenPredicate;
-(BOOL)hasElsePredicate;
-(MPPMediaPredicate *)elsePredicate;
-(void)setConditionalPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setThenPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setElsePredicate:(MPPMediaPredicate *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

