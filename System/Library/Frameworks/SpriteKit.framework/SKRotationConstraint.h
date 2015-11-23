/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKRotationConstraint : SKConstraint {

	SKRange* _zRotationRange;

}

@property (copy) SKRange * zRotationRange;              //@synthesize zRotationRange=_zRotationRange - In the implementation block
+(id)constraintWithZRotationRange:(id)arg1 ;
-(SKRange *)zRotationRange;
-(void)setZRotationRange:(SKRange *)arg1 ;
-(id)initWithZRotationRange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

