/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDControlFrames, AWDDataFrames, AWDManagementFrames;

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDControlFrames* _rxControl;
	AWDDataFrames* _rxData;
	AWDManagementFrames* _rxManagement;
	AWDControlFrames* _txControl;
	AWDDataFrames* _txData;
	AWDManagementFrames* _txManagement;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRxControl; 
@property (nonatomic,retain) AWDControlFrames * rxControl;                    //@synthesize rxControl=_rxControl - In the implementation block
@property (nonatomic,readonly) BOOL hasTxControl; 
@property (nonatomic,retain) AWDControlFrames * txControl;                    //@synthesize txControl=_txControl - In the implementation block
@property (nonatomic,readonly) BOOL hasRxData; 
@property (nonatomic,retain) AWDDataFrames * rxData;                          //@synthesize rxData=_rxData - In the implementation block
@property (nonatomic,readonly) BOOL hasTxData; 
@property (nonatomic,retain) AWDDataFrames * txData;                          //@synthesize txData=_txData - In the implementation block
@property (nonatomic,readonly) BOOL hasRxManagement; 
@property (nonatomic,retain) AWDManagementFrames * rxManagement;              //@synthesize rxManagement=_rxManagement - In the implementation block
@property (nonatomic,readonly) BOOL hasTxManagement; 
@property (nonatomic,retain) AWDManagementFrames * txManagement;              //@synthesize txManagement=_txManagement - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRxControl:(AWDControlFrames *)arg1 ;
-(void)setTxControl:(AWDControlFrames *)arg1 ;
-(void)setRxData:(AWDDataFrames *)arg1 ;
-(void)setTxData:(AWDDataFrames *)arg1 ;
-(void)setRxManagement:(AWDManagementFrames *)arg1 ;
-(void)setTxManagement:(AWDManagementFrames *)arg1 ;
-(BOOL)hasRxControl;
-(BOOL)hasTxControl;
-(BOOL)hasRxData;
-(BOOL)hasTxData;
-(BOOL)hasRxManagement;
-(BOOL)hasTxManagement;
-(AWDControlFrames *)rxControl;
-(AWDControlFrames *)txControl;
-(AWDDataFrames *)rxData;
-(AWDDataFrames *)txData;
-(AWDManagementFrames *)rxManagement;
-(AWDManagementFrames *)txManagement;
@end

