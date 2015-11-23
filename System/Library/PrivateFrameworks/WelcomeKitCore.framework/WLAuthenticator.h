/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
#import <WelcomeKitCore/WLSocketHandler.h>
#import <libobjc.A.dylib/WLDeviceAuthenticatorProtocol.h>

@protocol OS_dispatch_source, OS_dispatch_queue, WLDeviceAuthenticationDelegate;
@class WLDeviceAuthentication, WLAuthenticationCredentials, NSData, NSMutableData, NSObject, WLSourceDevice;

@interface WLAuthenticator : WLSocketHandler <WLDeviceAuthenticatorProtocol> {

	int _sockfd;
	unsigned long long _state;
	WLDeviceAuthentication* _auth;
	WLAuthenticationCredentials* _credentials;
	CCECCryptorRef _ecPrivateKeyA;
	CCECCryptorRef _ecPublicKeyA;
	NSData* _ecKeyAData;
	NSData* _rnAData;
	CCECCryptorRef _ecPrivateKeyB;
	CCECCryptorRef _ecPublicKeyB;
	NSData* _ecKeyBData;
	NSData* _rnBData;
	NSData* _sourceCommitmentData;
	NSData* _localCertPEMData;
	NSData* _certBSignatureData;
	unsigned long long _pendingBlobDataSize;
	NSMutableData* _pendingBlobData;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _writeQueue;
	WLSourceDevice* _device;
	id<WLDeviceAuthenticationDelegate> _delegate;

}

@property (nonatomic,readonly) WLSourceDevice * device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<WLDeviceAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WLDeviceAuthenticationDelegate>)delegate;
-(void)resume;
-(void)pause;
-(WLSourceDevice *)device;
-(BOOL)_shouldForceAuthenticationError;
-(void)invalidateWithError:(id)arg1 ;
-(id)_authenticateCommandData;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_observeDataReadEvent;
-(void)handleDataReadEventWithSocket:(int)arg1 ;
-(id)_commandStringWithData:(id)arg1 ;
-(void)_generateAndSendPublicKey;
-(BOOL)_handlePublicKeyWithData:(id)arg1 ;
-(BOOL)_handleCommitmentValueWithData:(id)arg1 ;
-(BOOL)_handleRandomNumberWithData:(id)arg1 ;
-(void)_handleCommitmentValueOKWithData:(id)arg1 ;
-(void)_handleVerificationValueOKWithData:(id)arg1 ;
-(BOOL)_handleCertificateSignatureWithData:(id)arg1 ;
-(BOOL)_handleCertificateWithData:(id)arg1 ;
-(id)parseDataAsBlob:(id)arg1 ;
-(id)dataFromPEMFormattedData:(id)arg1 ;
-(id)_okResponseData;
-(void)parsePublicKeyDER:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDataAsBlob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pemFormattedCertificateData:(id)arg1 ;
-(void)_generateSelfSignedCertificateWithCompletion:(/*^block*/id)arg1 ;
-(void)_authenticationDidSucceed;
-(id)encodeECPublicKeyData:(id)arg1 ;
-(id)pemFormattedPublicKeyData:(id)arg1 ;
-(void)_appendBase64Data:(id)arg1 toString:(id)arg2 ;
-(unsigned long long)_publicKeyDERLength;
-(unsigned long long)_fieldTypeDERLength;
-(unsigned long long)_curveDERLength;
-(unsigned long long)_paramsDERLength;
-(char*)_fieldIntegerBytes;
-(char*)_fieldTypeOID;
-(char*)_keySeedBytes;
-(char*)_keyBCoefficientBytes;
-(char*)_keyACoefficientBytes;
-(char*)_keyCofactorBytes;
-(char*)_keyOrderBytes;
-(char*)_keyBasePointBytes;
-(char*)_keyVersionBytes;
-(char*)_keyTypeOID;
-(unsigned long long)_ecPublicKeyEncodedDERLength;
-(void)handleReceivedData:(id)arg1 ;
-(void)cancelAuthenticationWithReply:(/*^block*/id)arg1 ;
-(id)initWithSourceDevice:(id)arg1 delegate:(id)arg2 ;
@end

