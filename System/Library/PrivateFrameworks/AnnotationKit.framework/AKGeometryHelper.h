/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController;

@interface AKGeometryHelper : NSObject {

	AKPageController* _pageController;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
+(CGAffineTransform)rotationTransformForRect:(CGRect)arg1 withAngle:(double)arg2 ;
+(CGPoint)compareVectorDirectionsFirstVector:(CGPoint)arg1 secondVector:(CGPoint)arg2 ;
+(BOOL)exifOrientationHasReversedAxes:(long long)arg1 ;
+(BOOL)annotationHasRotation:(id)arg1 outAngle:(double*)arg2 ;
+(unsigned long long)draggableArea:(unsigned long long)arg1 convertedForExif:(long long)arg2 ;
+(CGRect)boundsOfRotatedRectangle:(CGRect)arg1 angle:(double)arg2 ;
+(BOOL)isUnpresentableRect:(CGRect)arg1 ;
+(CGAffineTransform)rotationTransformForRectangularAnnotation:(id)arg1 hasRotation:(BOOL*)arg2 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(BOOL)arg5 ;
+(double)angleBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
+(CGAffineTransform)rotationTransformAroundPoint:(CGPoint)arg1 withAngle:(double)arg2 ;
+(long long)inverseExifOrientation:(long long)arg1 ;
+(CGRect)adjustRect:(CGRect)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3 ;
+(CGRect)expandCGRect:(CGRect)arg1 toContainPoint:(CGPoint)arg2 ;
+(CGPoint)adjustPoint:(CGPoint)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3 ;
+(CGAffineTransform)affineTransformForExifOrientation:(long long)arg1 aboutCenter:(CGPoint)arg2 ;
+(CGRect)renderingAlignedTextRectForRect:(CGRect)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(CGContextRef)arg3 usingAnnotation:(id)arg4 ;
+(CGAffineTransform)affineTransformRecenteringAboutOriginForExifOrientation:(long long)arg1 withOriginalSize:(CGSize)arg2 ;
+(CGRect)renderingStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(CGRect)convertModelToScreenOrientationForRect:(CGRect)arg1 withPageController:(id)arg2 ;
+(CGPoint)convertModelToScreenOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3 ;
+(CGPoint)convertScreenToModelOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3 ;
+(CGPoint)projectPoint:(CGPoint)arg1 ontoRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3 ;
+(CGPoint)normalizeVectorPoint:(CGPoint)arg1 ;
+(BOOL)isPointOnLeft:(CGPoint)arg1 ofRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3 ;
+(BOOL)exifOrientationHasFlip:(long long)arg1 ;
+(CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(BOOL)arg4 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(BOOL)arg4 ;
+(id)verticesOfPolygonWithPointCount:(unsigned long long)arg1 inRect:(CGRect)arg2 rotation:(double)arg3 flippedVertically:(BOOL)arg4 ;
+(double)lengthOfVector:(CGVector)arg1 ;
+(CGVector)normalizeVector:(CGVector)arg1 ;
+(double)angleOfVector:(CGVector)arg1 ;
+(CGAffineTransform)verticalFlipTransformForRect:(CGRect)arg1 ;
+(double)distanceBetweenPoints:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
+(CGRect)integralRect:(CGRect)arg1 withOptions:(unsigned long long)arg2 ;
+(CGRect)rectWithSize:(CGSize)arg1 centeredAtPoint:(CGPoint)arg2 ;
+(CGPoint)flipPointVertically:(CGPoint)arg1 inRect:(CGRect)arg2 ;
+(long long)exifOrientationWithConversionBlock:(/*^block*/id)arg1 ;
+(CGPoint)projectVector:(CGPoint)arg1 ontoAspectVector:(CGPoint)arg2 ;
+(CGPoint)snapVector:(CGPoint)arg1 toDiagonalForAspectRatio:(double)arg2 ignoreWidth:(BOOL)arg3 ignoreHeight:(BOOL)arg4 ;
+(double)radiusOfCenteredCircleFor:(CGRect)arg1 ;
+(CGAffineTransform)ellipseToCenteredCircleTransform:(CGRect)arg1 ;
+(CGPoint)pointAtAngle:(double)arg1 inCircleWithCenter:(CGPoint)arg2 andRadius:(double)arg3 ;
+(CGAffineTransform)centeredCircleToEllipseTransform:(CGRect)arg1 ;
+(CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(BOOL)arg5 ;
+(void)_checkIntersectionOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCircleAt:(CGPoint)arg3 andRadius:(double)arg4 results:(id)arg5 ;
+(void)_collectIntersectionsOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCornerCirclesOfRoundedRect:(CGRect)arg3 withRadius:(double)arg4 results:(id)arg5 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withAnotherSegmentStartingAt:(CGPoint)arg3 ending:(CGPoint)arg4 ;
+(CGPoint)_farthestPointFrom:(CGPoint)arg1 inArray:(id)arg2 ;
+(void)intersectCircleAtPoint:(CGPoint)arg1 withRadius:(double)arg2 withCircleAtPoint:(CGPoint)arg3 withRadius:(double)arg4 firstOutPoint:(CGPoint*)arg5 secondOutPoint:(CGPoint*)arg6 ;
+(CGAffineTransform)_rawAffineTransformForExifOrientation:(long long)arg1 ;
+(id)_cornersOfRotatedRectangle:(CGRect)arg1 angle:(double)arg2 ;
+(BOOL)isUnpresentablePoint:(CGPoint)arg1 ;
+(CGPoint)_alignedPointForPoint:(CGPoint)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(CGRect)_alignedStableRectForRect:(CGRect)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(CGRect)_strokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 shouldAlignStrictlyToScreen:(BOOL)arg3 alignToScreenUsingPageController:(id)arg4 orAlignToBitmapContext:(CGContextRef)arg5 usingAnnotation:(id)arg6 ;
+(CGRect)stableIntegralRectForRect:(CGRect)arg1 ;
+(CGRect)_rectForRect:(CGRect)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 withAlignmentBlock:(/*^block*/id)arg6 ;
+(CGRect)effectiveDrawingBoundsForAnnotation:(id)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 outScaleFactor:(double*)arg4 ;
+(CGPoint)snapVectorTo45Degrees:(CGPoint)arg1 ;
+(double)scaleOfTransform:(CGAffineTransform)arg1 ;
+(CGRect)rectForSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withRect:(CGRect)arg3 andRoundedCornerRadius:(double)arg4 ;
+(BOOL)isPoint:(CGPoint)arg1 onEllipse:(CGRect)arg2 ;
+(void)tangentPointsToEllipse:(CGRect)arg1 fromPoint:(CGPoint)arg2 firstOutPoint:(CGPoint*)arg3 secondOutPoint:(CGPoint*)arg4 ;
+(CGPoint)tangentOfEllipse:(CGRect)arg1 throughRayWithFirstPoint:(CGPoint)arg2 goingThrough:(CGPoint)arg3 ;
+(CGRect)convertScreenToModelOrientationForRect:(CGRect)arg1 withPageController:(id)arg2 ;
+(CGAffineTransform)horizontalFlipTransformForRect:(CGRect)arg1 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(CGPoint)contentAlignedPointForPoint:(CGPoint)arg1 ;
-(CGPoint)screenPixelAlignedPointForPoint:(CGPoint)arg1 ;
-(CGRect)contentAlignedRectForRect:(CGRect)arg1 ;
-(CGRect)screenPixelAlignedRectForRect:(CGRect)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromModelToLayer:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
-(CGRect)annotationLayerFrameForAnnotation:(id)arg1 layerIsClipped:(BOOL*)arg2 ;
-(CGRect)adornmentLayerFrameForAnnotation:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromModelToLayer:(id)arg2 ;
-(CGRect)_clippingFrameForView:(id)arg1 ;
-(CGRect)_smartAlignedRectForRect:(CGRect)arg1 ;
-(BOOL)_shouldAlignToContent;
-(BOOL)_shouldAlignToScreen;
-(CGRect)screenStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 ;
-(id)_rootLayer;
@end

