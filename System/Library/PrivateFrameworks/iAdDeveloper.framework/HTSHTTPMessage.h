/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
-(NSMutableDictionary *)headers;
-(void)dealloc;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(NSString *)versionString;
-(void)setVersionString:(NSString *)arg1 ;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(id)valueForHeaderField:(id)arg1 ;
@end

