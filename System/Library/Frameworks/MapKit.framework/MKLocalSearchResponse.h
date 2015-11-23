/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK2 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK2 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(SCD_Struct_MK2)boundingRegion;
-(id)_dictionaryRepresentation;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(NSArray *)mapItems;
-(id)description;
@end

