/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>
#import <libobjc.A.dylib/SKUIMediaPlayerObserver.h>

@class NSMapTable, SKUIImageViewElement, SKUIPlayButton, NSString;

@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView <SKUIViewElementView, SKUIMediaPlayerObserver> {

	NSMapTable* _imageViewToImageResourceCacheKey;
	SKUIImageViewElement* _imageViewElement;
	SKUIPlayButton* _playButton;
	unsigned long long _playButtonPosition;
	NSMapTable* _viewElementViews;

}

@property (nonatomic,readonly) SKUIPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4 ;
-(id)init;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2 ;
-(CGRect)frameForView:(id)arg1 ;
-(SKUIPlayButton *)playButton;
@end

