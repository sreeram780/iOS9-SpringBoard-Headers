/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKNode;

@interface SKConstraint : NSObject <NSCoding, NSCopying> {

	BOOL _enabled;
	SKNode* _referenceNode;

}

@property (assign) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) SKNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
+(id)positionX:(id)arg1 ;
+(id)positionY:(id)arg1 ;
+(id)positionX:(id)arg1 Y:(id)arg2 ;
+(id)distance:(id)arg1 toNode:(id)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 inNode:(id)arg3 ;
+(id)zRotation:(id)arg1 ;
+(id)orientToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)orientToNode:(id)arg1 offset:(id)arg2 ;
+(id)orientToPoint:(CGPoint)arg1 offset:(id)arg2 ;
+(id)width:(id)arg1 ;
+(id)height:(id)arg1 ;
+(id)width:(id)arg1 height:(id)arg2 ;
+(id)scale:(id)arg1 ;
+(id)scaleX:(id)arg1 ;
+(id)scaleY:(id)arg1 ;
+(id)scaleX:(id)arg1 scaleY:(id)arg2 ;
-(void)setReferenceNode:(SKNode *)arg1 ;
-(BOOL)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKNode *)referenceNode;
@end

