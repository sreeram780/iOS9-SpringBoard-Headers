/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) double anchorValue; 
@property (nonatomic,readonly) double anchorTimeStamp; 
@property (nonatomic,readonly) double rate; 
+(double)currentTimeStamp;
+(id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(double)valueForTimeStamp:(double)arg1 ;
-(BOOL)isEqualToValueTiming:(id)arg1 ;
-(double)timeStampForValue:(double)arg1 ;
-(double)currentValue;
-(id)initWithValueTiming:(id)arg1 ;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(double)rate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

