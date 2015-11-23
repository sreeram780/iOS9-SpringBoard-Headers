/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKNode;

@interface IKLink : NSObject {

	float _angleInitial;
	float _angle;
	float _length;
	SKNode* _node;
	GLKVector2 _position;
	GLKVector2 _size;

}

@property (nonatomic,retain) SKNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) _GLKVector2 position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float angleInitial;                //@synthesize angleInitial=_angleInitial - In the implementation block
@property (nonatomic,readonly) float angle;                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float length;                      //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) _GLKVector2 size;                  //@synthesize size=_size - In the implementation block
-(double)normalizeAngle:(double)arg1 ;
-(void)rotateByAngle:(float)arg1 ;
-(float)angleInitial;
-(void)setAngleInitial:(float)arg1 ;
-(_GLKVector2)size;
-(float)length;
-(void)setSize:(_GLKVector2)arg1 ;
-(void)setPosition:(_GLKVector2)arg1 ;
-(_GLKVector2)position;
-(void)setLength:(float)arg1 ;
-(SKNode *)node;
-(id)initWithNode:(id)arg1 ;
-(float)angle;
-(void)setNode:(SKNode *)arg1 ;
@end

