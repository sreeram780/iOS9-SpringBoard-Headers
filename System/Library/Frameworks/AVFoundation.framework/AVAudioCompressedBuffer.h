/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic,readonly) unsigned packetCapacity; 
@property (assign,nonatomic) unsigned packetCount; 
@property (nonatomic,readonly) long long maximumPacketSize; 
@property (nonatomic,readonly) void* data; 
@property (nonatomic,readonly) AudioStreamPacketDescription* packetDescriptions; 
-(unsigned)packetCapacity;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 maximumPacketSize:(long long)arg3 ;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 ;
-(long long)maximumPacketSize;
-(void*)data;
-(AudioStreamPacketDescription*)packetDescriptions;
-(unsigned)packetCount;
-(void)setPacketCount:(unsigned)arg1 ;
@end

