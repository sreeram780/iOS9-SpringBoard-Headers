/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FlickrPhotoSet : NSObject {

	long long _identifier;
	long long _primaryPhotoID;
	long long _farmID;
	long long _serverID;
	NSString* _secret;
	NSString* _title;
	NSString* _photoSetDescription;

}

@property (assign,nonatomic) long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long primaryPhotoID;                  //@synthesize primaryPhotoID=_primaryPhotoID - In the implementation block
@property (assign,nonatomic) long long farmID;                          //@synthesize farmID=_farmID - In the implementation block
@property (assign,nonatomic) long long serverID;                        //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * secret;                           //@synthesize secret=_secret - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * photoSetDescription;              //@synthesize photoSetDescription=_photoSetDescription - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(long long)identifier;
-(NSString *)title;
-(void)setIdentifier:(long long)arg1 ;
-(long long)serverID;
-(void)setServerID:(long long)arg1 ;
-(long long)primaryPhotoID;
-(void)setPrimaryPhotoID:(long long)arg1 ;
-(long long)farmID;
-(void)setFarmID:(long long)arg1 ;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
-(NSString *)photoSetDescription;
-(void)setPhotoSetDescription:(NSString *)arg1 ;
@end

