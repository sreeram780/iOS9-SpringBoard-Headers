/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {

	NSMutableArray* _announcements;
	NSString* _languageCode;

}

@property (nonatomic,retain) NSMutableArray * announcements;              //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                     //@synthesize languageCode=_languageCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(void)clearAnnouncements;
-(NSMutableArray *)announcements;
-(void)addAnnouncement:(id)arg1 ;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)announcementsCount;
-(BOOL)hasLanguageCode;
-(BOOL)readFrom:(id)arg1 ;
@end

