/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKNode;

@interface SKCropNode : SKNode {

	SKNode* _mask;
	SKCCropNode* _skcCropNode;

}

@property (nonatomic,retain) SKNode * maskNode; 
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setMaskNode:(SKNode *)arg1 ;
-(SKNode *)maskNode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

