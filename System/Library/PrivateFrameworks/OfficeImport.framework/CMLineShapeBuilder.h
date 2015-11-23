/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMShapeBuilder.h>

@class OADStroke;

@interface CMLineShapeBuilder : CMShapeBuilder {

	OADStroke* _stroke;

}
-(void)dealloc;
-(void)setStroke:(id)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)_renderBentConnector2InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(void)_renderBentConnector3InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(void)_renderStraightConnector1InPath:(CGPathRef)arg1 withTransform:(CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(CGPoint*)arg4 headDst:(CGPoint*)arg5 tailSrc:(CGPoint*)arg6 tailDst:(CGPoint*)arg7 ;
-(float)_getRotationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 withBounds:(id)arg3 ;
-(void)_renderLineEnd:(id)arg1 atPoint:(CGPoint)arg2 withOrientation:(float)arg3 inPath:(CGPathRef)arg4 ;
-(float)_adjustedCoefAtIndex:(int)arg1 ;
-(CGRect)_boundingBoxForLineEnd:(id)arg1 ;
@end

