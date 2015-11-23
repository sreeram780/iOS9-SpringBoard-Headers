/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOCMTicketSubmissionResponse : PBCodable <NSCopying> {

	NSString* _ticketId;
	BOOL _isNotificationSupported;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasTicketId; 
@property (nonatomic,retain) NSString * ticketId;                          //@synthesize ticketId=_ticketId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNotificationSupported; 
@property (assign,nonatomic) BOOL isNotificationSupported;                 //@synthesize isNotificationSupported=_isNotificationSupported - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTicketId;
-(NSString *)ticketId;
-(void)setTicketId:(NSString *)arg1 ;
-(void)setIsNotificationSupported:(BOOL)arg1 ;
-(BOOL)hasIsNotificationSupported;
-(void)setHasIsNotificationSupported:(BOOL)arg1 ;
-(BOOL)isNotificationSupported;
-(BOOL)readFrom:(id)arg1 ;
@end

