/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * useCaseId; 
+(id)supportedIntentResponse;
+(id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)useCaseId;
-(void)setUseCaseId:(NSString *)arg1 ;
@end

