/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SUImageModifier;

@interface SUImageDataProvider : ISDataProvider <NSCopying> {

	UIColor* _fillColor;
	CGSize _finalSize;
	double _inputImageScale;
	SUImageModifier* _modifier;

}

@property (retain) UIColor * fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (assign) CGSize finalSize;                        //@synthesize finalSize=_finalSize - In the implementation block
@property (assign) double inputImageScale;                  //@synthesize inputImageScale=_inputImageScale - In the implementation block
@property (retain) SUImageModifier * modifier;              //@synthesize modifier=_modifier - In the implementation block
-(SUImageModifier *)modifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)setInputImageScale:(double)arg1 ;
-(void)setModifier:(SUImageModifier *)arg1 ;
-(CGSize)finalSize;
-(void)_getFinalSize:(CGSize*)arg1 imageFrame:(CGRect*)arg2 forImage:(id)arg3 withModifier:(id)arg4 ;
-(double)inputImageScale;
-(id)newImageFromImage:(id)arg1 ;
-(void)setFinalSize:(CGSize)arg1 ;
@end

