/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface PKSecureElementConsistencyData : NSObject {

	unsigned long long _backoffLevel;
	NSDictionary* _secureElementAppletStateByAID;
	NSDictionary* _passStateByAID;
	NSDictionary* _cleanupActionsByAID;
	NSDictionary* _secureElementCardStateByAID;

}

@property (assign,nonatomic) unsigned long long backoffLevel;                           //@synthesize backoffLevel=_backoffLevel - In the implementation block
@property (nonatomic,retain) NSDictionary * secureElementAppletStateByAID;              //@synthesize secureElementAppletStateByAID=_secureElementAppletStateByAID - In the implementation block
@property (nonatomic,retain) NSDictionary * passStateByAID;                             //@synthesize passStateByAID=_passStateByAID - In the implementation block
@property (nonatomic,retain) NSDictionary * cleanupActionsByAID;                        //@synthesize cleanupActionsByAID=_cleanupActionsByAID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) NSDictionary * secureElementCardStateByAID;                //@synthesize secureElementCardStateByAID=_secureElementCardStateByAID - In the implementation block
+(id)consistencyDataWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 cleanupActions:(id)arg3 ;
+(id)consistencyDataWithPaymentApplications:(id)arg1 secureElementCards:(id)arg2 cleanupActions:(id)arg3 ;
-(void)dealloc;
-(NSDictionary *)dictionary;
-(void)setPassStateByAID:(NSDictionary *)arg1 ;
-(void)setSecureElementAppletStateByAID:(NSDictionary *)arg1 ;
-(void)setCleanupActionsByAID:(NSDictionary *)arg1 ;
-(NSDictionary *)passStateByAID;
-(NSDictionary *)secureElementAppletStateByAID;
-(NSDictionary *)cleanupActionsByAID;
-(unsigned long long)backoffLevel;
-(void)setBackoffLevel:(unsigned long long)arg1 ;
-(NSDictionary *)secureElementCardStateByAID;
-(void)setSecureElementCardStateByAID:(NSDictionary *)arg1 ;
@end

