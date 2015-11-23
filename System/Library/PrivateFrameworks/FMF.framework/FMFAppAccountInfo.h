/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FMFAppAccountInfo : NSObject {

	NSString* _dsid;
	NSString* _username;
	NSString* _appServerHost;
	NSString* _appAuthToken;
	long long _appAuthTokenStatus;
	NSString* _legacyDsid;
	NSString* _legacyUsername;

}

@property (nonatomic,retain) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * appServerHost;                  //@synthesize appServerHost=_appServerHost - In the implementation block
@property (nonatomic,retain) NSString * appAuthToken;                   //@synthesize appAuthToken=_appAuthToken - In the implementation block
@property (assign,nonatomic) long long appAuthTokenStatus;              //@synthesize appAuthTokenStatus=_appAuthTokenStatus - In the implementation block
@property (nonatomic,retain) NSString * legacyDsid;                     //@synthesize legacyDsid=_legacyDsid - In the implementation block
@property (nonatomic,retain) NSString * legacyUsername;                 //@synthesize legacyUsername=_legacyUsername - In the implementation block
-(id)description;
-(NSString *)appAuthToken;
-(long long)appAuthTokenStatus;
-(NSString *)appServerHost;
-(NSString *)legacyDsid;
-(NSString *)legacyUsername;
-(void)setAppServerHost:(NSString *)arg1 ;
-(void)setAppAuthToken:(NSString *)arg1 ;
-(void)setAppAuthTokenStatus:(long long)arg1 ;
-(void)setLegacyDsid:(NSString *)arg1 ;
-(void)setLegacyUsername:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
@end

