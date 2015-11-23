/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAttribution : PBCodable <NSCopying> {

	NSString* _badge;
	NSString* _badgeChecksum;
	NSString* _logo;
	NSString* _logoChecksum;
	NSString* _name;
	NSString* _url;

}

@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) NSString * badge;                      //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,retain) NSString * logo;                       //@synthesize logo=_logo - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum;              //@synthesize badgeChecksum=_badgeChecksum - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum;               //@synthesize logoChecksum=_logoChecksum - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)badge;
-(void)setBadge:(NSString *)arg1 ;
-(BOOL)hasBadge;
-(BOOL)hasUrl;
-(BOOL)hasLogoChecksum;
-(void)setLogo:(NSString *)arg1 ;
-(BOOL)hasLogo;
-(void)setLogoChecksum:(NSString *)arg1 ;
-(NSString *)badgeChecksum;
-(NSString *)logoChecksum;
-(NSString *)logo;
-(BOOL)hasBadgeChecksum;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

