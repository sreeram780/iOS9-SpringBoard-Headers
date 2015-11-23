/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSError;

@interface SLYahooUserInfoResponse : NSObject {

	long long _statusCode;
	NSString* _displayName;
	NSString* _emailAddress;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSError *)error;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(long long)statusCode;
-(NSString *)displayName;
-(NSString *)errorMessage;
-(NSString *)emailAddress;
@end

