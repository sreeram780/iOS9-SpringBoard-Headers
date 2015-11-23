/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)write:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

