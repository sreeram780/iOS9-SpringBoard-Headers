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

@class NSString, NSMutableArray, GEOLocation, GEOMapRegion, GEOTraitsTransitScheduleFilter;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	SCD_Struct_GE1* _transportTypes;
	double _carHeadunitPixelHeight;
	double _carHeadunitPixelWidth;
	double _mapZoomLevel;
	int _action;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	int _carHeadunitInteractionModel;
	NSString* _carHeadunitManufacturer;
	NSString* _carHeadunitModel;
	int _deviceBatteryState;
	NSMutableArray* _deviceDisplayLanguages;
	int _deviceInterfaceOrientation;
	NSString* _deviceKeyboardLocale;
	GEOLocation* _deviceLocation;
	NSString* _deviceSpokenLocale;
	NSString* _displayRegion;
	GEOMapRegion* _mapRegion;
	int _mode;
	NSMutableArray* _photoSizes;
	unsigned _photosCount;
	NSString* _providerID;
	NSMutableArray* _reviewUserPhotoSizes;
	unsigned _reviewUserPhotosCount;
	unsigned _sequenceNumber;
	int _source;
	unsigned _timeSinceMapEnteredForeground;
	unsigned _timeSinceMapViewportChanged;
	GEOTraitsTransitScheduleFilter* _transitScheduleFilter;
	BOOL _isAPICall;
	SCD_Struct_GE229 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                                            //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                                            //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                                          //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                                          //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation;                                        //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                            //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceDisplayLanguages;                             //@synthesize deviceDisplayLanguages=_deviceDisplayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale;                                     //@synthesize deviceKeyboardLocale=_deviceKeyboardLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale;                                       //@synthesize deviceSpokenLocale=_deviceSpokenLocale - In the implementation block
