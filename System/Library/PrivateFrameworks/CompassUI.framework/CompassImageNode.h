/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSString;

@interface CompassImageNode : NSObject {

	CompassImageNode* _leftChild;
	CompassImageNode* _rightChild;
	NSString* _imageKey;
	CGRect _rect;

}

@property (nonatomic,retain) CompassImageNode * leftChild;               //@synthesize leftChild=_leftChild - In the implementation block
@property (nonatomic,retain) CompassImageNode * rightChild;              //@synthesize rightChild=_rightChild - In the implementation block
@property (assign,nonatomic) CGRect rect;                                //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSString * imageKey;                          //@synthesize imageKey=_imageKey - In the implementation block
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)insertImageWithSize:(CGSize)arg1 key:(id)arg2 ;
-(void)setImageKey:(NSString *)arg1 ;
-(NSString *)imageKey;
-(CompassImageNode *)leftChild;
-(CompassImageNode *)rightChild;
-(void)setLeftChild:(CompassImageNode *)arg1 ;
-(void)setRightChild:(CompassImageNode *)arg1 ;
@end

