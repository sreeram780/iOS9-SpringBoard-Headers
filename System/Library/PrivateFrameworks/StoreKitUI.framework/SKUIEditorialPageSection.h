/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIColorScheme, SKUIEditorialLayout, SKUIViewElementLayoutContext, SKUIEditorialComponent;

@interface SKUIEditorialPageSection : SKUIStorePageSection {

	SKUIColorScheme* _colorScheme;
	SKUIEditorialLayout* _editorialLayout;
	BOOL _hasValidColorScheme;
	BOOL _isExpanded;
	SKUIViewElementLayoutContext* _layoutContext;

}

@property (nonatomic,readonly) SKUIEditorialComponent * pageComponent; 
-(id)_colorScheme;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_editorialLayout;
@end
