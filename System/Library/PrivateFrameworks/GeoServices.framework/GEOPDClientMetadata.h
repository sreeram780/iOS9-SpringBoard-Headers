/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, NSString, GEOLatLng;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	unsigned _dayOfWeek;
	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLanguage;
	NSString* _deviceKeyboardLanguage;
	GEOLatLng* _deviceLocation;
	NSString* _deviceSpokenLanguage;
	unsigned _hourOfDay;
	int _resultListAttributionSupport;
	unsigned _timeSinceMapEnteredForeground;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                        //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                          //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceDisplayLanguage; 
@property (nonatomic,retain) NSString * deviceDisplayLanguage;                                    //@synthesize deviceDisplayLanguage=_deviceDisplayLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLanguage; 
@property (nonatomic,retain) NSString * deviceKeyboardLanguage;                                   //@synthesize deviceKeyboardLanguage=_deviceKeyboardLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpokenLanguage; 
@property (nonatomic,retain) NSString * deviceSpokenLanguage;                                     //@synthesize deviceSpokenLanguage=_deviceSpokenLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (assign,nonatomic) BOOL hasResultListAttributionSupport; 
@property (assign,nonatomic) int resultListAttributionSupport;                                    //@synthesize resultListAttributionSupport=_resultListAttributionSupport - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                                                  //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceLocation;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(GEOLatLng *)deviceLocation;
-(NSString *)deviceCountryCode;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(unsigned)timeSinceMapEnteredForeground;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(BOOL)hasDeviceCountryCode;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(unsigned)dayOfWeek;
-(BOOL)hasDayOfWeek;
-(void)setDeviceSpokenLanguage:(NSString *)arg1 ;
-(BOOL)hasDeviceSpokenLanguage;
-(BOOL)hasHourOfDay;
-(void)setDeviceDisplayLanguage:(NSString *)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(NSString *)deviceDisplayLanguage;
-(NSString *)deviceSpokenLanguage;
-(void)setResultListAttributionSupport:(int)arg1 ;
-(unsigned)hourOfDay;
-(BOOL)hasDeviceDisplayLanguage;
-(NSString *)deviceKeyboardLanguage;
-(void)setHasResultListAttributionSupport:(BOOL)arg1 ;
-(void)setHourOfDay:(unsigned)arg1 ;
-(int)resultListAttributionSupport;
-(BOOL)hasResultListAttributionSupport;
-(void)setDeviceKeyboardLanguage:(NSString *)arg1 ;
-(BOOL)hasDeviceKeyboardLanguage;
-(BOOL)readFrom:(id)arg1 ;
@end

