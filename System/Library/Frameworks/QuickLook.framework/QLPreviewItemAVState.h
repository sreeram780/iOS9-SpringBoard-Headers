/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLPreviewItemAVState : NSObject <NSSecureCoding> {

	BOOL playing;
	double position;
	double duration;

}

@property (assign) double position; 
@property (assign) double duration; 
@property (getter=isPlaying) BOOL playing; 
+(id)avStateWithPosition:(double)arg1 duration:(double)arg2 playing:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isPlaying;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)setPlaying:(BOOL)arg1 ;
@end

