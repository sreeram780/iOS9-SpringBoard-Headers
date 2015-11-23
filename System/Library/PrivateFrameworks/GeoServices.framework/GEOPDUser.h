/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPhoto, NSString;

@interface GEOPDUser : PBCodable <NSCopying> {

	GEOPDPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDPhoto *)image;
-(id)dictionaryRepresentation;
-(BOOL)hasImage;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)readFrom:(id)arg1 ;
@end

