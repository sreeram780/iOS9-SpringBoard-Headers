/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout, UITableView, NSString;

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout* _flowLayout;
	UITableView* _table;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadData;
-(void)layoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithTable:(id)arg1 ;
-(void)_invalidateTable;
-(BOOL)canBecomeFirstResponder;
-(void)_cellTapped:(id)arg1 ;
-(void)_doneTapped;
-(void)_setIndexColor:(id)arg1 ;
@end

