/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUISignInViewDelegate;
@class NSMapTable, NSString;

@interface SKUISignInTemplateView : SKUIViewReuseView <SKUIViewElementView> {

	NSMapTable* _viewElements;
	NSMapTable* _viewMargins;
	id<SKUISignInViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISignInViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3 ;
+(BOOL)_useEditorialLayoutForLabelElement:(id)arg1 ;
+(UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4 ;
+(void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SKUISignInViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SKUISignInViewDelegate>)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

