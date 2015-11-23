/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SADynamiteClientState, NSString, NSArray;

@interface SAGetDynamiteClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SADynamiteClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getDynamiteClientState;
+(id)getDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SADynamiteClientState *)clientState;
-(void)setClientState:(SADynamiteClientState *)arg1 ;
-(BOOL)requiresResponse;
@end

