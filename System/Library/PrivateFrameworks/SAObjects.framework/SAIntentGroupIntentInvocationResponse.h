/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL backgroundLaunch; 
@property (nonatomic,copy) NSString * launchId; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSString * utterance; 
+(id)intentInvocationResponse;
+(id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(BOOL)backgroundLaunch;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
@end

