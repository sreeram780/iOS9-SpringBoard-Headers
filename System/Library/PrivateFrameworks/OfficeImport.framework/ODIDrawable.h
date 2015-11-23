/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIDrawable : NSObject
+(id)presentationWithName:(id)arg1 point:(id)arg2 ;
+(id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4 ;
+(void)addArrowHeadToShapeProperties:(id)arg1 ;
+(id)shapeGeometryForRectangle;
+(id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int*)arg2 ;
+(CGSize)sizeOfDiagram:(id)arg1 ;
+(void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4 ;
+(id)shapeGeometryForEllipse;
+(id)addShapeWithBounds:(CGRect)arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4 ;
+(void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)arg1 ;
+(id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1 ;
+(id)shapeGeometryForBezierPath:(id)arg1 gSpace:(CGRect)arg2 ;
+(void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2 ;
+(id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)arg1 ;
@end

