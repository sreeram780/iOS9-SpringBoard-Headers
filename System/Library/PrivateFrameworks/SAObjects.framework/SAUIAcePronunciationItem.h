/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)tts;
-(void)setTts:(NSString *)arg1 ;
@end

