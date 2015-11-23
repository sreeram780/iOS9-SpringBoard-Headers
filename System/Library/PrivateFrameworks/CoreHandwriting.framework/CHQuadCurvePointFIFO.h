/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@class UIView;

@interface CHQuadCurvePointFIFO : CHPointFIFO {

	BOOL _emitInterpolatedPoints;
	float _unitScale;
	/*^block*/id _emissionHandler;
	CGPathRef _path;
	double _lineWidth;
	UIView* _view;
	 _lastPoint;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _prevPoints;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _points;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _controlPoints;

}

@property (assign,nonatomic) float unitScale;                                                             //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                                                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) CGPathRef path;                                                              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double lineWidth;                                                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) points;                     //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) UIView * view;                                                               //@synthesize view=_view - In the implementation block
+(6)interpolateFromPoint:(float)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(void)flush;
-(CGPathRef)path;
-(void)setView:(UIView *)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)addPoint:;
-(void)clear;
-(void)setEmissionHandler:(id)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))prevPoints;
-(void)setLastPoint:;
-()lastPoint;
-(id)emissionHandler;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)setUnitScale:(float)arg1 ;
-(id)initWithFIFO:(id)arg1 strokeView:(id)arg2 ;
-(void)setUnitScaleForViewSize:(CGSize)arg1 normalizedSize:(CGSize)arg2 contentScaleFactor:(double)arg3 ;
-(float)unitScale;
-(BOOL)emitInterpolatedPoints;
-(void)setControlPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))controlPoints;
-(void)setPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))points;
@end

