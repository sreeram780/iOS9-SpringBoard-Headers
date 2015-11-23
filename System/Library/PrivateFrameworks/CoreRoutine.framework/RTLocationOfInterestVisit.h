/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _entryTime;
	NSDate* _exitTime;

}

@property (nonatomic,readonly) NSDate * entryTime;              //@synthesize entryTime=_entryTime - In the implementation block
@property (nonatomic,readonly) NSDate * exitTime;               //@synthesize exitTime=_exitTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)localizedDescription;
-(BOOL)_enteredAndExitedOnSameDay;
-(id)localizedTimeDetail;
-(id)localizedDateDetail;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)entryTime;
-(NSDate *)exitTime;
-(id)initWithEntryTime:(id)arg1 exitTime:(id)arg2 ;
@end

