/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {

	int _containerItemType;
	MIPMultiverseIdentifier* _selectedMultiverseIdentifier;
	MIPMultiverseIdentifier* _visualReferenceMultiverseIdentifier;
	SCD_Struct_MP3 _has;

}

@property (assign,nonatomic) BOOL hasContainerItemType; 
@property (assign,nonatomic) int containerItemType;                                                      //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;                     //@synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVisualReferenceMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;              //@synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)containerItemType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSelectedMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setVisualReferenceMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setContainerItemType:(int)arg1 ;
-(void)setHasContainerItemType:(BOOL)arg1 ;
-(BOOL)hasContainerItemType;
-(BOOL)hasSelectedMultiverseIdentifier;
-(BOOL)hasVisualReferenceMultiverseIdentifier;
-(MIPMultiverseIdentifier *)selectedMultiverseIdentifier;
-(MIPMultiverseIdentifier *)visualReferenceMultiverseIdentifier;
-(BOOL)readFrom:(id)arg1 ;
@end

