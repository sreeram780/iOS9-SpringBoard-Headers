/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSPDroppedPin;

@interface MSPPin : PBCodable <NSCopying> {

	MSPDroppedPin* _droppedPin;

}

@property (nonatomic,readonly) BOOL hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;              //@synthesize droppedPin=_droppedPin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(MSPDroppedPin *)droppedPin;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(BOOL)hasDroppedPin;
-(BOOL)readFrom:(id)arg1 ;
@end

