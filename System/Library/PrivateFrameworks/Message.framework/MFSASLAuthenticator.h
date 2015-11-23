/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject {

	MFConnection* _connection;
	MFAuthScheme* _authScheme;
	MFAccount* _account;
	int _authenticationState;

}
-(void)dealloc;
-(id)saslName;
-(BOOL)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)justSentPlainTextPassword;
-(int)authenticationState;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(id)securityLayer;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
-(void)setMissingPasswordError;
-(id)account;
@end

