/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, NSMutableArray, SKUIInfoListViewElement, NSString;

@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	double _columnHeight;
	NSMutableArray* _columns;
	double _columnWidth;
	SKUIInfoListViewElement* _infoList;
	long long _numberOfColumns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(long long)numberOfCells;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_requestCellLayout;
-(UIEdgeInsets)_contentInsetForIndexPath:(id)arg1 ;
-(id)_reloadColumnDataIfNecessary;
-(void)_enumerateVisibleIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(long long)_numberOfColumnsForWidth:(double)arg1 ;
@end

