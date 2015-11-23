/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CDPContext : NSObject {

	BOOL _isHSA2Account;
	BOOL _didUseSMSVerification;
	BOOL __useSecureBackupCachedPassphrase;
	NSDictionary* _authenticationResults;
	NSString* _appleID;
	NSString* _password;
	NSString* _passwordEquivToken;
	NSNumber* _dsid;
	NSString* _cachedLocalSecret;
	unsigned long long _cachedLocalSecretType;

}

@property (nonatomic,copy) NSDictionary * authenticationResults;                    //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                      //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivToken;                           //@synthesize passwordEquivToken=_passwordEquivToken - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                         //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) BOOL isHSA2Account;                                    //@synthesize isHSA2Account=_isHSA2Account - In the implementation block
@property (assign,nonatomic) BOOL didUseSMSVerification;                            //@synthesize didUseSMSVerification=_didUseSMSVerification - In the implementation block
@property (nonatomic,copy) NSString * cachedLocalSecret;                            //@synthesize cachedLocalSecret=_cachedLocalSecret - In the implementation block
@property (assign,nonatomic) unsigned long long cachedLocalSecretType;              //@synthesize cachedLocalSecretType=_cachedLocalSecretType - In the implementation block
@property (assign,nonatomic) BOOL _useSecureBackupCachedPassphrase;                 //@synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(NSString *)passwordEquivToken;
-(void)setPasswordEquivToken:(NSString *)arg1 ;
-(BOOL)isHSA2Account;
-(void)setIsHSA2Account:(BOOL)arg1 ;
-(void)setDidUseSMSVerification:(BOOL)arg1 ;
-(NSString *)cachedLocalSecret;
-(void)setCachedLocalSecret:(NSString *)arg1 ;
-(unsigned long long)cachedLocalSecretType;
-(void)setCachedLocalSecretType:(unsigned long long)arg1 ;
-(BOOL)_useSecureBackupCachedPassphrase;
-(void)set_useSecureBackupCachedPassphrase:(BOOL)arg1 ;
-(BOOL)didUseSMSVerification;
-(id)initWithAuthenticationResults:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(NSString *)appleID;
-(void)setDsid:(NSNumber *)arg1 ;
@end

