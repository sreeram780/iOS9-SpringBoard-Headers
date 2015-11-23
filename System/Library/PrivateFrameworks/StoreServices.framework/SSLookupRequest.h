/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	long long _personalizationStyle;
	SSLookupProperties* _properties;
	long long _resultFilters;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle; 
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) BOOL authenticatesIfNeeded; 
@property (assign,nonatomic) long long personalizationStyle;                             //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic) long long resultFilters;                                    //@synthesize resultFilters=_resultFilters - In the implementation block
@property (nonatomic,copy,readonly) SSLookupProperties * _lookupProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResultFilters:(long long)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(id)initWithLocation:(id)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(NSString *)keyProfile;
-(void)startWithLookupBlock:(/*^block*/id)arg1 ;
-(SSLookupProperties *)_lookupProperties;
-(void)_setTimeoutInterval:(id)arg1 ;
-(long long)resultFilters;
-(SSAuthenticationContext *)authenticationContext;
-(long long)personalizationStyle;
-(long long)localizationStyle;
-(BOOL)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(BOOL)arg1 ;
@end

