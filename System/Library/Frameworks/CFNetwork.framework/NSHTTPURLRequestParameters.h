/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject {

	NSString* method;
	NSMutableDictionary* fields;
	NSArray* extraCookies;
	NSData* data;
	unsigned long long pageNotFoundCacheLifetime;
	BOOL shouldHandleCookies;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

