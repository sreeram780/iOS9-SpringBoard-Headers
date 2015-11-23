/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class Protocol;

@interface NSXPCInterface : NSObject {

	Protocol* _protocol;
	CFDictionaryRef _methods2;
	id _reserved1;

}

@property (assign) Protocol * protocol; 
+(id)mf_mailComposeRemoteServiceInterface;
+(id)mf_mailComposeRemoteHostInterface;
+(id)af_siriTaskDeliveringInterface;
+(id)signatureForBlock:(id)arg1 ;
+(id)interfaceWithProtocol:(id)arg1 ;
-(id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3 ;
-(id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2 ;
-(id)_verifiedMethodSignatureForSelector:(SEL)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2 ;
-(id)replyBlockSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Protocol *)protocol;
-(void)finalize;
-(void)setProtocol:(Protocol *)arg1 ;
@end

