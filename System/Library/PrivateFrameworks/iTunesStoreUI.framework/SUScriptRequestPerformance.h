/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISURLRequestPerformance, NSString;

@interface SUScriptRequestPerformance : SUScriptObject {

	ISURLRequestPerformance* _performance;

}

@property (readonly) double finishInterval; 
@property (readonly) NSString * JSONHeaders; 
@property (readonly) double receivedResponseInterval; 
@property (readonly) double renderBeginInterval; 
@property (readonly) double renderEndInterval; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithRequestPerformance:(id)arg1 ;
-(double)renderEndInterval;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(NSString *)JSONHeaders;
@end

