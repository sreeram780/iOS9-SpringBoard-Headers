/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HDAppLauncherClient : NSObject {

	BOOL _launching;
	BOOL _retry;
	NSMutableDictionary* _expirationDateByRegistrationIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * expirationDateByRegistrationIdentifier;              //@synthesize expirationDateByRegistrationIdentifier=_expirationDateByRegistrationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL launching;                                                            //@synthesize launching=_launching - In the implementation block
@property (assign,nonatomic) BOOL retry;                                                                //@synthesize retry=_retry - In the implementation block
-(BOOL)retry;
-(id)init;
-(void)registerIdentifier:(id)arg1 withDate:(id)arg2 ;
-(void)unregisterIdentifier:(id)arg1 ;
-(BOOL)hasValidRegistrationByDate:(id)arg1 ;
-(BOOL)cleanUpExpiredRegistrationsWithDate:(id)arg1 ;
-(NSMutableDictionary *)expirationDateByRegistrationIdentifier;
-(void)setExpirationDateByRegistrationIdentifier:(NSMutableDictionary *)arg1 ;
-(BOOL)launching;
-(void)setLaunching:(BOOL)arg1 ;
-(void)setRetry:(BOOL)arg1 ;
@end

