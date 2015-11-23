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

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _bssidOui;
	int _channel;
	int _deauthReason;
	NSData* _deauthSourceOui;
	unsigned _error;
	NSString* _security;
	int _signal;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                               //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasSignal; 
@property (assign,nonatomic) int signal;                                //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) BOOL hasBssidOui; 
@property (nonatomic,retain) NSData * bssidOui;                         //@synthesize bssidOui=_bssidOui - In the implementation block
@property (nonatomic,readonly) BOOL hasSecurity; 
@property (nonatomic,retain) NSString * security;                       //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) BOOL hasDeauthReason; 
@property (assign,nonatomic) int deauthReason;                          //@synthesize deauthReason=_deauthReason - In the implementation block
@property (nonatomic,readonly) BOOL hasDeauthSourceOui; 
@property (nonatomic,retain) NSData * deauthSourceOui;                  //@synthesize deauthSourceOui=_deauthSourceOui - In the implementation block
-(unsigned)error;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)signal;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasError;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(int)channel;
-(void)setBssidOui:(NSData *)arg1 ;
-(void)setSecurity:(NSString *)arg1 ;
-(void)setDeauthSourceOui:(NSData *)arg1 ;
-(void)setSignal:(int)arg1 ;
-(void)setHasSignal:(BOOL)arg1 ;
-(BOOL)hasSignal;
-(BOOL)hasBssidOui;
-(BOOL)hasSecurity;
-(void)setDeauthReason:(int)arg1 ;
-(void)setHasDeauthReason:(BOOL)arg1 ;
-(BOOL)hasDeauthReason;
-(BOOL)hasDeauthSourceOui;
-(NSData *)bssidOui;
-(NSString *)security;
-(int)deauthReason;
-(NSData *)deauthSourceOui;
@end

