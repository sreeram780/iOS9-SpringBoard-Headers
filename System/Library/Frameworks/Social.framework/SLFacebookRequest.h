/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString * accessToken; 
@property (assign) int responseDataFormat; 
-(id)preparedURLRequest;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(void)setResponseDataFormat:(int)arg1 ;
-(void)preflightRequest;
-(int)responseDataFormat;
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
@end

