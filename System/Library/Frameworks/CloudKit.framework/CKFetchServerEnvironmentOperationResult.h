/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKFetchServerEnvironmentOperationResult : CKOperationResult <NSSecureCoding> {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
@end

