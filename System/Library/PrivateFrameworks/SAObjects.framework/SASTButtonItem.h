/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SAUILocalImageResource, NSString;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedLabel; 
@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)buttonItem;
-(BOOL)centered;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(SAUIDecoratedText *)decoratedLabel;
-(void)setDecoratedLabel:(SAUIDecoratedText *)arg1 ;
@end

