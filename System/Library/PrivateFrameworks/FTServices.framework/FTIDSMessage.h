/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _identityKey;
	NSData* _identityCert;
	SecKeyRef _identityPublicKey;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _selfURI;
	NSMutableArray* _certDataArray;
	NSMutableArray* _publicKeyArray;
	NSMutableArray* _privateKeyArray;
	NSMutableArray* _userIDArray;

}

@property (assign,nonatomic) SecKeyRef pushPrivateKey;                    //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;                     //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                      //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * selfURI;                            //@synthesize selfURI=_selfURI - In the implementation block
@property (nonatomic,copy) NSMutableArray * certDataArray;                //@synthesize certDataArray=_certDataArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * publicKeyArray;               //@synthesize publicKeyArray=_publicKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * privateKeyArray;              //@synthesize privateKeyArray=_privateKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * userIDArray;                  //@synthesize userIDArray=_userIDArray - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPrivateKey;                //@synthesize identityKey=_identityKey - In the implementation block
@property (assign,nonatomic) SecKeyRef identityPublicKey;                 //@synthesize identityPublicKey=_identityPublicKey - In the implementation block
@property (nonatomic,copy) NSData * IDCertificate;                        //@synthesize identityCert=_identityCert - In the implementation block
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(NSString *)selfURI;
-(void)setSelfURI:(NSString *)arg1 ;
-(void)setIDCertificate:(NSData *)arg1 ;
-(void)setIdentityPrivateKey:(SecKeyRef)arg1 ;
-(void)setIdentityPublicKey:(SecKeyRef)arg1 ;
-(void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(SecKeyRef)arg3 publicKey:(SecKeyRef)arg4 ;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsIDSServer;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(SecKeyRef)pushPrivateKey;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(NSData *)IDCertificate;
-(long long)responseCommand;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
@end

