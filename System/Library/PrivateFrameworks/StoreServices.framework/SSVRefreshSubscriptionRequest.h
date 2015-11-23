/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSString;

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	BOOL _requestingOfflineSlot;

}

@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                          //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,getter=isRequestingOfflineSlot,nonatomic) BOOL requestingOfflineSlot;              //@synthesize requestingOfflineSlot=_requestingOfflineSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)isRequestingOfflineSlot;
-(void)setRequestingOfflineSlot:(BOOL)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
@end

