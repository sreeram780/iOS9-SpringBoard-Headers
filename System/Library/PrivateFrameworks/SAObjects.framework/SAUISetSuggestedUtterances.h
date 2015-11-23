/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * utterances; 
+(id)setSuggestedUtterances;
+(id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)utterances;
-(void)setUtterances:(NSArray *)arg1 ;
@end

