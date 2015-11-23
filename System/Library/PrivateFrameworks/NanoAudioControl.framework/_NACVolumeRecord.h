/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface _NACVolumeRecord : NSObject <NSCoding> {

	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _volumeValue;
	float _EUVolumeLimit;

}

@property (assign,nonatomic) float volumeValue;                                                        //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isMuted;
@end

