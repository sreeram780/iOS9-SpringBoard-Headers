/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOMapItem;
@class NSUUID, NSArray;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {

	double _latitude;
	double _longitude;
	double _uncertainty;
	double _confidence;
	NSUUID* _identifier;
	long long _type;
	id<GEOMapItem> _geoMapItem;
	NSArray* _visits;

}

@property (nonatomic,readonly) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;                     //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem;              //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                       //@synthesize visits=_visits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationOfInterestSourceToString:(long long)arg1 ;
+(id)locationOfInterestTypeToString:(long long)arg1 ;
-(id)name;
-(id)preciseName;
-(id)localizedLastVisitDescription;
-(id)localizedAllVisitsDescription;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
-(id)relativeNameToMapItem:(id)arg1 ;
-(id)mapItem;
-(double)latitude;
-(double)longitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)confidence;
-(id<GEOMapItem>)geoMapItem;
-(NSArray *)visits;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 geoMapItem:(id)arg7 visits:(id)arg8 ;
-(double)uncertainty;
@end

