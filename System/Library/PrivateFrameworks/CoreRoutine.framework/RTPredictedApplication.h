/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTApplication, RTSource;

@interface RTPredictedApplication : NSObject <NSSecureCoding, NSCopying> {

	RTApplication* _application;
	long long _reason;
	RTSource* _source;
	double _confidence;

}

@property (nonatomic,readonly) RTApplication * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) RTSource * source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)reasonToString:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTSource *)source;
-(void)setSource:(RTSource *)arg1 ;
-(long long)reason;
-(double)confidence;
-(RTApplication *)application;
-(id)initWithApplication:(id)arg1 reason:(long long)arg2 confidence:(double)arg3 source:(id)arg4 ;
@end

