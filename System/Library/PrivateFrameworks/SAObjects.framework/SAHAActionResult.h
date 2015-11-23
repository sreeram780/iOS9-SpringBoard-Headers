/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResult;
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(id)groupIdentifier;
-(SAHAEntity *)entity;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(void)setOutcome:(NSString *)arg1 ;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
-(NSString *)outcome;
-(id)encodedClassName;
-(void)setResultAttribute:(NSString *)arg1 ;
-(SAHAAttributeValue *)resultValue;
-(NSString *)resultAttribute;
@end

