/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setSourceLine:(int)arg1 ;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
@end

