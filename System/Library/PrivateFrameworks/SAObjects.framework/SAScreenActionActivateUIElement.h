/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * elementId; 
+(id)activateUIElement;
+(id)activateUIElementWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)elementId;
-(void)setElementId:(NSString *)arg1 ;
@end

