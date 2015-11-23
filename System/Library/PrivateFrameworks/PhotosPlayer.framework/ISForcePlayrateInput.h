/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISGestureInput.h>

@class ISDisplayLink;

@interface ISForcePlayrateInput : ISGestureInput {

	double _lastUpdate;
	double _smoothedVelocity;
	SCD_Struct_IS1 _cachedDurationCMTime;
	BOOL __active;
	ISDisplayLink* __displayLink;

}

@property (setter=_setDisplayLink:,nonatomic,retain) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
-(void)_setActive:(BOOL)arg1 ;
-(void)playerDidChange;
-(void)_setDisplayLink:(id)arg1 ;
-(ISDisplayLink *)_displayLink;
-(void)_handlePress:(id)arg1 ;
-(id)init;
-(long long)inputType;
-(void)_handleUpdate;
-(BOOL)_isTouching;
-(id)newGestureRecognizer;
-(BOOL)_active;
@end

