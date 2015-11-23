/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMicroblogSocialCredential, NSString;

@interface SAMicroblogSocialCredentialResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMicroblogSocialCredential * socialCredential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)socialCredentialResult;
+(id)socialCredentialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAMicroblogSocialCredential *)socialCredential;
-(void)setSocialCredential:(SAMicroblogSocialCredential *)arg1 ;
@end

