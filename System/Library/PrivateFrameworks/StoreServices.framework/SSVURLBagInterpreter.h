/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, SSVSAPSignaturePolicy, NSURL, NSDictionary, NSString;

@interface SSVURLBagInterpreter : NSObject <NSCopying> {

	NSMutableDictionary* _cachedBagValues;
	NSArray* _subscriptionSignedActions;
	SSVSAPSignaturePolicy* _subscriptionSignaturePolicy;
	NSURL* _mescalPrimingURL;

}

@property (nonatomic,copy,readonly) NSArray * AMDDomains; 
@property (nonatomic,copy,readonly) NSURL * mescalCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * mescalSetupURL; 
@property (nonatomic,copy,readonly) NSURL * mescalPrimingURL;                          //@synthesize mescalPrimingURL=_mescalPrimingURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedActions; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedRequests; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedResponses; 
@property (nonatomic,copy,readonly) NSString * storeFrontSuffix; 
-(id)initWithURLBag:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(id)_valueForKey:(id)arg1 withClass:(Class)arg2 ;
-(id)URLForURLBagKey:(id)arg1 ;
-(NSDictionary *)mescalSignedRequests;
-(NSDictionary *)mescalSignedActions;
-(NSDictionary *)mescalSignedResponses;
-(NSArray *)AMDDomains;
-(id)valueForURLBagKey:(id)arg1 ;
-(NSURL *)mescalCertificateURL;
-(NSURL *)mescalSetupURL;
-(id)mescalSignaturePolicyForRequestURL:(id)arg1 ;
-(id)mescalSignaturePolicyForResponseURL:(id)arg1 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(NSURL *)mescalPrimingURL;
@end

