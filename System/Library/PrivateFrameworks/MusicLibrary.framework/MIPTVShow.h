/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPTVShow : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _episodeId;
	NSString* _episodeSortId;
	NSString* _networkName;
	int _seasonNumber;
	MIPSeries* _series;
	int _videoQuality;
	SCD_Struct_MI1 _has;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                    //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                    //@synthesize series=_series - In the implementation block
@property (assign,nonatomic) BOOL hasSeasonNumber; 
@property (assign,nonatomic) int seasonNumber;                      //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasEpisodeId; 
@property (nonatomic,retain) NSString * episodeId;                  //@synthesize episodeId=_episodeId - In the implementation block
@property (nonatomic,readonly) BOOL hasEpisodeSortId; 
@property (nonatomic,retain) NSString * episodeSortId;              //@synthesize episodeSortId=_episodeSortId - In the implementation block
@property (assign,nonatomic) BOOL hasVideoQuality; 
@property (assign,nonatomic) int videoQuality;                      //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkName; 
@property (nonatomic,retain) NSString * networkName;                //@synthesize networkName=_networkName - In the implementation block
-(MIPArtist *)artist;
-(void)setArtist:(MIPArtist *)arg1 ;
-(int)seasonNumber;
-(void)setSeasonNumber:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(void)setEpisodeId:(NSString *)arg1 ;
-(void)setEpisodeSortId:(NSString *)arg1 ;
-(BOOL)hasArtist;
-(BOOL)hasSeries;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(BOOL)hasSeasonNumber;
-(BOOL)hasEpisodeId;
-(BOOL)hasEpisodeSortId;
-(void)setHasVideoQuality:(BOOL)arg1 ;
-(BOOL)hasVideoQuality;
-(BOOL)hasNetworkName;
-(MIPSeries *)series;
-(NSString *)episodeId;
-(NSString *)episodeSortId;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
@end

