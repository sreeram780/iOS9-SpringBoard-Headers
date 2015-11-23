/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNFCVersions : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _middlewareVersion;
	unsigned _nfccFWRevision;
	unsigned _nfccFWVersion;
	unsigned _nfccHWVersion;
	unsigned _nfccROMVersion;
	NSString* _platformVersion;
	unsigned _seDeviceType;
	unsigned _seFWVersion;
	unsigned _seHWVersion;
	unsigned _seMigrationInst;
	unsigned _seMigrationPkgs;
	unsigned _seMigrationState;
	unsigned _seOSMode;
	unsigned _seReferenceCounter;
	unsigned _seRestrictedMode;
	unsigned _seSequenceCounter;
	unsigned _seSignKeyType;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMiddlewareVersion; 
@property (assign,nonatomic) unsigned middlewareVersion;                //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatformVersion; 
@property (nonatomic,retain) NSString * platformVersion;                //@synthesize platformVersion=_platformVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccHWVersion; 
@property (assign,nonatomic) unsigned nfccHWVersion;                    //@synthesize nfccHWVersion=_nfccHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccROMVersion; 
@property (assign,nonatomic) unsigned nfccROMVersion;                   //@synthesize nfccROMVersion=_nfccROMVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWVersion; 
@property (assign,nonatomic) unsigned nfccFWVersion;                    //@synthesize nfccFWVersion=_nfccFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWRevision; 
@property (assign,nonatomic) unsigned nfccFWRevision;                   //@synthesize nfccFWRevision=_nfccFWRevision - In the implementation block
@property (assign,nonatomic) BOOL hasSeDeviceType; 
@property (assign,nonatomic) unsigned seDeviceType;                     //@synthesize seDeviceType=_seDeviceType - In the implementation block
@property (assign,nonatomic) BOOL hasSeHWVersion; 
@property (assign,nonatomic) unsigned seHWVersion;                      //@synthesize seHWVersion=_seHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeFWVersion; 
@property (assign,nonatomic) unsigned seFWVersion;                      //@synthesize seFWVersion=_seFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeSignKeyType; 
@property (assign,nonatomic) unsigned seSignKeyType;                    //@synthesize seSignKeyType=_seSignKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasSeSequenceCounter; 
@property (assign,nonatomic) unsigned seSequenceCounter;                //@synthesize seSequenceCounter=_seSequenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeReferenceCounter; 
@property (assign,nonatomic) unsigned seReferenceCounter;               //@synthesize seReferenceCounter=_seReferenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeOSMode; 
@property (assign,nonatomic) unsigned seOSMode;                         //@synthesize seOSMode=_seOSMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeRestrictedMode; 
@property (assign,nonatomic) unsigned seRestrictedMode;                 //@synthesize seRestrictedMode=_seRestrictedMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationState; 
@property (assign,nonatomic) unsigned seMigrationState;                 //@synthesize seMigrationState=_seMigrationState - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationPkgs; 
@property (assign,nonatomic) unsigned seMigrationPkgs;                  //@synthesize seMigrationPkgs=_seMigrationPkgs - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationInst; 
@property (assign,nonatomic) unsigned seMigrationInst;                  //@synthesize seMigrationInst=_seMigrationInst - In the implementation block
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
-(void)setPlatformVersion:(NSString *)arg1 ;
-(void)setMiddlewareVersion:(unsigned)arg1 ;
-(void)setHasMiddlewareVersion:(BOOL)arg1 ;
-(BOOL)hasMiddlewareVersion;
-(BOOL)hasPlatformVersion;
-(void)setNfccHWVersion:(unsigned)arg1 ;
-(void)setHasNfccHWVersion:(BOOL)arg1 ;
-(BOOL)hasNfccHWVersion;
-(void)setNfccROMVersion:(unsigned)arg1 ;
-(void)setHasNfccROMVersion:(BOOL)arg1 ;
-(BOOL)hasNfccROMVersion;
-(void)setNfccFWVersion:(unsigned)arg1 ;
-(void)setHasNfccFWVersion:(BOOL)arg1 ;
-(BOOL)hasNfccFWVersion;
-(void)setNfccFWRevision:(unsigned)arg1 ;
-(void)setHasNfccFWRevision:(BOOL)arg1 ;
-(BOOL)hasNfccFWRevision;
-(void)setSeDeviceType:(unsigned)arg1 ;
-(void)setHasSeDeviceType:(BOOL)arg1 ;
-(BOOL)hasSeDeviceType;
-(void)setSeHWVersion:(unsigned)arg1 ;
-(void)setHasSeHWVersion:(BOOL)arg1 ;
-(BOOL)hasSeHWVersion;
-(void)setSeFWVersion:(unsigned)arg1 ;
-(void)setHasSeFWVersion:(BOOL)arg1 ;
-(BOOL)hasSeFWVersion;
-(void)setSeSignKeyType:(unsigned)arg1 ;
-(void)setHasSeSignKeyType:(BOOL)arg1 ;
-(BOOL)hasSeSignKeyType;
-(void)setSeSequenceCounter:(unsigned)arg1 ;
-(void)setHasSeSequenceCounter:(BOOL)arg1 ;
-(BOOL)hasSeSequenceCounter;
-(void)setSeReferenceCounter:(unsigned)arg1 ;
-(void)setHasSeReferenceCounter:(BOOL)arg1 ;
-(BOOL)hasSeReferenceCounter;
-(void)setSeOSMode:(unsigned)arg1 ;
-(void)setHasSeOSMode:(BOOL)arg1 ;
-(BOOL)hasSeOSMode;
-(void)setSeRestrictedMode:(unsigned)arg1 ;
-(void)setHasSeRestrictedMode:(BOOL)arg1 ;
-(BOOL)hasSeRestrictedMode;
-(void)setSeMigrationState:(unsigned)arg1 ;
-(void)setHasSeMigrationState:(BOOL)arg1 ;
-(BOOL)hasSeMigrationState;
-(void)setSeMigrationPkgs:(unsigned)arg1 ;
-(void)setHasSeMigrationPkgs:(BOOL)arg1 ;
-(BOOL)hasSeMigrationPkgs;
-(void)setSeMigrationInst:(unsigned)arg1 ;
-(void)setHasSeMigrationInst:(BOOL)arg1 ;
-(BOOL)hasSeMigrationInst;
-(unsigned)middlewareVersion;
-(NSString *)platformVersion;
-(unsigned)nfccHWVersion;
-(unsigned)nfccROMVersion;
-(unsigned)nfccFWVersion;
-(unsigned)nfccFWRevision;
-(unsigned)seDeviceType;
-(unsigned)seHWVersion;
-(unsigned)seFWVersion;
-(unsigned)seSignKeyType;
-(unsigned)seSequenceCounter;
-(unsigned)seReferenceCounter;
-(unsigned)seOSMode;
-(unsigned)seRestrictedMode;
-(unsigned)seMigrationState;
-(unsigned)seMigrationPkgs;
-(unsigned)seMigrationInst;
@end

