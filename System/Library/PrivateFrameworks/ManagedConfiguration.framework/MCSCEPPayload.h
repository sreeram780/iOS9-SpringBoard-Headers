/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSString, NSArray, NSData, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload {

	NSString* _URLString;
	NSString* _CAInstanceName;
	NSString* _challenge;
	NSArray* _subject;
	unsigned long long _keySize;
	int _usageFlags;
	NSData* _CAFingerprint;
	NSArray* _CACaps;
	NSDictionary* _subjectAltName;
	unsigned long long _retries;
	unsigned long long _retryDelay;

}

@property (nonatomic,retain,readonly) NSString * URLString;                       //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain,readonly) NSString * CAInstanceName;                  //@synthesize CAInstanceName=_CAInstanceName - In the implementation block
@property (nonatomic,retain,readonly) NSData * CAFingerprint;                     //@synthesize CAFingerprint=_CAFingerprint - In the implementation block
@property (nonatomic,retain,readonly) NSArray * CACaps;                           //@synthesize CACaps=_CACaps - In the implementation block
@property (nonatomic,retain,readonly) NSString * challenge;                       //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain,readonly) NSArray * subject;                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) unsigned long long keySize;                        //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,readonly) int usageFlags;                                    //@synthesize usageFlags=_usageFlags - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * subjectAltName;              //@synthesize subjectAltName=_subjectAltName - In the implementation block
@property (nonatomic,readonly) unsigned long long retries;                        //@synthesize retries=_retries - In the implementation block
@property (nonatomic,readonly) unsigned long long retryDelay;                     //@synthesize retryDelay=_retryDelay - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)URLString;
-(NSArray *)subject;
-(unsigned long long)retries;
-(NSString *)challenge;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(SecCertificateRef)copyCertificate;
-(SecIdentityRef)copyIdentityFromKeychain;
-(BOOL)isIdentity;
-(NSString *)CAInstanceName;
-(unsigned long long)keySize;
-(int)usageFlags;
-(NSData *)CAFingerprint;
-(NSArray *)CACaps;
-(NSDictionary *)subjectAltName;
-(unsigned long long)retryDelay;
-(BOOL)isRoot;
@end

