/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVValueTiming.h>

@interface AVConcreteValueTiming : AVValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(double)rate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

