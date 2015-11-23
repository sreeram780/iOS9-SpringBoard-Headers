/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface YTUserProfile : NSObject {

	NSString* _username;
	long long _age;
	long long _maxUploadDuration;

}

@property (nonatomic,readonly) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) long long age;                            //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) long long maxUploadDuration;              //@synthesize maxUploadDuration=_maxUploadDuration - In the implementation block
-(NSString *)username;
-(id)initWithUsername:(id)arg1 age:(long long)arg2 maxUploadDuration:(long long)arg3 ;
-(long long)maxUploadDuration;
-(long long)age;
@end

