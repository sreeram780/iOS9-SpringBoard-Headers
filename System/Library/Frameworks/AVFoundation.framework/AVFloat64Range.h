/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVFloat64Range : NSObject <NSCopying> {

	double _minimum;
	double _maximum;

}

@property (nonatomic,readonly) double minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
+(id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)float64RangeWithAudioValueRange:(AudioValueRange)arg1 ;
-(id)initWithMinimum:(double)arg1 maximum:(double)arg2 ;
-(id)initWithAudioValueRange:(AudioValueRange)arg1 ;
-(double)minimum;
-(double)maximum;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

