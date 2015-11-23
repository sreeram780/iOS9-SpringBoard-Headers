/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSArray, NSString;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,copy) NSArray * decoratedValues; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyListItem;
+(id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(NSArray *)decoratedValues;
-(void)setDecoratedValues:(NSArray *)arg1 ;
@end

