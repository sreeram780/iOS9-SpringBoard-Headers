/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACFPrincipal, NSDate, NSString, NSData;

@interface ACMToken : NSObject {

	ACFPrincipal* _principal;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	NSString* _nonce;
	NSData* _tokenData;

}

@property (retain) ACFPrincipal * principal;                    //@synthesize principal=_principal - In the implementation block
@property (retain) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * tokenString; 
@property (retain) NSData * tokenData;                          //@synthesize tokenData=_tokenData - In the implementation block
@property (retain) NSString * nonce;                            //@synthesize nonce=_nonce - In the implementation block
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenData:(id)arg3 ;
+(id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenString:(id)arg3 ;
-(NSData *)tokenData;
-(NSString *)nonce;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)dealloc;
-(ACFPrincipal *)principal;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setNonce:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setTokenString:(NSString *)arg1 ;
-(NSString *)tokenString;
@end

