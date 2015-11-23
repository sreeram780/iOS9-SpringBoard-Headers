/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTMotionActivity;

@interface RTEventDeviceMotion : RTEvent <NSSecureCoding> {

	RTMotionActivity* _motionActivity;

}

@property (nonatomic,retain) RTMotionActivity * motionActivity;              //@synthesize motionActivity=_motionActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTMotionActivity *)motionActivity;
-(void)setMotionActivity:(RTMotionActivity *)arg1 ;
-(id)initWithMotionActivity:(id)arg1 source:(long long)arg2 locationIdentifier:(id)arg3 ;
@end

