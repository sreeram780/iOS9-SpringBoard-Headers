/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLPlacesMapKitSupport : NSObject {

	Class _pinAnnotationViewClass;
	Class _annotationViewClass;
	Class _mapViewClass;
	Class _polylineClass;
	Class _polylineViewClass;
	SCD_Struct_PL19 _mapRectWorld;
	SCD_Struct_PL19 _mapRectNull;
	/*function pointer*/void* _mkMapRectMakeWithRadialDistance;
	/*function pointer*/void* _mkMapRectUnion;
	/*function pointer*/void* _mkMapRectIntersectsRect;
	/*function pointer*/void* _mkMapRectIntersectsMapRectWrappingMeridian;
	/*function pointer*/void* _mkCoordinateRegionForMapRect;
	/*function pointer*/void* _mkMapRectForCoordinateRegion;
	/*function pointer*/void* _mkMapPointForCoordinate;
	/*function pointer*/void* _mkCoordinateForMapPoint;
	/*function pointer*/void* _mkMapPointsPerMeterAtLatitude;
	/*function pointer*/void* _mkMetersPerMapPointAtLatitude;

}
+(id)sharedInstance;
-(Class)mapViewClass;
-(Class)annotationViewClass;
-(Class)polylineViewClass;
-(BOOL)mapRectIntersectsRect:(SCD_Struct_PL19)arg1 rect:(SCD_Struct_PL19)arg2 ;
-(SCD_Struct_PL19)mapRectWorld;
-(SCD_Struct_PL19)coordinateRegionForMapRect:(SCD_Struct_PL19)arg1 ;
-(SCD_Struct_PL19)mapRectForCoordinateRegion:(SCD_Struct_PL19)arg1 ;
-(double)metersPerMapPointAtLatitude:(double)arg1 ;
-(SCD_Struct_PL19)mapRectAtCoordinate:(CGSize)arg1 radialDistance:(double)arg2 ;
-(BOOL)mapRectIntersectsWrappingMeridian:(SCD_Struct_PL19)arg1 rect:(SCD_Struct_PL19)arg2 ;
-(Class)polylineClass;
-(double)mapPointsPerMeterAtLatitude:(double)arg1 ;
-(CGSize)mapPointForCoordinate:(CGSize)arg1 ;
-(SCD_Struct_PL19)mapRectNull;
-(SCD_Struct_PL19)mapRectUnion:(SCD_Struct_PL19)arg1 rect:(SCD_Struct_PL19)arg2 ;
-(CGSize)coordinateForMapPoint:(CGSize)arg1 ;
-(id)init;
-(Class)pinAnnotationViewClass;
@end

