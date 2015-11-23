/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIMenuPopoverDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUIDividerView, NSMutableArray, UIControl, SKUIMenuPopoverController, NSMapTable, NSString;

@interface SKUIFilterBarView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIMenuPopoverDelegate, SKUIViewElementView> {

	SKUIDividerView* _bottomDividerView;
	NSMutableArray* _centerElementViews;
	UIEdgeInsets _contentInset;
	NSMutableArray* _elementControllers;
	UIControl* _focusedMenuButton;
	NSMutableArray* _leftElementViews;
	SKUIMenuPopoverController* _popoverController;
	NSMutableArray* _rightElementViews;
	NSMapTable* _viewElementViews;

}

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
+(id)_attributedStringForButtonText:(id)arg1 style:(id)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)_imageTapAction:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(void)_destroyMenuPopover;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
@end

