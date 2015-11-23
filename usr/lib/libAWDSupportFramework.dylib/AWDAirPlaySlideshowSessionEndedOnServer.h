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

@class NSString;

@interface AWDAirPlaySlideshowSessionEndedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _maxBPS;
	unsigned _maxPhotoBytes;
	unsigned _minBPS;
	unsigned _minPhotoBytes;
	unsigned _pauses;
	int _reason;
	NSString* _sessionUUID;
	unsigned _skipAheads;
	unsigned _skipBacks;
	unsigned _totalPhotos;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPhotos; 
@property (assign,nonatomic) unsigned totalPhotos;                      //@synthesize totalPhotos=_totalPhotos - In the implementation block
@property (assign,nonatomic) BOOL hasMinPhotoBytes; 
@property (assign,nonatomic) unsigned minPhotoBytes;                    //@synthesize minPhotoBytes=_minPhotoBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPhotoBytes; 
@property (assign,nonatomic) unsigned maxPhotoBytes;                    //@synthesize maxPhotoBytes=_maxPhotoBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMinBPS; 
@property (assign,nonatomic) unsigned minBPS;                           //@synthesize minBPS=_minBPS - In the implementation block
@property (assign,nonatomic) BOOL hasMaxBPS; 
@property (assign,nonatomic) unsigned maxBPS;                           //@synthesize maxBPS=_maxBPS - In the implementation block
@property (assign,nonatomic) BOOL hasPauses; 
@property (assign,nonatomic) unsigned pauses;                           //@synthesize pauses=_pauses - In the implementation block
@property (assign,nonatomic) BOOL hasSkipBacks; 
@property (assign,nonatomic) unsigned skipBacks;                        //@synthesize skipBacks=_skipBacks - In the implementation block
@property (assign,nonatomic) BOOL hasSkipAheads; 
@property (assign,nonatomic) unsigned skipAheads;                       //@synthesize skipAheads=_skipAheads - In the implementation block
-(void)setReason:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(NSString *)sessionUUID;
-(void)setTotalPhotos:(unsigned)arg1 ;
-(void)setHasTotalPhotos:(BOOL)arg1 ;
-(BOOL)hasTotalPhotos;
-(void)setMinPhotoBytes:(unsigned)arg1 ;
-(void)setHasMinPhotoBytes:(BOOL)arg1 ;
-(BOOL)hasMinPhotoBytes;
-(void)setMaxPhotoBytes:(unsigned)arg1 ;
-(void)setHasMaxPhotoBytes:(BOOL)arg1 ;
-(BOOL)hasMaxPhotoBytes;
-(void)setMinBPS:(unsigned)arg1 ;
-(void)setHasMinBPS:(BOOL)arg1 ;
-(BOOL)hasMinBPS;
-(void)setMaxBPS:(unsigned)arg1 ;
-(void)setHasMaxBPS:(BOOL)arg1 ;
-(BOOL)hasMaxBPS;
-(unsigned)totalPhotos;
-(unsigned)minPhotoBytes;
-(unsigned)maxPhotoBytes;
-(unsigned)minBPS;
-(unsigned)maxBPS;
-(void)setPauses:(unsigned)arg1 ;
-(void)setHasPauses:(BOOL)arg1 ;
-(BOOL)hasPauses;
-(void)setSkipBacks:(unsigned)arg1 ;
-(void)setHasSkipBacks:(BOOL)arg1 ;
-(BOOL)hasSkipBacks;
-(void)setSkipAheads:(unsigned)arg1 ;
-(void)setHasSkipAheads:(BOOL)arg1 ;
-(BOOL)hasSkipAheads;
-(unsigned)pauses;
-(unsigned)skipBacks;
-(unsigned)skipAheads;
@end

