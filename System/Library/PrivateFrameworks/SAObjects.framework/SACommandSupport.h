/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAObjectSupport, NSURL, NSArray;

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * commandId; 
@property (nonatomic,retain) SAObjectSupport * resultSupport; 
@property (nonatomic,copy) NSURL * serverEndpoint; 
@property (nonatomic,copy) NSArray * supportedConstraints; 
@property (assign,nonatomic) long long weight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandSupport;
+(id)commandSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)weight;
-(void)setWeight:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)aceVersion;
-(void)setAceVersion:(NSString *)arg1 ;
-(NSString *)commandId;
-(void)setCommandId:(NSString *)arg1 ;
-(SAObjectSupport *)resultSupport;
-(void)setResultSupport:(SAObjectSupport *)arg1 ;
-(NSURL *)serverEndpoint;
-(void)setServerEndpoint:(NSURL *)arg1 ;
-(NSArray *)supportedConstraints;
-(void)setSupportedConstraints:(NSArray *)arg1 ;
@end

