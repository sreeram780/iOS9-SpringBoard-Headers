/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateAction.h>

@class NSArray, NSNumber, NSString;

@interface SASTCommandTemplateAction : AceObject <SASTTemplateAction>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * delayInMilliSeconds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandTemplateAction;
+(id)commandTemplateActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)delayInMilliSeconds;
-(void)setDelayInMilliSeconds:(NSNumber *)arg1 ;
@end

