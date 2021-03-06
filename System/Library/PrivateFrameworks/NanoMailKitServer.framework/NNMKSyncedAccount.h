/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NNMKSyncedAccount : NSObject {

	BOOL _shouldArchive;
	BOOL _resendRequested;
	NSString* _accountId;
	NSString* _displayName;
	NSArray* _emailAddresses;
	unsigned long long _resendInterval;

}

@property (nonatomic,retain) NSString * accountId;                           //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL shouldArchive;                             //@synthesize shouldArchive=_shouldArchive - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                       //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) BOOL resendRequested;                           //@synthesize resendRequested=_resendRequested - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;              //@synthesize resendInterval=_resendInterval - In the implementation block
-(NSArray *)emailAddresses;
-(id)init;
-(NSString *)displayName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(BOOL)shouldArchive;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(BOOL)resendRequested;
-(unsigned long long)resendInterval;
-(void)setResendRequested:(BOOL)arg1 ;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

