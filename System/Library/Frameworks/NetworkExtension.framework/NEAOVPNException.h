/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying> {

	NSString* _serviceName;
	NSString* _bundleIdentifier;
	long long _action;

}

@property (copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long action;                       //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serviceName;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(long long)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

