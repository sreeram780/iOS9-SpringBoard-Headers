/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying> {

	NSString* _queryString;

}

@property (nonatomic,readonly) BOOL hasQueryString; 
@property (nonatomic,retain) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasQueryString;
-(BOOL)readFrom:(id)arg1 ;
@end

