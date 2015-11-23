/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioUnit.h>
#import <libobjc.A.dylib/AVAudioMixing.h>

@class NSString;

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property (assign,nonatomic) BOOL bypass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
@end

