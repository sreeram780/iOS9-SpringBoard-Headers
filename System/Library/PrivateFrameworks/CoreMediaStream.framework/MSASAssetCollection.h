/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCoding;
@class NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying> {

	BOOL _hasComments;
	BOOL _isDeletable;
	BOOL _isMine;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _albumGUID;
	NSArray* _assets;
	NSString* _fileName;
	NSString* _path;
	id<NSCoding> _userInfo;
	NSDictionary* _metadata;
	long long _photoNumber;
	NSDate* _timestamp;
	NSString* _personID;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id<NSCoding> userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long photoNumber;                   //@synthesize photoNumber=_photoNumber - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL hasComments;                        //@synthesize hasComments=_hasComments - In the implementation block
+(id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)assetCollectionWithAssetCollection:(id)arg1 ;
-(id)MSASPProtocolDictionary;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(BOOL)isPhotoIris;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setUserInfo:(id<NSCoding>)arg1 ;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSCoding>)userInfo;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)isVideo;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(long long)photoNumber;
-(void)setPhotoNumber:(long long)arg1 ;
-(BOOL)hasVideoAsset;
-(id)initWithFileName:(id)arg1 path:(id)arg2 ;
-(void)setHasComments:(BOOL)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(BOOL)hasComments;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)GUID;
-(NSDictionary *)metadata;
-(void)setGUID:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(NSString *)albumGUID;
-(BOOL)isMine;
-(BOOL)isDeletable;
-(id)mediaAssetType;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

