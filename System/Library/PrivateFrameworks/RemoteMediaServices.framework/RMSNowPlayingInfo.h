/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface RMSNowPlayingInfo : NSObject {

	BOOL _canSkipNext;
	BOOL _canSkipPrevious;
	BOOL _canWishlist;
	BOOL _hasChapterData;
	BOOL _likeable;
	int _revisionNumber;
	unsigned long long _itemID;
	unsigned long long _databaseID;
	NSString* _trackName;
	NSString* _artistName;
	NSString* _albumName;
	double _timestamp;
	double _timeRemaining;
	double _totalDuration;
	long long _mediaKind;
	long long _playbackState;
	long long _likedState;
	long long _scrubbableState;

}

@property (assign,nonatomic) unsigned long long itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSString * trackName;                         //@synthesize trackName=_trackName - In the implementation block
@property (nonatomic,retain) NSString * artistName;                        //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * albumName;                         //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) double totalDuration;                         //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) int revisionNumber;                           //@synthesize revisionNumber=_revisionNumber - In the implementation block
@property (assign,nonatomic) long long mediaKind;                          //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) long long playbackState;                      //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long likedState;                         //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) long long scrubbableState;                    //@synthesize scrubbableState=_scrubbableState - In the implementation block
@property (assign,nonatomic) BOOL canSkipNext;                             //@synthesize canSkipNext=_canSkipNext - In the implementation block
@property (assign,nonatomic) BOOL canSkipPrevious;                         //@synthesize canSkipPrevious=_canSkipPrevious - In the implementation block
@property (assign,nonatomic) BOOL canWishlist;                             //@synthesize canWishlist=_canWishlist - In the implementation block
@property (assign,nonatomic) BOOL hasChapterData;                          //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (assign,getter=isLikeable,nonatomic) BOOL likeable;              //@synthesize likeable=_likeable - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * artworkIdentifier; 
-(long long)likedState;
-(void)setLikedState:(long long)arg1 ;
-(void)setMediaKind:(long long)arg1 ;
-(unsigned long long)databaseID;
-(unsigned long long)itemID;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(long long)playbackState;
-(BOOL)isPlaying;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)protobuf;
-(void)setItemID:(unsigned long long)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(void)setPlaybackState:(long long)arg1 ;
-(void)setHasChapterData:(BOOL)arg1 ;
-(BOOL)hasChapterData;
-(id)initWithProtobuf:(id)arg1 ;
-(int)revisionNumber;
-(void)setRevisionNumber:(int)arg1 ;
-(void)setTrackName:(NSString *)arg1 ;
-(void)setLikeable:(BOOL)arg1 ;
-(void)setCanWishlist:(BOOL)arg1 ;
-(void)setCanSkipPrevious:(BOOL)arg1 ;
-(void)setCanSkipNext:(BOOL)arg1 ;
-(void)setScrubbableState:(long long)arg1 ;
-(NSString *)trackName;
-(long long)scrubbableState;
-(BOOL)canSkipNext;
-(BOOL)canSkipPrevious;
-(BOOL)canWishlist;
-(BOOL)isLikeable;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(long long)mediaKind;
@end

