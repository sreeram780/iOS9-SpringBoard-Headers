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

@class NSString;

@interface RTEventAppLaunch : RTEvent <NSSecureCoding> {

	NSString* _bundleId;
	long long _appLaunchState;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long appLaunchState;              //@synthesize appLaunchState=_appLaunchState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromAppLaunchState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(long long)appLaunchState;
-(id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 source:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 locationIdentifier:(id)arg6 ;
@end

