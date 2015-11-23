/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor, SKTexture, SKShader;

@interface SKShapeNode : SKNode {

	SKCShapeNode* _skcShapeNode;

}

@property (assign,nonatomic) const CGPathRef path; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (nonatomic,retain) UIColor * fillColor; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isAntialiased,nonatomic) BOOL antialiased; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double glowWidth; 
@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,readonly) double lineLength; 
@property (nonatomic,retain) SKTexture * fillTexture; 
@property (nonatomic,retain) SKShader * fillShader; 
@property (nonatomic,retain) SKTexture * strokeTexture; 
@property (nonatomic,retain) SKShader * strokeShader; 
@property (assign,nonatomic) double renderQualityRatio; 
+(id)shapeNodeWithPath:(CGPathRef)arg1 ;
+(id)shapeNodeWithEllipseInRect:(CGRect)arg1 ;
+(id)shapeNodeWithEllipseOfSize:(CGSize)arg1 ;
+(id)shapeNodeWithRect:(CGRect)arg1 ;
+(id)shapeNodeWithRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)shapeNodeWithPath:(CGPathRef)arg1 centered:(BOOL)arg2 ;
+(id)shapeNodeWithCircleOfRadius:(double)arg1 ;
+(id)shapeNodeWithRectOfSize:(CGSize)arg1 ;
+(id)shapeNodeWithRectOfSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
+(id)shapeNodeWithTriangleA:(CGPoint)arg1 B:(CGPoint)arg2 C:(CGPoint)arg3 ;
+(id)shapeNodeWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)shapeNodeWithSplinePoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(int)lineCap;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(BOOL)isEqualToNode:(id)arg1 ;
-(double)glowWidth;
-(BOOL)isAntialiased;
-(void)setAntialiased:(BOOL)arg1 ;
-(void)setGlowWidth:(double)arg1 ;
-(double)renderQualityRatio;
-(void)setRenderQualityRatio:(double)arg1 ;
-(SKShader *)fillShader;
-(void)setFillShader:(SKShader *)arg1 ;
-(SKTexture *)fillTexture;
-(void)setFillTexture:(SKTexture *)arg1 ;
-(SKShader *)strokeShader;
-(void)setStrokeShader:(SKShader *)arg1 ;
-(SKTexture *)strokeTexture;
-(void)setStrokeTexture:(SKTexture *)arg1 ;
-(double)lineLength;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(const CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_initialize;
-(void)setBlendMode:(long long)arg1 ;
-(long long)blendMode;
-(int)lineJoin;
@end

