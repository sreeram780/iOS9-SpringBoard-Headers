/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {

	SCD_Struct_MK1 _centroid;
	NSArray* _interiorPolygons;
	BOOL _isDefinitelyConvex;

}

@property (readonly) NSArray * interiorPolygons;                            //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (assign,nonatomic) BOOL _isDefinitelyConvex;                      //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
+(id)polygonWithPoints:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK2)arg1 ;
+(id)polygonWithCoordinates:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonEnclosingMapPoints:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithPoints:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)intersectsMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)boundingMapRect;
-(BOOL)_isDefinitelyConvex;
-(void)set_isDefinitelyConvex:(BOOL)arg1 ;
-(NSArray *)interiorPolygons;
-(SCD_Struct_MK1)coordinate;
@end

