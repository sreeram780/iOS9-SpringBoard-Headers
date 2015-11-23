/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, NSDictionary;

@interface TLITunesTone : NSObject {

	BOOL _purchased;
	BOOL _ringtone;
	BOOL _protected;
	BOOL _private;
	NSString* _identifier;
	NSString* _name;
	NSString* _filePath;
	NSNumber* _pid;
	NSString* _artworkFile;
	unsigned long long _duration;
	NSDictionary* _playbackProperties;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSNumber * pid;                                   //@synthesize pid=_pid - In the implementation block
@property (assign,getter=isPurchased,nonatomic) BOOL purchased;              //@synthesize purchased=_purchased - In the implementation block
@property (assign,getter=isRingtone,nonatomic) BOOL ringtone;                //@synthesize ringtone=_ringtone - In the implementation block
@property (nonatomic,copy) NSString * artworkFile;                           //@synthesize artworkFile=_artworkFile - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isProtected,nonatomic) BOOL protected;              //@synthesize protected=_protected - In the implementation block
@property (assign,getter=isPrivate,nonatomic) BOOL private;                  //@synthesize private=_private - In the implementation block
@property (nonatomic,copy) NSDictionary * playbackProperties;                //@synthesize playbackProperties=_playbackProperties - In the implementation block
-(void)_setIdentifier:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)duration;
-(NSString *)name;
-(NSString *)identifier;
-(void)_setDuration:(unsigned long long)arg1 ;
-(NSString *)filePath;
-(void)_setName:(id)arg1 ;
-(BOOL)isPrivate;
-(BOOL)isProtected;
-(BOOL)isRingtone;
-(BOOL)isPurchased;
-(id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2 ;
-(NSDictionary *)playbackProperties;
-(void)_setFilePath:(id)arg1 ;
-(void)_setPurchased:(BOOL)arg1 ;
-(void)_setPid:(id)arg1 ;
-(void)_setArtworkFile:(id)arg1 ;
-(void)_setProtected:(BOOL)arg1 ;
-(void)_setPrivate:(BOOL)arg1 ;
-(void)_setRingtone:(BOOL)arg1 ;
-(void)_setPlaybackProperties:(id)arg1 ;
-(NSString *)artworkFile;
-(NSNumber *)pid;
@end

