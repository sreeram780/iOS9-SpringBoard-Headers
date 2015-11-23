/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSArray, CUIThemeRendition;

@interface CUINamedLayerStack : CUINamedLookup {

	NSArray* _layers;
	CUIThemeRendition* _flattenedImageRendition;
	CUIThemeRendition* _radiosityImageRendition;

}

@property (nonatomic,retain) NSArray * layers;                         //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) CGImageRef radiosityImage; 
+(vImage_Buffer*)_doRadiosityBlurOnPixelBuffer:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(BOOL*)arg7 adjustedSize:(CGSize*)arg8 ;
+(CGImageRef)createRadiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 ;
+(void)radiosityImageWithImage:(CGImageRef)arg1 displayScale:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)traitCollection;
-(id)flattenedUIImage;
-(CGSize)size;
-(void)dealloc;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(/*^block*/id)arg4 ;
-(id)layerImageAtIndex:(unsigned long long)arg1 ;
-(CGImageRef)radiosityImage;
-(void)setLayers:(NSArray *)arg1 ;
@end

