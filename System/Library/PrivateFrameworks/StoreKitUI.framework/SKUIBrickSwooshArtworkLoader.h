/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {

	long long _artworkSize;

}

@property (nonatomic,readonly) SKUIBrickSwooshViewController * swooshViewController; 
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(BOOL)loadImageForBrick:(id)arg1 reason:(long long)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedImageForBrick:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
@end

