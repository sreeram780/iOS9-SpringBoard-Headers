/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSURL, NSData, NSDictionary;

@interface FAFamilyNotification : NSObject <NSSecureCoding> {

	BOOL _shouldPersistWhenActivated;
	BOOL _shouldPersistWhenDismissed;
	BOOL _hasActionButton;
	NSString* _identifier;
	NSString* _title;
	NSString* _informativeText;
	NSDate* _relevanceDate;
	NSDate* _expiryDate;
	NSNumber* _familyMemberDSID;
	unsigned long long _displayStyle;
	NSString* _actionButtonLabel;
	NSString* _otherButtonLabel;
	NSString* _unlockActionLabel;
	NSURL* _activateActionURL;
	NSURL* _dismissActionlURL;
	NSURL* _clearActionURL;
	NSURL* _launchActionURL;
	NSData* _launchActionArguments;
	NSDictionary* _userInfo;
	NSString* _uuid;
	NSString* _clientIdentifier;
	NSString* _delegateMachServiceName;

}

@property (copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (copy) NSString * informativeText;                      //@synthesize informativeText=_informativeText - In the implementation block
@property (copy) NSDate * relevanceDate;                          //@synthesize relevanceDate=_relevanceDate - In the implementation block
@property (copy) NSDate * expiryDate;                             //@synthesize expiryDate=_expiryDate - In the implementation block
@property (copy) NSNumber * familyMemberDSID;                     //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (assign) unsigned long long displayStyle;               //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign) BOOL shouldPersistWhenActivated;               //@synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated - In the implementation block
@property (assign) BOOL shouldPersistWhenDismissed;               //@synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed - In the implementation block
@property (copy) NSString * actionButtonLabel;                    //@synthesize actionButtonLabel=_actionButtonLabel - In the implementation block
@property (copy) NSString * otherButtonLabel;                     //@synthesize otherButtonLabel=_otherButtonLabel - In the implementation block
@property (assign) BOOL hasActionButton;                          //@synthesize hasActionButton=_hasActionButton - In the implementation block
@property (copy) NSString * unlockActionLabel;                    //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (copy) NSURL * activateActionURL;                       //@synthesize activateActionURL=_activateActionURL - In the implementation block
@property (copy) NSURL * dismissActionlURL;                       //@synthesize dismissActionlURL=_dismissActionlURL - In the implementation block
@property (copy) NSURL * clearActionURL;                          //@synthesize clearActionURL=_clearActionURL - In the implementation block
@property (copy) NSURL * launchActionURL;                         //@synthesize launchActionURL=_launchActionURL - In the implementation block
@property (copy) NSData * launchActionArguments;                  //@synthesize launchActionArguments=_launchActionArguments - In the implementation block
@property (copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSString * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (copy) NSString * delegateMachServiceName;              //@synthesize delegateMachServiceName=_delegateMachServiceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)expiryDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(NSNumber *)familyMemberDSID;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(NSString *)unlockActionLabel;
-(NSString *)informativeText;
-(BOOL)shouldPersistWhenActivated;
-(void)setShouldPersistWhenActivated:(BOOL)arg1 ;
-(BOOL)shouldPersistWhenDismissed;
-(void)setShouldPersistWhenDismissed:(BOOL)arg1 ;
-(NSString *)delegateMachServiceName;
-(void)setDelegateMachServiceName:(NSString *)arg1 ;
-(NSDate *)relevanceDate;
-(void)setRelevanceDate:(NSDate *)arg1 ;
-(NSURL *)launchActionURL;
-(void)setLaunchActionURL:(NSURL *)arg1 ;
-(NSData *)launchActionArguments;
-(void)setLaunchActionArguments:(NSData *)arg1 ;
-(id)cacheDictionaryRepresentation;
-(id)initWithCacheDictionaryRepresentation:(id)arg1 ;
-(NSString *)actionButtonLabel;
-(void)setActionButtonLabel:(NSString *)arg1 ;
-(NSString *)otherButtonLabel;
-(void)setOtherButtonLabel:(NSString *)arg1 ;
-(void)setHasActionButton:(BOOL)arg1 ;
-(NSURL *)activateActionURL;
-(void)setActivateActionURL:(NSURL *)arg1 ;
-(NSURL *)dismissActionlURL;
-(void)setDismissActionlURL:(NSURL *)arg1 ;
-(NSURL *)clearActionURL;
-(void)setClearActionURL:(NSURL *)arg1 ;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)hasActionButton;
-(NSString *)clientIdentifier;
@end

