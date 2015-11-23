/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MFMailboxUid, NSURL, NSString;

@interface MFNanoBridgeSettingsAccountSpecificMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	MFMailboxUid* _mailboxUid;
	NSURL* _mailboxURL;
	NSString* _accountUniqueIdentifier;

}

@property (nonatomic,readonly) NSString * accountUniqueIdentifier;              //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * mailboxURL;                              //@synthesize mailboxURL=_mailboxURL - In the implementation block
@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValid;
-(int)type;
-(unsigned long long)level;
-(id)icon;
-(id)displayName;
-(id)initWithMailboxUid:(id)arg1 ;
-(id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2 ;
-(id)_mailboxUid;
-(NSURL *)mailboxURL;
-(void)invalidateCachedData;
-(NSString *)accountUniqueIdentifier;
@end
