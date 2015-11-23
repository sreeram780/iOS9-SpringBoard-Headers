/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusKit/OpusKit-Structs.h>
@class NSDate, NSString, NSArray, CLLocation;

@interface OKMediaItemMetadata : NSObject {

	unsigned long long _type;
	unsigned long long _subType;
	CGSize _resolution;
	NSDate* _creationDate;
	unsigned long long _orientation;
	double _duration;
	double _displayTime;
	double _latitude;
	double _longitude;
	BOOL _opaque;
	NSString* _UTI;
	NSString* _name;
	NSString* _caption;
	BOOL _regionsOfInterestDetected;
	NSArray* _regionsOfInterest;
	CGRect _regionOfInterestContainerBounds;

}

@property (assign) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (assign) unsigned long long subType;                          //@synthesize subType=_subType - In the implementation block
@property (assign) CGSize resolution;                                   //@synthesize resolution=_resolution - In the implementation block
@property (readonly) double aspectRatio; 
@property (retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) unsigned long long orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (assign) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign) double displayTime;                                  //@synthesize displayTime=_displayTime - In the implementation block
@property (assign) double latitude;                                     //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                                    //@synthesize longitude=_longitude - In the implementation block
@property (readonly) CLLocation * location; 
@property (readonly) CGSize locationCoordinate; 
@property (assign) BOOL opaque;                                         //@synthesize opaque=_opaque - In the implementation block
@property (copy) NSString * UTI;                                        //@synthesize UTI=_UTI - In the implementation block
@property (copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (copy) NSString * caption;                                    //@synthesize caption=_caption - In the implementation block
@property (assign) BOOL regionsOfInterestDetected;                      //@synthesize regionsOfInterestDetected=_regionsOfInterestDetected - In the implementation block
@property (copy) NSArray * regionsOfInterest;                           //@synthesize regionsOfInterest=_regionsOfInterest - In the implementation block
@property (assign) CGRect regionOfInterestContainerBounds;              //@synthesize regionOfInterestContainerBounds=_regionOfInterestContainerBounds - In the implementation block
@property (readonly) BOOL hasRegionsOfInterest; 
@property (readonly) BOOL hasRegionsOfInterestName; 
@property (readonly) NSArray * regionsOfInterestName; 
+(unsigned long long)alignResolution:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingAspectRatio;
+(id)keyPathsForValuesAffectingLocation;
+(id)keyPathsForValuesAffectingLocationCoordinate;
+(id)keyPathsForValuesAffectingHasRegionsOfInterest;
+(id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+(id)keyPathsForValuesAffectingRegionsOfInterestName;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(double)aspectRatio;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(id)dictionary;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)orientation;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(CLLocation *)location;
-(BOOL)opaque;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)caption;
-(CGSize)locationCoordinate;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(CGSize)resolution;
-(BOOL)hasRegionsOfInterest;
-(BOOL)regionsOfInterestDetected;
-(unsigned long long)bestResolutionForSize:(CGSize)arg1 scale:(double)arg2 quality:(double)arg3 ;
-(void)setRegionsOfInterest:(NSArray *)arg1 ;
-(void)setRegionsOfInterestDetected:(BOOL)arg1 ;
-(NSArray *)regionsOfInterest;
-(void)setPropertiesFromDictionary:(id)arg1 ;
-(void)setSubType:(unsigned long long)arg1 ;
-(void)setResolution:(CGSize)arg1 ;
-(void)setDisplayTime:(double)arg1 ;
-(void)setRegionOfInterestContainerBounds:(CGRect)arg1 ;
-(id)regionsOfInterestDictionary;
-(id)dictionaryValueForKey:(id)arg1 ;
-(BOOL)hasRegionsOfInterestName;
-(NSArray *)regionsOfInterestName;
-(BOOL)writeToFileURL:(id)arg1 ;
-(unsigned long long)subType;
-(double)displayTime;
-(CGRect)regionOfInterestContainerBounds;
@end

