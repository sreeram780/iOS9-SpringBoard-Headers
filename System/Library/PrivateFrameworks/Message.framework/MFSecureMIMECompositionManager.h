/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;
#import <Message/Message-Structs.h>
@class NSLock, NSObject, MailAccount, NSString, MFError, NSMutableSet, NSMutableDictionary, NSSet;

@interface MFSecureMIMECompositionManager : NSObject {

	id<MFSecureMIMECompositionManagerDelegate> _delegate;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	MailAccount* _sendingAccount;
	NSString* _sendingAddress;
	SecIdentityRef _signingIdentity;
	MFError* _signingIdentityError;
	SecIdentityRef _encryptionIdentity;
	MFError* _encryptionIdentityError;
	NSMutableSet* _recipients;
	NSMutableDictionary* _errorsByRecipient;
	NSMutableDictionary* _certificatesByRecipient;
	int _signingPolicy;
	int _encryptionPolicy;
	int _signingStatus;
	int _encryptionStatus;
	unsigned long long _encryptionStatusSemaphore;
	unsigned long long _signingStatusSemaphore;
	BOOL _invalidated;

}

@property (assign) id<MFSecureMIMECompositionManagerDelegate> delegate; 
@property (copy) NSString * sendingAddress; 
@property (readonly) MailAccount * sendingAccount; 
@property (readonly) int signingPolicy; 
@property (readonly) int encryptionPolicy; 
@property (readonly) int signingStatus; 
@property (readonly) int encryptionStatus; 
@property (readonly) NSSet * recipients; 
+(SecIdentityRef)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(SecIdentityRef)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(id)compositionSpecification;
-(void)removeRecipients:(id)arg1 ;
-(MailAccount *)sendingAccount;
-(int)signingPolicy;
-(int)encryptionPolicy;
-(NSString *)sendingAddress;
-(id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3 ;
-(int)encryptionStatus;
-(NSSet *)recipients;
-(void)setDelegate:(id<MFSecureMIMECompositionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MFSecureMIMECompositionManagerDelegate>)delegate;
-(void)invalidate;
-(void)addRecipients:(id)arg1 ;
-(BOOL)_updateSigningStatus_nts;
-(BOOL)_updateEncryptionStatus_nts;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(SecIdentityRef)arg4 error:(id)arg5 ;
-(void)_determineEncryptionStatusWithNewRecipients:(id)arg1 ;
-(void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(SecIdentityRef)arg2 error:(id)arg3 ;
-(void)_determineSigningStatusWithSendingAddress:(id)arg1 ;
-(void)_determineEncryptionStatusWithSendingAddress:(id)arg1 ;
-(void)_setSigningIdentityError_nts:(id)arg1 ;
-(void)_setEncryptionIdentityError_nts:(id)arg1 ;
-(BOOL)_shouldAllowSend_nts;
-(BOOL)_shouldSign_nts;
-(BOOL)_shouldEncrypt_nts;
-(id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(int)signingStatus;
-(BOOL)shouldAllowSend;
@end

