/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NEProxySettings, NSUUID, NEKeychainItem, NEDNSSettings, NEIdentityKeychainItem;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding> {

	BOOL _disconnectOnSleep;
	BOOL _disconnectOnWake;
	BOOL _identityDataImported;
	BOOL _disconnectOnIdle;
	BOOL _disconnectOnUserSwitch;
	BOOL _disconnectOnLogout;
	int _disconnectOnWakeTimeout;
	int _disconnectOnIdleTimeout;
	NSString* _serverAddress;
	NSString* _username;
	NSData* _passwordReference;
	NSString* _identityDataPassword;
	NEProxySettings* _proxySettings;
	NSUUID* _identifier;
	long long _type;
	NEKeychainItem* _passwordKeychainItem;
	NSString* _passwordEncryption;
	NSData* _identityDataInternal;
	NSData* _identityDataHash;
	NEKeychainItem* _identityDataPasswordKeychainItem;
	NEDNSSettings* _DNSSettings;
	long long _keychainDomain;
	NSString* _keychainAccessGroup;
	NEIdentityKeychainItem* _identity;

}

@property (copy) NSString * serverAddress;                                       //@synthesize serverAddress=_serverAddress - In the implementation block
@property (copy) NSString * username;                                            //@synthesize username=_username - In the implementation block
@property (copy) NSData * passwordReference;                                     //@synthesize passwordReference=_passwordReference - In the implementation block
@property (copy) NSData * identityReference; 
@property (copy) NSData * identityData; 
@property (copy) NSString * identityDataPassword;                                //@synthesize identityDataPassword=_identityDataPassword - In the implementation block
@property (assign) BOOL disconnectOnSleep;                                       //@synthesize disconnectOnSleep=_disconnectOnSleep - In the implementation block
@property (copy) NEProxySettings * proxySettings;                                //@synthesize proxySettings=_proxySettings - In the implementation block
@property (copy) NSUUID * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign) BOOL disconnectOnWake;                                        //@synthesize disconnectOnWake=_disconnectOnWake - In the implementation block
@property (assign) int disconnectOnWakeTimeout;                                  //@synthesize disconnectOnWakeTimeout=_disconnectOnWakeTimeout - In the implementation block
@property (copy) NEKeychainItem * passwordKeychainItem;                          //@synthesize passwordKeychainItem=_passwordKeychainItem - In the implementation block
@property (copy) NSString * passwordEncryption;                                  //@synthesize passwordEncryption=_passwordEncryption - In the implementation block
@property (copy) NSData * identityReferenceInternal; 
@property (copy) NSData * identityDataInternal;                                  //@synthesize identityDataInternal=_identityDataInternal - In the implementation block
@property (assign) BOOL identityDataImported;                                    //@synthesize identityDataImported=_identityDataImported - In the implementation block
@property (copy) NSData * identityDataHash;                                      //@synthesize identityDataHash=_identityDataHash - In the implementation block
@property (copy) NEKeychainItem * identityDataPasswordKeychainItem;              //@synthesize identityDataPasswordKeychainItem=_identityDataPasswordKeychainItem - In the implementation block
@property (copy) NEDNSSettings * DNSSettings;                                    //@synthesize DNSSettings=_DNSSettings - In the implementation block
@property (assign) BOOL disconnectOnIdle;                                        //@synthesize disconnectOnIdle=_disconnectOnIdle - In the implementation block
@property (assign) int disconnectOnIdleTimeout;                                  //@synthesize disconnectOnIdleTimeout=_disconnectOnIdleTimeout - In the implementation block
@property (assign) BOOL disconnectOnUserSwitch;                                  //@synthesize disconnectOnUserSwitch=_disconnectOnUserSwitch - In the implementation block
@property (assign) BOOL disconnectOnLogout;                                      //@synthesize disconnectOnLogout=_disconnectOnLogout - In the implementation block
@property (assign) long long keychainDomain;                                     //@synthesize keychainDomain=_keychainDomain - In the implementation block
@property (retain) NSString * keychainAccessGroup;                               //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
@property (retain) NEIdentityKeychainItem * identity;                            //@synthesize identity=_identity - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIdentity:(NEIdentityKeychainItem *)arg1 ;
-(NSString *)serverAddress;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)keychainDomain;
-(void)setKeychainDomain:(long long)arg1 ;
-(NEKeychainItem *)passwordKeychainItem;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)setDisconnectOnWake:(BOOL)arg1 ;
-(id)copyLegacyDictionary;
-(NSString *)keychainAccessGroup;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(void)removeKeychainItemsInDomain:(long long)arg1 ;
-(void)migratePasswordsFromPreferences:(SCPreferencesRef)arg1 ;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(SCNetworkInterfaceRef)createInterface;
-(NSData *)passwordReference;
-(NSString *)passwordEncryption;
-(NSData *)identityDataInternal;
-(NSString *)identityDataPassword;
-(NEKeychainItem *)identityDataPasswordKeychainItem;
-(BOOL)identityDataImported;
-(NSData *)identityDataHash;
-(NEProxySettings *)proxySettings;
-(BOOL)disconnectOnIdle;
-(int)disconnectOnIdleTimeout;
-(BOOL)disconnectOnSleep;
-(BOOL)disconnectOnWake;
-(int)disconnectOnWakeTimeout;
-(NEDNSSettings *)DNSSettings;
-(id)initWithProtocolIdentifier:(id)arg1 ;
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(void)setIdentityDataInternal:(NSData *)arg1 ;
-(void)setIdentityDataPassword:(NSString *)arg1 ;
-(void)setIdentityDataPasswordKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setIdentityDataImported:(BOOL)arg1 ;
-(void)setIdentityDataHash:(NSData *)arg1 ;
-(void)setProxySettings:(NEProxySettings *)arg1 ;
-(void)setDisconnectOnIdle:(BOOL)arg1 ;
-(void)setDisconnectOnIdleTimeout:(int)arg1 ;
-(void)setDisconnectOnSleep:(BOOL)arg1 ;
-(void)setDisconnectOnWakeTimeout:(int)arg1 ;
-(void)setPasswordKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setPasswordEncryption:(NSString *)arg1 ;
-(void)setDNSSettings:(NEDNSSettings *)arg1 ;
-(id)type2str;
-(NSData *)identityReference;
-(void)addDisconnectOptions:(id)arg1 ;
-(void)initDisconnectOptions:(id)arg1 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setIdentityReferenceInternal:(NSData *)arg1 ;
-(NSData *)identityReferenceInternal;
-(void)syncWithKeychainInDomainCommon:(long long)arg1 ;
-(void)setIdentityData:(NSData *)arg1 ;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSData *)identityData;
-(void)copyPasswordsFromKeychainInDomain:(long long)arg1 ;
-(BOOL)disconnectOnUserSwitch;
-(void)setDisconnectOnUserSwitch:(BOOL)arg1 ;
-(BOOL)disconnectOnLogout;
-(void)setDisconnectOnLogout:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NEIdentityKeychainItem *)identity;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

