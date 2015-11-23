/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface _UIDocumentStorage : NSObject {

	NSString* _scope;
	NSURL* _rootURL;

}

@property (readonly) NSURL * rootURL;                                  //@synthesize rootURL=_rootURL - In the implementation block
@property (getter=isUbiquitous,readonly) BOOL ubiquitous; 
-(void)dealloc;
-(id)initWithSearchScope:(id)arg1 rootURL:(id)arg2 ;
-(BOOL)isUbiquitous;
-(NSURL *)rootURL;
@end

