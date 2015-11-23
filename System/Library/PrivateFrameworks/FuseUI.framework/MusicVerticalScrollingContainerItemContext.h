/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MusicVerticalScrollingContainerItemContextDelegate;
@class UIScrollView, UICollectionView, UICollectionViewCell, NSMutableArray, MusicVerticalScrollingContainerItem, UIView;

@interface MusicVerticalScrollingContainerItemContext : NSObject {

	UIScrollView* _contentScrollView;
	UICollectionView* _containerCollectionView;
	UICollectionViewCell* _containerCell;
	BOOL _contentScrollViewCanPanVertically;
	BOOL _contentScrollViewScrollsToTop;
	BOOL _hasSetupContentScrollView;
	BOOL _isChangingContentScrollViewContentOffset;
	double _lastSeenContentHeight;
	unsigned long long _originalAutoresizingMask;
	NSMutableArray* _overriddenContentHeightStack;
	BOOL _readyForDisplay;
	BOOL _shouldIgnoreContentScrollViewChanges;
	id<MusicVerticalScrollingContainerItemContextDelegate> _delegate;
	MusicVerticalScrollingContainerItem* _item;

}

@property (assign,nonatomic,__weak) id<MusicVerticalScrollingContainerItemContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MusicVerticalScrollingContainerItem * item;                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UIView * itemView; 
@property (getter=isOverridingContentHeight,nonatomic,readonly) BOOL overridingContentHeight; 
-(void)setDelegate:(id<MusicVerticalScrollingContainerItemContextDelegate>)arg1 ;
-(void)dealloc;
-(id<MusicVerticalScrollingContainerItemContextDelegate>)delegate;
-(MusicVerticalScrollingContainerItem *)item;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareViewForTearDown;
-(void)_notifyDelegateOfUpdatedContentHeightInContentScrollView;
-(id)_contentScrollView;
-(id)_viewAllowingLoadingFromViewController:(BOOL)arg1 ;
-(void)_updateLayoutOfItemView:(id)arg1 withContentScrollView:(id)arg2 inCell:(id)arg3 withPosition:(unsigned long long)arg4 containerCollectionView:(id)arg5 ;
-(void)_tearDownContentScrollView;
-(id)_verticallyAdjustableScrollView;
-(BOOL)isOverridingContentHeight;
-(void)beginOverridingContentHeightToValue:(double)arg1 ;
-(double)contentHeightForContentWidth:(double)arg1 withTemporaryParentView:(id)arg2 ;
-(void)endOverridingContentHeight;
-(void)prepareViewForDisplayInCell:(id)arg1 withPosition:(unsigned long long)arg2 containerCollectionView:(id)arg3 ;
-(void)updateLayoutOfItemViewInCell:(id)arg1 withPosition:(unsigned long long)arg2 containerCollectionView:(id)arg3 ;
-(id)initWithItem:(id)arg1 ;
-(UIView *)itemView;
@end

