/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * condition; 
@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) BOOL autoContinue; 
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(NSString *)condition;
-(void)setCondition:(NSString *)arg1 ;
-(void)setAutoContinue:(BOOL)arg1 ;
-(BOOL)autoContinue;
@end

