/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)listSearch;
+(id)listSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderTrigger *)trigger;
-(BOOL)requiresResponse;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
@end

