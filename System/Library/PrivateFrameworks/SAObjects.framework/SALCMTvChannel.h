/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMTvChannel : SADomainObject

@property (nonatomic,copy) NSString * callSign; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSURL * streamUrl; 
+(id)tvChannel;
+(id)tvChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)callSign;
-(void)setCallSign:(NSString *)arg1 ;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
@end

