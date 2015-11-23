/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {

	double _duration;
	unsigned long long _index;
	double _time;
	NSString* _title;
	NSURL* _url;
	int _markerType;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) double comparableTime; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkAtPlaybackTime; 
@property (assign,nonatomic) double time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double maxTime; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) int markerType;                             //@synthesize markerType=_markerType - In the implementation block
-(id)initWithMarkerType:(int)arg1 ;
-(id)urlTitleTrimmingCharacterSet;
-(double)comparableTime;
-(double)maxTime;
-(BOOL)hasArtworkAtPlaybackTime;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(NSURL *)url;
-(void)setDuration:(double)arg1 ;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(int)markerType;
-(NSDictionary *)metadata;
@end

