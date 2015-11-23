/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CKPhotoPickerItemForSendingDelegate.h>
#import <libobjc.A.dylib/CKPhotoPickerCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/CKPhotoPickerCellDelegate.h>

@protocol CKPhotoPickerCollectionViewDelegate;
@class UICollectionView, CKPhotoPickerCollectionViewLayout, PHFetchResult, PHCachingImageManager, NSMutableDictionary, NSMutableSet, NSArray, NSString;

@interface CKPhotoPickerCollectionViewController : CKViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKPhotoPickerItemForSendingDelegate, CKPhotoPickerCollectionViewLayoutDelegate, CKPhotoPickerCellDelegate> {

	BOOL _zoomed;
	BOOL _defaultStateSelected;
	id<CKPhotoPickerCollectionViewDelegate> _delegate;
	UICollectionView* _collectionView;
	CKPhotoPickerCollectionViewLayout* _collectionViewLayout;
	PHFetchResult* _assets;
	PHCachingImageManager* _imageManager;
	NSMutableDictionary* _selectedFullAssets;
	long long _maxAssetsToDisplay;
	NSMutableSet* _irisAssetsToSend;

}

@property (assign,nonatomic) id<CKPhotoPickerCollectionViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * assetsToSend; 
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKPhotoPickerCollectionViewLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) PHFetchResult * assets;                                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                  //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedFullAssets;                              //@synthesize selectedFullAssets=_selectedFullAssets - In the implementation block
@property (assign,nonatomic) long long maxAssetsToDisplay;                                          //@synthesize maxAssetsToDisplay=_maxAssetsToDisplay - In the implementation block
@property (assign,getter=isZoomed,nonatomic) BOOL zoomed;                                           //@synthesize zoomed=_zoomed - In the implementation block
@property (nonatomic,retain) NSMutableSet * irisAssetsToSend;                                       //@synthesize irisAssetsToSend=_irisAssetsToSend - In the implementation block
@property (assign,nonatomic) BOOL defaultStateSelected;                                             //@synthesize defaultStateSelected=_defaultStateSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssets:(PHFetchResult *)arg1 ;
-(PHFetchResult *)assets;
-(void)setDelegate:(id<CKPhotoPickerCollectionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<CKPhotoPickerCollectionViewDelegate>)delegate;
-(CKPhotoPickerCollectionViewLayout *)collectionViewLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setCollectionViewLayout:(CKPhotoPickerCollectionViewLayout *)arg1 ;
-(BOOL)isZoomed;
-(void)setZoomed:(BOOL)arg1 ;
-(void)updatePreferredContentSize;
-(NSArray *)assetsToSend;
-(void)item:(id)arg1 requiresCloudDownloadForAsset:(id)arg2 ;
-(void)item:(id)arg1 encounteredError:(id)arg2 forAsset:(id)arg3 ;
-(void)photoPickerCellBadgeStateDidChange:(id)arg1 ;
-(NSMutableDictionary *)selectedFullAssets;
-(void)setSelectedFullAssets:(NSMutableDictionary *)arg1 ;
-(void)setMaxAssetsToDisplay:(long long)arg1 ;
-(long long)maxAssetsToDisplay;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(void)setDefaultStateSelected:(BOOL)arg1 ;
-(id)_assetForIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(BOOL)defaultStateSelected;
-(NSMutableSet *)irisAssetsToSend;
-(CGSize)_targetSizeForAsset:(id)arg1 ;
-(void)_loadIrisPlayerItem:(id)arg1 targetSize:(CGSize)arg2 cell:(id)arg3 ;
-(id)_imageRequestOptions;
-(PHCachingImageManager *)imageManager;
-(id)_appendedVideoURL:(id)arg1 ;
-(void)_populatePreviewForSendingItem:(id)arg1 withAsset:(id)arg2 ;
-(void)layout:(id)arg1 collectionView:(id)arg2 didUpdateVisibleFrame:(CGRect)arg3 indexPath:(id)arg4 ;
-(void)setIrisAssetsToSend:(NSMutableSet *)arg1 ;
@end

