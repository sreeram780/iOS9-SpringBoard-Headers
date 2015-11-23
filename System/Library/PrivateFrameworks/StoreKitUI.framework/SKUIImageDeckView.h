/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIDynamicAnimator, SKUIImageDeckViewElement, NSMapTable, NSArray, UIView, NSString;

@interface SKUIImageDeckView : SKUIViewReuseView <UIGestureRecognizerDelegate, SKUIViewElementView> {

	UIDynamicAnimator* _animator;
	double _fitWidth;
	SKUIImageDeckViewElement* _imageDeckViewElement;
	NSMapTable* _viewElementViews;
	NSArray* _imageViews;
	NSMapTable* _imageViewToImageResourceCacheKey;
	UIView* _selectedImageView;
	unsigned long long _selectedImageViewIndex;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) NSArray * imageViews;                   //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)_layoutImages;
@end

