/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SLTwitterRequest, ACAccount, NSURL, NSDictionary;

@interface TWRequest : NSObject {

	SLTwitterRequest* _request;

}

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * parameters; 
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(id)signedURLRequest;
-(void)dealloc;
-(NSURL *)URL;
-(NSDictionary *)parameters;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(long long)requestMethod;
@end