@property (assign,nonatomic) BOOL hasIsAPICall; 
@property (assign,nonatomic) BOOL isAPICall;                                                      //@synthesize isAPICall=_isAPICall - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoSizes;                                         //@synthesize photoSizes=_photoSizes - In the implementation block
@property (assign,nonatomic) BOOL hasPhotosCount; 
@property (assign,nonatomic) unsigned photosCount;                                                //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviewUserPhotoSizes;                               //@synthesize reviewUserPhotoSizes=_reviewUserPhotoSizes - In the implementation block
@property (assign,nonatomic) BOOL hasReviewUserPhotosCount; 
@property (assign,nonatomic) unsigned reviewUserPhotosCount;                                      //@synthesize reviewUserPhotosCount=_reviewUserPhotosCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged;                                //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitInteractionModel; 
@property (assign,nonatomic) int carHeadunitInteractionModel;                                     //@synthesize carHeadunitInteractionModel=_carHeadunitInteractionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasCarHeadunitManufacturer; 
@property (nonatomic,retain) NSString * carHeadunitManufacturer;                                  //@synthesize carHeadunitManufacturer=_carHeadunitManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasCarHeadunitModel; 
@property (nonatomic,retain) NSString * carHeadunitModel;                                         //@synthesize carHeadunitModel=_carHeadunitModel - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitPixelWidth; 
@property (assign,nonatomic) double carHeadunitPixelWidth;                                        //@synthesize carHeadunitPixelWidth=_carHeadunitPixelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitPixelHeight; 
@property (assign,nonatomic) double carHeadunitPixelHeight;                                       //@synthesize carHeadunitPixelHeight=_carHeadunitPixelHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitScheduleFilter;              //@synthesize transitScheduleFilter=_transitScheduleFilter - In the implementation block
@property (assign,nonatomic) BOOL hasMapZoomLevel; 
@property (assign,nonatomic) double mapZoomLevel;                                                 //@synthesize mapZoomLevel=_mapZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                            //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderID; 
@property (nonatomic,retain) NSString * providerID;                                               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                                      //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                                              //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
-(int)uiActionType;
-(unsigned)photosCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)dictionaryRepresentation;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionId;
-(BOOL)hasSequenceNumber;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDisplayRegion;
-(NSString *)displayRegion;
-(BOOL)hasDeviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)deviceLocation;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(unsigned)timeSinceMapEnteredForeground;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(NSString *)providerID;
-(void)setProviderID:(NSString *)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(BOOL)hasAppMinorVersion;
-(BOOL)hasAppMajorVersion;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(unsigned long long)photoSizesCount;
-(NSMutableArray *)photoSizes;
-(void)clearPhotoSizes;
-(BOOL)hasSource;
-(GEOTraitsTransitScheduleFilter *)transitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(BOOL)hasTransitScheduleFilter;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transportTypesCount;
-(void)clearTransportTypes;
-(void)addTransportType:(int)arg1 ;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)transportTypes;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasDeviceSpokenLocale;
-(void)addReviewUserPhotoSizes:(id)arg1 ;
-(void)setHasMode:(BOOL)arg1 ;
-(BOOL)hasMapZoomLevel;
-(NSMutableArray *)deviceDisplayLanguages;
-(NSString *)deviceKeyboardLocale;
-(void)setCarHeadunitManufacturer:(NSString *)arg1 ;
-(void)setDeviceDisplayLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasReviewUserPhotosCount;
-(void)setHasMapZoomLevel:(BOOL)arg1 ;
-(id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1 ;
-(void)setMapZoomLevel:(double)arg1 ;
-(void)addPhotoSizes:(id)arg1 ;
-(NSString *)deviceSpokenLocale;
-(void)setHasReviewUserPhotosCount:(BOOL)arg1 ;
-(BOOL)isAPICall;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(BOOL)hasCarHeadunitPixelHeight;
-(id)photoSizesAtIndex:(unsigned long long)arg1 ;
-(void)setReviewUserPhotosCount:(unsigned)arg1 ;
-(NSMutableArray *)reviewUserPhotoSizes;
-(BOOL)hasPhotosCount;
-(void)setCarHeadunitPixelHeight:(double)arg1 ;
-(BOOL)hasCarHeadunitPixelWidth;
-(void)setHasCarHeadunitPixelWidth:(BOOL)arg1 ;
-(unsigned)reviewUserPhotosCount;
-(void)setHasPhotosCount:(BOOL)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setCarHeadunitPixelWidth:(double)arg1 ;
-(void)setPhotosCount:(unsigned)arg1 ;
-(BOOL)hasDeviceBatteryState;
-(BOOL)hasCarHeadunitManufacturer;
-(void)setPhotoSizes:(NSMutableArray *)arg1 ;
-(void)clearReviewUserPhotoSizes;
-(BOOL)hasCarHeadunitModel;
-(NSString *)carHeadunitManufacturer;
-(void)setHasCarHeadunitPixelHeight:(BOOL)arg1 ;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitInteractionModel;
-(double)carHeadunitPixelWidth;
-(void)setDeviceBatteryState:(int)arg1 ;
-(NSString *)carHeadunitModel;
-(void)addDeviceDisplayLanguage:(id)arg1 ;
-(int)deviceBatteryState;
-(void)setReviewUserPhotoSizes:(NSMutableArray *)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(unsigned long long)reviewUserPhotoSizesCount;
-(void)setHasCarHeadunitInteractionModel:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(unsigned long long)deviceDisplayLanguagesCount;
-(int)carHeadunitInteractionModel;
-(void)setHasIsAPICall:(BOOL)arg1 ;
-(double)carHeadunitPixelHeight;
-(void)setCarHeadunitInteractionModel:(int)arg1 ;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(double)mapZoomLevel;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(int)deviceInterfaceOrientation;
-(BOOL)hasIsAPICall;
-(void)clearDeviceDisplayLanguages;
-(BOOL)hasDeviceKeyboardLocale;
-(BOOL)hasProviderID;
-(void)setIsAPICall:(BOOL)arg1 ;
-(BOOL)hasMode;
-(void)setCarHeadunitModel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

