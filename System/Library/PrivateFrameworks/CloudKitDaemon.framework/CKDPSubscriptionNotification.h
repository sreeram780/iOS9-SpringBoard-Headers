/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPSubscriptionNotificationAlert;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {

	NSMutableArray* _additionalFields;
	CKDPSubscriptionNotificationAlert* _alert;
	BOOL _shouldBadge;
	BOOL _shouldSendContentAvailable;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) BOOL hasAlert; 
@property (nonatomic,retain) CKDPSubscriptionNotificationAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBadge; 
@property (assign,nonatomic) BOOL shouldBadge;                                       //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalFields;                      //@synthesize additionalFields=_additionalFields - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSendContentAvailable; 
@property (assign,nonatomic) BOOL shouldSendContentAvailable;                        //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAlert;
-(CKDPSubscriptionNotificationAlert *)alert;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(BOOL)shouldSendContentAvailable;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(NSMutableArray *)additionalFields;
-(void)setAdditionalFields:(NSMutableArray *)arg1 ;
-(void)setAlert:(CKDPSubscriptionNotificationAlert *)arg1 ;
-(void)addAdditionalFields:(id)arg1 ;
-(unsigned long long)additionalFieldsCount;
-(void)clearAdditionalFields;
-(id)additionalFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldBadge:(BOOL)arg1 ;
-(BOOL)hasShouldBadge;
-(void)setHasShouldSendContentAvailable:(BOOL)arg1 ;
-(BOOL)hasShouldSendContentAvailable;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

