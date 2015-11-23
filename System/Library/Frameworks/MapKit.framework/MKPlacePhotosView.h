/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKPlacePhotosViewDelegate;
@class NSArray, NSMutableArray, UIScrollView, UILabel, UIActivityIndicatorView, UIVisualEffectView, UINavigationBar, UIView, UIImageView, NSLayoutConstraint, UINavigationItem, NSString;

@interface MKPlacePhotosView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSArray* _photos;
	NSMutableArray* _photoViews;
	UIScrollView* _scrollView;
	UILabel* _pageInfoLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSMutableArray* _singlePhotoArray;
	UIVisualEffectView* _topView;
	UINavigationBar* _navBar;
	UIView* _bottomView;
	UIVisualEffectView* _bottomEffectView;
	UIImageView* _gradientView;
	UILabel* _descriptionLabel;
	UILabel* _licenseLabel;
	UILabel* _authorLabel;
	NSLayoutConstraint* _statusBarHeightConstraint;
	NSLayoutConstraint* _navBarHeightConstraint;
	int _actualPage;
	UINavigationItem* _navItem;
	unsigned long long _textDisplayedForPage;
	NSArray* _fontConstraints;
	id<MKPlacePhotosViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKPlacePhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentPage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentSizeDidChange;
-(void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startActivityIndicator;
-(void)toggleNavBar;
-(void)photoAttributionTapped;
-(void)memoryWarning:(id)arg1 ;
-(void)updateStatusBarConstraint;
-(void)updateDetails;
-(unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3 ;
-(void)showPhotoAt:(unsigned long long)arg1 ;
-(void)backTapped;
-(void)stopActivityIndicator;
-(id)headerTitleForPage:(unsigned long long)arg1 ;
-(id)initWithPhotos:(id)arg1 ;
-(void)updateTextForPage:(unsigned long long)arg1 ;
-(double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3 ;
-(void)hideToView:(id)arg1 ;
-(void)setDelegate:(id<MKPlacePhotosViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<MKPlacePhotosViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)currentPage;
-(void)willEnterForeground:(id)arg1 ;
@end

