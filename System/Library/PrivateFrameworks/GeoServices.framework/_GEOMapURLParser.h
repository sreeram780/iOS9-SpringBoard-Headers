/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSURL, NSString, GEOUserSessionEntity;

@interface _GEOMapURLParser : NSObject {

	NSURL* _url;
	int _mapType;
	int _transportType;
	int _trackingMode;
	BOOL _exactPositionSpecified;
	SCD_Struct_GE16 _centerCoordinate;
	SCD_Struct_GE16 _span;
	float _zoomLevel;
	NSString* _addressString;
	NSString* _directionsSourceAddressString;
	NSString* _directionsDestinationAddressString;
	NSString* _searchQuery;
	SCD_Struct_GE16 _searchCoordinate;
	SCD_Struct_GE57 _searchRegion;
	int _searchProviderID;
	unsigned long long _searchUID;
	NSString* _contentProvider;
	NSString* _contentProviderID;
	NSString* _abRecordID;
	NSString* _abAddressID;
	GEOUserSessionEntity* _userSessionEntity;
	double _altitude;
	double _rotation;
	double _tilt;
	double _roll;

}

@property (readonly) int mapType;                                                //@synthesize mapType=_mapType - In the implementation block
@property (readonly) int transportType;                                          //@synthesize transportType=_transportType - In the implementation block
@property (readonly) int trackingMode;                                           //@synthesize trackingMode=_trackingMode - In the implementation block
@property (readonly) BOOL exactPositionSpecified;                                //@synthesize exactPositionSpecified=_exactPositionSpecified - In the implementation block
@property (readonly) SCD_Struct_GE16 centerCoordinate;                           //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (readonly) SCD_Struct_GE16 span;                                       //@synthesize span=_span - In the implementation block
@property (readonly) float zoomLevel;                                            //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (readonly) NSString * addressString;                                   //@synthesize addressString=_addressString - In the implementation block
@property (readonly) NSString * directionsSourceAddressString;                   //@synthesize directionsSourceAddressString=_directionsSourceAddressString - In the implementation block
@property (readonly) NSString * directionsDestinationAddressString;              //@synthesize directionsDestinationAddressString=_directionsDestinationAddressString - In the implementation block
@property (readonly) NSString * searchQuery;                                     //@synthesize searchQuery=_searchQuery - In the implementation block
@property (readonly) SCD_Struct_GE16 searchCoordinate;                           //@synthesize searchCoordinate=_searchCoordinate - In the implementation block
@property (readonly) SCD_Struct_GE57 searchRegion;                               //@synthesize searchRegion=_searchRegion - In the implementation block
@property (readonly) int searchProviderID;                                       //@synthesize searchProviderID=_searchProviderID - In the implementation block
@property (readonly) unsigned long long searchUID;                               //@synthesize searchUID=_searchUID - In the implementation block
@property (readonly) NSString * contentProvider;                                 //@synthesize contentProvider=_contentProvider - In the implementation block
@property (readonly) NSString * contentProviderID;                               //@synthesize contentProviderID=_contentProviderID - In the implementation block
@property (readonly) NSString * abRecordID;                                      //@synthesize abRecordID=_abRecordID - In the implementation block
@property (readonly) NSString * abAddressID;                                     //@synthesize abAddressID=_abAddressID - In the implementation block
@property (readonly) GEOUserSessionEntity * userSessionEntity;                   //@synthesize userSessionEntity=_userSessionEntity - In the implementation block
@property (readonly) double altitude;                                            //@synthesize altitude=_altitude - In the implementation block
@property (readonly) double rotation;                                            //@synthesize rotation=_rotation - In the implementation block
@property (readonly) double tilt;                                                //@synthesize tilt=_tilt - In the implementation block
@property (readonly) double roll;                                                //@synthesize roll=_roll - In the implementation block
+(BOOL)isValidMapsCategoryURL:(id)arg1 ;
+(BOOL)isValidMapURL:(id)arg1 ;
+(BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg1 ;
-(float)zoomLevel;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(double)rotation;
-(double)altitude;
-(int)transportType;
-(unsigned long long)searchUID;
-(SCD_Struct_GE16)span;
-(NSString *)contentProvider;
-(NSString *)addressString;
-(NSString *)abRecordID;
-(NSString *)contentProviderID;
-(NSString *)directionsSourceAddressString;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(NSString *)abAddressID;
-(int)mapType;
-(NSString *)searchQuery;
-(GEOUserSessionEntity *)userSessionEntity;
-(NSString *)directionsDestinationAddressString;
-(SCD_Struct_GE16)searchCoordinate;
-(int)trackingMode;
-(double)tilt;
-(SCD_Struct_GE57)searchRegion;
-(BOOL)exactPositionSpecified;
-(SCD_Struct_GE16)centerCoordinate;
-(int)searchProviderID;
-(double)roll;
@end

