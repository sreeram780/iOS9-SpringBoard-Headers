/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSString;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {

	NSArray* _emailAddresses;
	NSString* _primarySMTPAddress;
	NSArray* _accounts;

}

@property (nonatomic,retain) NSArray * emailAddresses;                   //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;              //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
@property (nonatomic,retain) NSArray * accounts;                         //@synthesize accounts=_accounts - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)emailAddresses;
-(id)description;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
@end

