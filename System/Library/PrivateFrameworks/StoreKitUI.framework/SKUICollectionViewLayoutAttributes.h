/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backgroundColor;
	long long _position;
	double _zoomingImageAlpha;
	double _zoomingImageWidth;
	double _zoomingImageImposedAlphaOfOtherViews;
	double _zoomingImageLambda;

}

@property (nonatomic,copy) UIColor * backgroundColor;                                                                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long position;                                                                               //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double zoomingImageAlpha;                                                                         //@synthesize zoomingImageAlpha=_zoomingImageAlpha - In the implementation block
@property (assign,nonatomic) double zoomingImageWidth;                                                                         //@synthesize zoomingImageWidth=_zoomingImageWidth - In the implementation block
@property (assign,nonatomic) double zoomingImageImposedAlphaOfOtherViews;                                                      //@synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews - In the implementation block
@property (assign,setter=_setZoomingImageLambda:,getter=_zoomingImageLambda,nonatomic) double zoomingImageLambda;              //@synthesize zoomingImageLambda=_zoomingImageLambda - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(double)zoomingImageWidth;
-(double)zoomingImageImposedAlphaOfOtherViews;
-(double)zoomingImageAlpha;
-(void)setZoomingImageAlpha:(double)arg1 ;
-(void)setZoomingImageWidth:(double)arg1 ;
-(void)setZoomingImageImposedAlphaOfOtherViews:(double)arg1 ;
-(double)_zoomingImageLambda;
-(void)_setZoomingImageLambda:(double)arg1 ;
@end
